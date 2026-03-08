/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800F87E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F8868 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801BA6A4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180282718 (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x1802828DC (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
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
