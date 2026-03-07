NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  NTSTRSAFE_PSTR v5; // rdx
  __int64 v6; // r8
  signed __int64 v7; // rcx
  char v8; // al
  NTSTRSAFE_PSTR v9; // rcx
  NTSTATUS result; // eax

  v5 = pszDest;
  v6 = 40LL;
  v7 = "USBXHCI" - pszDest;
  do
  {
    if ( v6 == -2147483606 )
      break;
    v8 = v5[v7];
    if ( !v8 )
      break;
    *v5++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v5 - 1;
  result = v6 == 0 ? 0x80000005 : 0;
  if ( v6 )
    v9 = v5;
  *v9 = 0;
  return result;
}
