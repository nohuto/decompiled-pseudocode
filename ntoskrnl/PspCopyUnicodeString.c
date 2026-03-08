/*
 * XREFs of PspCopyUnicodeString @ 0x14075A07C
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x140759A00 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PspCopyUnicodeString(const void **a1, __int64 a2, void **a3)
{
  void *v5; // rcx

  *(_OWORD *)a2 = *(_OWORD *)a1;
  if ( a1[1] )
  {
    v5 = *a3;
    *(_QWORD *)(a2 + 8) = *a3;
    memmove(v5, a1[1], *(unsigned __int16 *)a1);
    memset(
      (char *)*a3 + *(unsigned __int16 *)a1,
      0,
      *((unsigned __int16 *)a1 + 1) - (unsigned __int64)*(unsigned __int16 *)a1);
    if ( *a3 )
      *a3 = (char *)*a3 + *((unsigned __int16 *)a1 + 1);
  }
  return 0LL;
}
