/*
 * XREFs of NtDxgkResetTrackedWorkloadStatistics @ 0x1C035B4F0
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0358EFC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0359260 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C035A3D0 (-ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall NtDxgkResetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  const void *v1; // rdx
  unsigned int *v2; // rax
  size_t v3; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // r9
  int v11; // eax
  struct DXGDEVICE *v12; // rdx
  struct DXGDEVICE *v13; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v14[2]; // [rsp+58h] [rbp-F0h] BYREF
  DXGTRACKEDWORKLOAD *v15; // [rsp+60h] [rbp-E8h] BYREF
  DXGTRACKEDWORKLOAD *v16[2]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v17[24]; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v18[160]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = a1;
  v13 = a1;
  *(_QWORD *)v14 = 0LL;
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
    memmove(v14, v1, v3);
    v13 = 0LL;
    v15 = 0LL;
    Current = DXGPROCESS::GetCurrent(v5);
    DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
      (DXGTRACKEDWORKLOADBYHANDLE *)v16,
      v14[1],
      Current,
      &v15,
      &v13);
    v7 = (struct _KTHREAD **)v15;
    if ( v15 )
    {
      v9 = v13;
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v17, v13);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v18, (__int64)v9, 0, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v18, 0LL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        LODWORD(v8) = DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(v7, v12);
      }
      else
      {
        WdLogSingleEntry2(2LL, v9, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
          (__int64)v9,
          v8,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v18);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v17);
    }
    else
    {
      LODWORD(v8) = -1073741811;
    }
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v16);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(3LL, 810LL);
    return 3221225485LL;
  }
}
