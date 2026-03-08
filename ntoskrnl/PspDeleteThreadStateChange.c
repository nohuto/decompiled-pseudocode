/*
 * XREFs of PspDeleteThreadStateChange @ 0x1409AE180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x140354658 (PsMultiResumeThread.c)
 */

LONG_PTR __fastcall PspDeleteThreadStateChange(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    PsMultiResumeThread(*(_QWORD *)a1, 0LL, v1);
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63547350u);
}
