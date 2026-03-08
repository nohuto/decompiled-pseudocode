/*
 * XREFs of DbgkpSendApiMessage @ 0x1409370E0
 * Callers:
 *     DbgkPostModuleMessage @ 0x1405395FC (DbgkPostModuleMessage.c)
 *     DbgkUnMapViewOfSection @ 0x1406A10EC (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1407D2C6C (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     DbgkCreateMinimalProcess @ 0x140817FEC (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14093621C (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x1409362CC (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140936388 (DbgkExitThread.c)
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     EtwTraceDebuggerEvent @ 0x1405FA5D0 (EtwTraceDebuggerEvent.c)
 *     DbgkpQueueMessage @ 0x140934EE8 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1409365B4 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v7 = (unsigned __int8)DbgkpSuspendProcess((__int64)Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = DbgkpQueueMessage(Object, (char *)CurrentThread, a3, 32 * (a2 & 2u), 0LL);
    if ( v7 )
    {
      PsThawMultiProcess((__int64)Object, 0LL, 1u);
      KeLeaveCriticalRegion();
    }
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}
