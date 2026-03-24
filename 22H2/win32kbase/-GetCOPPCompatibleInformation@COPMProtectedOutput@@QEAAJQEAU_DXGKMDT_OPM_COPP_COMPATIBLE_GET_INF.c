/*
 * XREFs of ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0140184
 * Callers:
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C01400E8 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00885A0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00B2E30 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     CallMonitor @ 0x1C00C08B0 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCOPPCompatibleInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rdi
  unsigned int v7; // esi
  _QWORD *PoolWithTag; // rbx
  void *v9; // rdx

  v3 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v7 = -1071774438;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x4D504F47u);
    if ( PoolWithTag )
    {
      *PoolWithTag = *((_QWORD *)this + 9);
      memmove(PoolWithTag + 1, a2, 0x1000uLL);
      v7 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23249Bu, PoolWithTag, 0x1008u, a3, 0x1000u);
      OPM::OPMFreeMemory((OPM *)PoolWithTag, v9);
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v7;
}
