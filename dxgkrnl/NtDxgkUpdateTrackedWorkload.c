/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1C035B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006964 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C0193CE0 (DxgkGetDeviceStateInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0358EFC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0359260 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C035A2E8 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C035A598 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v8; // rbx
  __int64 v9; // rdi
  struct DXGDEVICE *v10; // rsi
  __int64 v11; // r9
  int v12; // eax
  struct COREDEVICEACCESS *v13; // r8
  unsigned __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  int DeviceStateInternal; // eax
  struct DXGDEVICE *v19; // rdx
  int v20; // eax
  _DWORD *v21; // rdx
  _BYTE v22[8]; // [rsp+50h] [rbp-468h] BYREF
  __int64 v23; // [rsp+58h] [rbp-460h]
  char v24; // [rsp+60h] [rbp-458h]
  struct DXGDEVICE *v25; // [rsp+68h] [rbp-450h] BYREF
  int v26; // [rsp+70h] [rbp-448h]
  DXGTRACKEDWORKLOAD *v27[2]; // [rsp+78h] [rbp-440h] BYREF
  DXGTRACKEDWORKLOAD *v28; // [rsp+88h] [rbp-430h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp-428h] BYREF
  struct DXGDEVICE *v30[2]; // [rsp+A0h] [rbp-418h] BYREF
  _OWORD v31[2]; // [rsp+B0h] [rbp-408h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-3E8h]
  __int64 v33; // [rsp+E0h] [rbp-3D8h]
  _BYTE v34[600]; // [rsp+F0h] [rbp-3C8h] BYREF
  _BYTE v35[160]; // [rsp+350h] [rbp-168h] BYREF
  _BYTE v36[160]; // [rsp+3F0h] [rbp-C8h] BYREF

  v30[1] = a1;
  memset(v34, 0, sizeof(v34));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x258 )
  {
    WdLogSingleEntry1(3LL, 568LL);
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x258 )
    v3 = 600LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  memmove(v34, v5, v3);
  v30[0] = 0LL;
  v28 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v27,
    *(unsigned int *)&v34[4],
    Current,
    &v28,
    v30);
  v8 = v28;
  if ( v28 )
  {
    v10 = v30[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29,
      v30[0]);
    v23 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
    v24 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v10, 0, v11, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = (unsigned __int64 *)&v34[80];
      if ( *((_DWORD *)v8 + 21) )
        v14 = 0LL;
      LODWORD(v9) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v8, v10, v13, *(unsigned __int64 *)&v34[48], v14);
      if ( (int)v9 < 0 )
        goto LABEL_14;
      v17 = 0LL;
      if ( *((_DWORD *)v8 + 286) == 1 )
      {
        memset(v31, 0, sizeof(v31));
        v32 = 0LL;
        v33 = 0LL;
        LODWORD(v31[0]) = *((_DWORD *)v10 + 117);
        DWORD1(v31[0]) = 4;
        DeviceStateInternal = DxgkGetDeviceStateInternal((ULONG64)v31, 0, v15);
        LODWORD(v9) = DeviceStateInternal;
        if ( DeviceStateInternal < 0 )
        {
          WdLogSingleEntry2(3LL, DeviceStateInternal, 631LL);
          goto LABEL_14;
        }
        v17 = (unsigned int)(v32 + 1);
      }
      v25 = v10;
      v26 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v10, 0, v16, 0);
      if ( *((_DWORD *)v8 + 286) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25),
            v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL),
            v9 = v20,
            v20 < 0) )
      {
        WdLogSingleEntry2(2LL, v10, v20);
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
      else
      {
        LODWORD(v9) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                        v8,
                        v19,
                        (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v34,
                        v17);
        if ( (int)v9 >= 0 )
        {
          DXGTRACKEDWORKLOAD::ReportStats(v8);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
          if ( v25 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
          LODWORD(v28) = 1;
          v21 = (_DWORD *)((char *)a1 + 592);
          if ( (unsigned __int64)a1 + 592 >= MmUserProbeAddress )
            v21 = (_DWORD *)MmUserProbeAddress;
          *v21 = 1;
          goto LABEL_14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      if ( v25 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
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
LABEL_14:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    if ( v24 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
    goto LABEL_11;
  }
  LODWORD(v9) = -1073741811;
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v27);
  return (unsigned int)v9;
}
