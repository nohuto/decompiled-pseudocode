/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x1C02BE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC708 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BCA78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02BD668 (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(DXGTRACKEDWORKLOAD *a1)
{
  const void *v1; // rdx
  unsigned int *v2; // rax
  size_t v3; // r8
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **Current; // rax
  __int64 v11; // rbx
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // r9
  int v14; // eax
  struct DXGDEVICE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGTRACKEDWORKLOAD *v18; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-F0h] BYREF
  char v20; // [rsp+40h] [rbp-E8h]
  unsigned int v21[2]; // [rsp+48h] [rbp-E0h] BYREF
  struct DXGDEVICE *v22; // [rsp+50h] [rbp-D8h] BYREF
  DXGTRACKEDWORKLOAD *v23[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v24[160]; // [rsp+70h] [rbp-B8h] BYREF

  v1 = a1;
  v23[2] = a1;
  *(_QWORD *)v21 = 0LL;
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 8 )
  {
    if ( (unsigned int)v3 > 8 )
      v3 = 8LL;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v1 = (const void *)MmUserProbeAddress;
    memmove(v21, v1, v3);
    v22 = 0LL;
    v18 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v23,
      v21[1],
      Current,
      &v18,
      &v22);
    if ( v18 )
    {
      v12 = v22;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v19, v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v12, 0, v13, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
      v11 = v14;
      if ( v14 >= 0 )
      {
        LODWORD(v11) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics((struct _KTHREAD **)v18, v15);
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v17 + 24) = v12;
        *(_QWORD *)(v17 + 32) = v11;
        WdLogEvent5_WdError(v17);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
      if ( v19 )
      {
        if ( v20 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      LODWORD(v11) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v23);
    return (unsigned int)v11;
  }
  else
  {
    v4 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, a1, v3);
    *(_QWORD *)(v4 + 24) = 773LL;
    WdLogEvent5_WdWarning(v4);
    return 3221225485LL;
  }
}
