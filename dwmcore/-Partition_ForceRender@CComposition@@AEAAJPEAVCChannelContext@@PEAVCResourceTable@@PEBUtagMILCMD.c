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
