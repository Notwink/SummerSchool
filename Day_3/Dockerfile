FROM alpine:latest
LABEL maintainer="Boris Kuleshov"
LABEL description="This Dockerfile installs NGINX, Python 3.5 and copies file README."
RUN apk add --update nginx && \
rm -rf /var/cache/apk/* && \
mkdir -p /tmp/nginx/ && \
apk add --update python3-dev
COPY ./README /etc/nginx/README
EXPOSE 80/tcp
ENTRYPOINT ["nginx"]
CMD ["-g", "daemon off;"] 
