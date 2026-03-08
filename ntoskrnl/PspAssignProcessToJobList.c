/*
 * XREFs of PspAssignProcessToJobList @ 0x1409ADF10
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 * Callees:
 *     PsAssignProcessToJobObject @ 0x1406FF9A0 (PsAssignProcessToJobObject.c)
 *     EtwTraceJobAssignProcess @ 0x1409E25F8 (EtwTraceJobAssignProcess.c)
 */

__int64 __fastcall PspAssignProcessToJobList(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  ULONG_PTR v8; // rbp
  unsigned int v9; // eax
  int v10; // edi

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !a3 )
    return 0LL;
  while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    v8 = *(_QWORD *)(a2 + 8 * v4);
    v9 = PsAssignProcessToJobObject(v8, a1, 0LL);
    v10 = v9;
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobAssignProcess(v8, a1, v9);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( ++v4 >= a3 )
      return 0LL;
  }
  return 3221225547LL;
}
