/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1C02BE8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002DA4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C0102270 (DxgkGetDeviceStateInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC708 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BCA78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BD1B4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BD83C (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGDEVICE *a1)
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
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  int DeviceStateInternal; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  struct DXGDEVICE *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  _BYTE v35[8]; // [rsp+30h] [rbp-468h] BYREF
  __int64 v36; // [rsp+38h] [rbp-460h]
  char v37; // [rsp+40h] [rbp-458h]
  struct DXGDEVICE *v38; // [rsp+48h] [rbp-450h] BYREF
  int v39; // [rsp+50h] [rbp-448h]
  DXGTRACKEDWORKLOAD *v40[2]; // [rsp+58h] [rbp-440h] BYREF
  _BYTE v41[16]; // [rsp+68h] [rbp-430h] BYREF
  DXGTRACKEDWORKLOAD *v42; // [rsp+78h] [rbp-420h] BYREF
  struct DXGDEVICE *v43[2]; // [rsp+80h] [rbp-418h] BYREF
  int v44; // [rsp+90h] [rbp-408h]
  _OWORD v45[2]; // [rsp+98h] [rbp-400h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-3E0h]
  __int64 v47; // [rsp+C8h] [rbp-3D0h]
  _BYTE v48[600]; // [rsp+D0h] [rbp-3C8h] BYREF
  _BYTE v49[160]; // [rsp+330h] [rbp-168h] BYREF
  _BYTE v50[160]; // [rsp+3D0h] [rbp-C8h] BYREF

  v43[1] = a1;
  memset(v48, 0, sizeof(v48));
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 < 0x258 )
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 535LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( (unsigned int)v4 > 0x258 )
    v4 = 600LL;
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  memmove(v48, v7, v4);
  v43[0] = 0LL;
  v42 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v40,
    *(unsigned int *)&v48[4],
    Current,
    &v42,
    v43);
  v13 = v42;
  if ( v42 )
  {
    v15 = v43[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41,
      v43[0]);
    v36 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    v37 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v15, 0, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v21 = (unsigned __int64 *)&v48[80];
      if ( *((_DWORD *)v13 + 21) )
        v21 = 0LL;
      LODWORD(v14) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
                       v13,
                       v15,
                       (struct COREDEVICEACCESS *)v49,
                       *(unsigned __int64 *)&v48[48],
                       v21);
      if ( (int)v14 < 0 )
        goto LABEL_14;
      v24 = 0LL;
      if ( *((_DWORD *)v13 + 284) == 1 )
      {
        memset(v45, 0, sizeof(v45));
        v46 = 0LL;
        v47 = 0LL;
        LODWORD(v45[0]) = *((_DWORD *)v15 + 109);
        DWORD1(v45[0]) = 4;
        DeviceStateInternal = DxgkGetDeviceStateInternal((ULONG64)v45, 0, v22);
        v14 = DeviceStateInternal;
        if ( DeviceStateInternal < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
          *(_QWORD *)(v29 + 24) = v14;
          *(_QWORD *)(v29 + 32) = 598LL;
          WdLogEvent5_WdWarning(v29);
          goto LABEL_14;
        }
        v24 = (unsigned int)(v46 + 1);
      }
      v38 = v15;
      v39 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v15, 0, v23, 0);
      if ( *((_DWORD *)v13 + 284) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38),
            v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL),
            v14 = v31,
            v31 < 0) )
      {
        v33 = WdLogNewEntry5_WdError(v32, v30);
        *(_QWORD *)(v33 + 24) = v15;
        *(_QWORD *)(v33 + 32) = v14;
        WdLogEvent5_WdError(v33);
      }
      else
      {
        LODWORD(v14) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                         v13,
                         v30,
                         (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v48,
                         v24);
        if ( (int)v14 >= 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
          if ( v38 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38);
          v44 = 1;
          v34 = (_DWORD *)((char *)a1 + 592);
          if ( (unsigned __int64)a1 + 592 >= MmUserProbeAddress )
            v34 = (_DWORD *)MmUserProbeAddress;
          *v34 = 1;
          goto LABEL_14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
      if ( v38 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38);
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = v15;
      *(_QWORD *)(v20 + 32) = v14;
      WdLogEvent5_WdError(v20);
    }
LABEL_14:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    goto LABEL_11;
  }
  LODWORD(v14) = -1073741811;
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v40);
  return (unsigned int)v14;
}
