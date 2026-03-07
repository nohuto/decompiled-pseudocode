void __fastcall USB4_HOST_ROUTER::~USB4_HOST_ROUTER(struct _UNICODE_STRING *this)
{
  RtlFreeUnicodeString(this + 1);
}
