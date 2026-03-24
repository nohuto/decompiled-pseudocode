/*
 * XREFs of ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AE624
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8810 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C005A5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall ChildSynchronizeCursorAsyncWithRootPartition(_QWORD *a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rbx

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    v3 = MouseProcessor + 3864;
    CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3864));
    *(_QWORD *)(v3 + 24) = *a1;
    *(_BYTE *)(v3 + 32) = 1;
    CPushLock::ReleaseLock((CPushLock *)v3);
  }
}
