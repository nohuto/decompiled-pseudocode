NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v4);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
