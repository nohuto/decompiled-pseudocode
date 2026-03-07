__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v8; // rsi
  __int64 v9; // rdi
  struct DXGDEVICE *v10; // r14
  __int64 v11; // r9
  int v12; // eax
  struct COREDEVICEACCESS *v13; // r8
  unsigned __int64 *v14; // rax
  _DWORD *v15; // rdx
  _DWORD *v16; // rdx
  unsigned int v17; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v18; // [rsp+58h] [rbp-340h] BYREF
  struct DXGDEVICE *v19[2]; // [rsp+60h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v20[2]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-318h] BYREF
  __int64 v22; // [rsp+88h] [rbp-310h]
  char v23; // [rsp+90h] [rbp-308h]
  _BYTE v24[24]; // [rsp+98h] [rbp-300h] BYREF
  unsigned int v25[136]; // [rsp+B0h] [rbp-2E8h] BYREF
  _BYTE v26[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v19[1] = a1;
  memset(v25, 0, 0x218uLL);
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x218 )
  {
    WdLogSingleEntry1(3LL, 470LL);
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x218 )
    v3 = 536LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  memmove(v25, v5, v3);
  v19[0] = 0LL;
  v18 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v20, v25[1], Current, &v18, v19);
  v8 = v18;
  if ( v18 )
  {
    v17 = 0;
    LODWORD(v18) = 0;
    v10 = v19[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24,
      v19[0]);
    v22 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v10, 0, v11, 0);
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = (unsigned __int64 *)&v25[4];
      if ( *((_DWORD *)v8 + 21) )
        v14 = 0LL;
      LODWORD(v9) = DXGTRACKEDWORKLOAD::GetAvailableIndex(v8, v10, v13, *(__int64 *)&v25[2], v14, &v17, (int *)&v18);
      if ( (int)v9 >= 0 )
      {
        DXGTRACKEDWORKLOAD::ReportStats(v8);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
        if ( v23 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
        v15 = (_DWORD *)((char *)a1 + 528);
        if ( (unsigned __int64)a1 + 528 >= MmUserProbeAddress )
          v15 = (_DWORD *)MmUserProbeAddress;
        *v15 = v17;
        v16 = (_DWORD *)((char *)a1 + 532);
        if ( (unsigned __int64)a1 + 532 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = (_DWORD)v18;
        goto LABEL_11;
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
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
  }
  else
  {
    LODWORD(v9) = -1073741811;
  }
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v20);
  return (unsigned int)v9;
}
