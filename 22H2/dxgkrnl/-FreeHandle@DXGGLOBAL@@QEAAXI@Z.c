/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0002A60
 * Callers:
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0175ABC (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01A75CC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C034F6D8 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C01BA410 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  int v4; // edx
  int v5; // r8d

  if ( this[39] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1462LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(0, v4, v5, 0, 2, -1, (__int64)L"m_ShareMutex.IsOwner()", 182, 0, 0, 0, 0);
    }
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 42), a2);
}
