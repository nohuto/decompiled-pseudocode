/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C02BE380
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC708 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BCA78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02BD068 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BD1B4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  __int64 v2; // rdx
  unsigned int *v3; // rax
  size_t v4; // r8
  __int64 v5; // rax
  const void *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **Current; // rax
  DXGTRACKEDWORKLOAD *v13; // rsi
  __int64 v14; // rbx
  struct DXGDEVICE *v15; // r14
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  struct DXGDEVICE *v22; // rdx
  ULONG64 v23; // rdx
  _QWORD *v24; // rdx
  _DWORD *v25; // rdx
  __int64 v26; // [rsp+30h] [rbp-358h] BYREF
  char v27; // [rsp+38h] [rbp-350h]
  DXGTRACKEDWORKLOAD *v28[2]; // [rsp+40h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v29; // [rsp+50h] [rbp-338h] BYREF
  struct DXGDEVICE *v30[3]; // [rsp+58h] [rbp-330h] BYREF
  _BYTE v31[592]; // [rsp+70h] [rbp-318h] BYREF
  _BYTE v32[160]; // [rsp+2C0h] [rbp-C8h] BYREF

  v30[1] = a1;
  memset(v31, 0, sizeof(v31));
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 >= 0x250 )
  {
    if ( (unsigned int)v4 > 0x250 )
      v4 = 592LL;
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    memmove(v31, v7, v4);
    v30[0] = 0LL;
    v29 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v28,
      *(unsigned int *)&v31[4],
      Current,
      &v29,
      v30);
    v13 = v29;
    if ( v29 )
    {
      v15 = v30[0];
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v26, v30[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v15, 0, v16, 0);
      v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
      v14 = v17;
      if ( v17 >= 0 )
      {
        v21 = (unsigned __int64 *)&v31[16];
        if ( *((_DWORD *)v13 + 21) )
          v21 = 0LL;
        LODWORD(v14) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
                         v13,
                         v15,
                         (struct COREDEVICEACCESS *)v32,
                         *(unsigned __int64 *)&v31[8],
                         v21);
        if ( (int)v14 >= 0 )
        {
          LODWORD(v14) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                           v13,
                           v22,
                           (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v31);
          if ( (int)v14 >= 0 )
          {
            v23 = (ULONG64)a1 + 536;
            if ( (unsigned __int64)a1 + 536 >= MmUserProbeAddress )
              v23 = MmUserProbeAddress;
            *(_OWORD *)v23 = *(_OWORD *)&v31[536];
            *(_OWORD *)(v23 + 16) = *(_OWORD *)&v31[552];
            *(_QWORD *)(v23 + 32) = *(_QWORD *)&v31[568];
            v24 = (_QWORD *)((char *)a1 + 576);
            if ( (unsigned __int64)a1 + 576 >= MmUserProbeAddress )
              v24 = (_QWORD *)MmUserProbeAddress;
            *v24 = *(_QWORD *)&v31[576];
            v25 = (_DWORD *)((char *)a1 + 584);
            if ( (unsigned __int64)a1 + 584 >= MmUserProbeAddress )
              v25 = (_DWORD *)MmUserProbeAddress;
            *v25 = *(_DWORD *)&v31[584];
          }
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v20 + 24) = v15;
        *(_QWORD *)(v20 + 32) = v14;
        WdLogEvent5_WdError(v20);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
      if ( v26 )
      {
        if ( v27 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      LODWORD(v14) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v28);
    return (unsigned int)v14;
  }
  else
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 671LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
}
