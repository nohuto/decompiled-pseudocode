/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800F9420
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F94A8 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801BD8D4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180285E58 (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x18028601C (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_FORCERENDER *a4)
{
  char *v4; // rbx
  CRenderTargetManager *v7; // rcx

  v4 = (char *)this + 216;
  if ( *((_BYTE *)a4 + 4) )
    *(_BYTE *)(*(_QWORD *)v4 + 582LL) = 1;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    CDeviceManager::EnterHardwareProtectionTeardown(this);
  }
  else if ( *((_DWORD *)a4 + 2) == 2 )
  {
    CDeviceManager::LeaveHardwareProtectionTeardown(this);
  }
  if ( *((_BYTE *)a4 + 12) )
    *((_BYTE *)this + 1276) = 1;
  v7 = *(CRenderTargetManager **)v4;
  if ( *((_BYTE *)a4 + 5) )
    CRenderTargetManager::HandleDDAArrivalOrDeparture(v7);
  else
    CRenderTargetManager::ForceFullRender(v7);
  return 0LL;
}
