/*
 * XREFs of RtlStringCbCopyExA @ 0x140384764
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14035BD04 (RtlStringCopyWorkerA.c)
 *     RtlStringExValidateDestA @ 0x1403847DC (RtlStringExValidateDestA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszSrc,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  int v6; // r8d
  __int64 v7; // r9
  char *v8; // r10
  NTSTATUS v9; // eax
  size_t v11; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)ppszDestEnd;
  v6 = RtlStringExValidateDestA(pszDest, 0x100uLL, (const size_t)pszSrc, 0);
  if ( v6 < 0 )
  {
    *v8 = v7;
  }
  else
  {
    pcchNewDestLength &= v7;
    v9 = RtlStringCopyWorkerA(v8, 0x100uLL, &pcchNewDestLength, &::pszSrc, v11);
    v6 = v9;
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      if ( pcbRemaining )
        *pcbRemaining = 256 - pcchNewDestLength;
    }
  }
  return v6;
}
