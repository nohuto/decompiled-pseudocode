/*
 * XREFs of DbgkpSendApiMessage @ 0x1408871A4
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EDEAC (DbgkPostModuleMessage.c)
 *     DbgkUnMapViewOfSection @ 0x14068B978 (DbgkUnMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1406C01E0 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x1406FCFD4 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x140732540 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x140799154 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x1408879AC (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x140887A5C (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140887B18 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x1405A755C (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406857E4 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140885568 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140887D30 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  int v6; // ebp
  int v7; // esi

  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(BugCheckParameter1);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(BugCheckParameter1, (char *)KeGetCurrentThread(), a3, 32 * (a2 & 2u), 0LL);
    if ( v6 )
    {
      PsThawProcess((__int64)BugCheckParameter1, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
