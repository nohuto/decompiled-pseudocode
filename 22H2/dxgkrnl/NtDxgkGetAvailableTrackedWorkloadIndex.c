/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02BE040
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C02BC708 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BCA78 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C02BCEEC (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
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
  DXGTRACKEDWORKLOAD *v13; // r14
  __int64 v14; // rbx
  struct DXGDEVICE *v15; // rsi
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 *v21; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rdx
  unsigned int v24; // [rsp+40h] [rbp-348h] BYREF
  int v25; // [rsp+44h] [rbp-344h] BYREF
  DXGTRACKEDWORKLOAD *v26; // [rsp+48h] [rbp-340h] BYREF
  struct DXGDEVICE *v27[2]; // [rsp+50h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v28[2]; // [rsp+60h] [rbp-328h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp-318h] BYREF
  __int64 v30; // [rsp+78h] [rbp-310h]
  char v31; // [rsp+80h] [rbp-308h]
  _BYTE v32[24]; // [rsp+88h] [rbp-300h] BYREF
  unsigned int v33[136]; // [rsp+A0h] [rbp-2E8h] BYREF
  _BYTE v34[160]; // [rsp+2C0h] [rbp-C8h] BYREF

  v27[1] = a1;
  memset(v33, 0, 0x218uLL);
  v3 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  if ( (unsigned int)v4 < 0x218 )
  {
    v5 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
    *(_QWORD *)(v5 + 24) = 439LL;
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( (unsigned int)v4 > 0x218 )
    v4 = 536LL;
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  memmove(v33, v7, v4);
  v27[0] = 0LL;
  v26 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v9, v8, v10, v11);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v28, v33[1], Current, &v26, v27);
  v13 = v26;
  if ( v26 )
  {
    v24 = 0;
    v25 = 0;
    v15 = v27[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32,
      v27[0]);
    v30 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    v31 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v15, 0, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v21 = (unsigned __int64 *)&v33[4];
      if ( *((_DWORD *)v13 + 21) )
        v21 = 0LL;
      LODWORD(v14) = DXGTRACKEDWORKLOAD::GetAvailableIndex(
                       v13,
                       v15,
                       (struct COREDEVICEACCESS *)v34,
                       *(__int64 *)&v33[2],
                       v21,
                       &v24,
                       &v25);
      if ( (int)v14 >= 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
        if ( v31 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32);
        v22 = (_DWORD *)((char *)a1 + 528);
        if ( (unsigned __int64)a1 + 528 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v24;
        v23 = (_DWORD *)((char *)a1 + 532);
        if ( (unsigned __int64)a1 + 532 >= MmUserProbeAddress )
          v23 = (_DWORD *)MmUserProbeAddress;
        *v23 = v25;
        goto LABEL_11;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = v15;
      *(_QWORD *)(v20 + 32) = v14;
      WdLogEvent5_WdError(v20);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v31 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32);
  }
  else
  {
    LODWORD(v14) = -1073741811;
  }
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v28);
  return (unsigned int)v14;
}
