__int64 __fastcall NtDxgkDestroyTrackedWorkload(DXGTRACKEDWORKLOAD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // esi
  unsigned int *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v12; // rdi
  __int64 v13; // r9
  char *v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  DXGTRACKEDWORKLOAD *v25; // [rsp+50h] [rbp-128h] BYREF
  int v26; // [rsp+58h] [rbp-120h] BYREF
  __int64 v27; // [rsp+60h] [rbp-118h]
  char v28; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v29; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v30[2]; // [rsp+78h] [rbp-100h] BYREF
  _QWORD v31[2]; // [rsp+80h] [rbp-F8h] BYREF
  DXGTRACKEDWORKLOAD *v32[2]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v33[32]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v34[160]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = (unsigned int *)a1;
  v25 = a1;
  v4 = 0;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2207);
  *(_QWORD *)v30 = 0LL;
  v5 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( *v5 < 8 )
  {
    WdLogSingleEntry1(3LL, 375LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v26);
    }
    return 3221225485LL;
  }
  if ( v6 > 8 )
    v6 = 8;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v30, v3, v6);
  v29 = 0LL;
  v25 = 0LL;
  Current = DXGPROCESS::GetCurrent(v10);
  v12 = v30[1];
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v32, v30[1], Current, &v25, &v29);
  if ( !v25 )
  {
    v4 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)v12, 404LL);
LABEL_18:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
    }
    return v4;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v29, 2, v13, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v34, v14);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33, Current);
  v15 = ((unsigned int)v12 >> 6) & 0xFFFFFF;
  v16 = *((_DWORD *)Current + 74);
  if ( v15 < v16
    && (v17 = *((_QWORD *)Current + 35), (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v15 + 8) & 0x60))
    && (*(_DWORD *)(v17 + 16LL * v15 + 8) & 0x2000) == 0
    && (*(_DWORD *)(v17 + 16LL * v15 + 8) & 0x1F) == 0x13 )
  {
    v18 = *(_QWORD *)(v17 + 16LL * v15);
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    if ( v15 < v16 )
    {
      v21 = *((_QWORD *)Current + 35);
      v22 = *(_DWORD *)(v21 + 16LL * v15 + 8);
      if ( (((unsigned int)v12 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v15 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        *(_DWORD *)(v21 + 16LL * (((unsigned int)v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    if ( DXGTRACKEDWORKLOAD::Release(v25) != 1 )
    {
      WdLogSingleEntry1(1LL, 436LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ref == 1", 436LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    goto LABEL_18;
  }
  WdLogSingleEntry1(3LL, v12);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
  if ( v31[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
  return 0LL;
}
