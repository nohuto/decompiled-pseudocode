int __fastcall RtlUnicodeStringValidateDestWorker(
        const _UNICODE_STRING *DestinationString,
        wchar_t **ppszDest,
        unsigned __int64 *pcchDest,
        unsigned __int64 *a4)
{
  int result; // eax
  __int64 v5; // rcx
  unsigned __int64 *v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rdx

  *ppszDest = 0LL;
  *pcchDest = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const unsigned __int64)ppszDest, (unsigned int)pcchDest);
  if ( result >= 0 )
  {
    if ( v5 )
    {
      v8 = *(_QWORD *)(v5 + 8);
      *v6 = (unsigned __int64)*(unsigned __int16 *)(v5 + 2) >> 1;
      *v7 = v8;
    }
  }
  return result;
}
