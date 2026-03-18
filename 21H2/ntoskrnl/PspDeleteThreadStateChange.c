/*
 * XREFs of PspDeleteThreadStateChange @ 0x1409AF6F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x1402EEA18 (PsMultiResumeThread.c)
 */

LONG_PTR __fastcall PspDeleteThreadStateChange(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    PsMultiResumeThread(*(_QWORD *)a1, 0LL, v1);
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63547350u);
}
