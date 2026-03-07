void __fastcall wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset(
        struct _UNICODE_STRING *a1)
{
  RtlFreeUnicodeString(a1);
  *a1 = 0LL;
}
