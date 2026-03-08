/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C035B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0358EFC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0359260 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C0359864 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C035A2E8 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v8; // rbx
  __int64 v9; // rdi
  struct DXGDEVICE *v10; // r14
  __int64 v11; // r9
  int v12; // eax
  struct COREDEVICEACCESS *v13; // r8
  unsigned __int64 *v14; // rax
  struct DXGDEVICE *v15; // rdx
  ULONG64 v16; // rdx
  _QWORD *v17; // rdx
  _DWORD *v18; // rdx
  struct DXGDEVICE *v19; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v20[2]; // [rsp+58h] [rbp-340h] BYREF
  DXGTRACKEDWORKLOAD *v21; // [rsp+68h] [rbp-330h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v23[592]; // [rsp+80h] [rbp-318h] BYREF
  _BYTE v24[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v19 = a1;
  memset(v23, 0, sizeof(v23));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 >= 0x250 )
  {
    if ( (unsigned int)v3 > 0x250 )
      v3 = 592LL;
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    memmove(v23, v5, v3);
    v19 = 0LL;
    v21 = 0LL;
    Current = DXGPROCESS::GetCurrent(v6);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v20,
      *(unsigned int *)&v23[4],
      Current,
      &v21,
      &v19);
    v8 = v21;
    if ( v21 )
    {
      v10 = v19;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v22, v19);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v10, 0, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v14 = (unsigned __int64 *)&v23[16];
        if ( *((_DWORD *)v8 + 21) )
          v14 = 0LL;
        LODWORD(v9) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v8, v10, v13, *(unsigned __int64 *)&v23[8], v14);
        if ( (int)v9 >= 0 )
        {
          LODWORD(v9) = DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
                          v8,
                          v15,
                          (struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)v23);
          if ( (int)v9 >= 0 )
          {
            DXGTRACKEDWORKLOAD::ReportStats(v8);
            v16 = (ULONG64)a1 + 536;
            if ( (unsigned __int64)a1 + 536 >= MmUserProbeAddress )
              v16 = MmUserProbeAddress;
            *(_OWORD *)v16 = *(_OWORD *)&v23[536];
            *(_OWORD *)(v16 + 16) = *(_OWORD *)&v23[552];
            *(_QWORD *)(v16 + 32) = *(_QWORD *)&v23[568];
            v17 = (_QWORD *)((char *)a1 + 576);
            if ( (unsigned __int64)a1 + 576 >= MmUserProbeAddress )
              v17 = (_QWORD *)MmUserProbeAddress;
            *v17 = *(_QWORD *)&v23[576];
            v18 = (_DWORD *)((char *)a1 + 584);
            if ( (unsigned __int64)a1 + 584 >= MmUserProbeAddress )
              v18 = (_DWORD *)MmUserProbeAddress;
            *v18 = *(_DWORD *)&v23[584];
          }
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v10, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v10,
          v9,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v22);
    }
    else
    {
      LODWORD(v9) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v20);
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry1(3LL, 706LL);
    return 3221225485LL;
  }
}
