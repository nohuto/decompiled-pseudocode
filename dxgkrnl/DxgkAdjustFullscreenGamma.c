__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // eax
  __int64 v13; // rdi
  const wchar_t *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  ADAPTER_DISPLAY *v18; // rcx
  __int64 v19; // r14
  DXGDEVICE *v20; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  float v22; // xmm6_4
  float v23; // xmm7_4
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r8
  int v27; // eax
  int v28; // [rsp+50h] [rbp-128h] BYREF
  __int64 v29; // [rsp+58h] [rbp-120h]
  char v30; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v31; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v32[4]; // [rsp+70h] [rbp-108h]
  __int128 v33; // [rsp+80h] [rbp-F8h]
  DXGADAPTER *v34; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v35[144]; // [rsp+A0h] [rbp-D8h] BYREF

  v3 = (_OWORD *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2127);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 10595LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10595LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_67:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v28);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v32 = *v3;
  v33 = v3[1];
  v31 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v34, v32[0], Current, &v31, 1);
  v9 = v31;
  if ( !v31 )
  {
    v10 = v32[0];
    WdLogSingleEntry2(2LL, Current, v32[0]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v10,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  if ( !*((_QWORD *)v31 + 365) )
  {
    WdLogSingleEntry2(3LL, v31, -1073741811LL);
    if ( v34 )
      DXGADAPTER::ReleaseReference(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( !v30 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_67;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v31, 0LL);
  v12 = COREADAPTERACCESS::AcquireExclusive((__int64)v35, (unsigned int)(v11 + 1));
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL, v12);
    v14 = L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  v18 = (ADAPTER_DISPLAY *)*((_QWORD *)v9 + 365);
  v19 = v32[1];
  if ( v32[1] >= *((_DWORD *)v18 + 24) )
  {
LABEL_26:
    WdLogSingleEntry2(3LL, v19, -1073741811LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
LABEL_13:
    if ( v34 )
      DXGADAPTER::ReleaseReference(v34);
    goto LABEL_7;
  }
  v20 = 0LL;
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v18, v32[1]) == 2
    || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v9 + 365), v19) == 3 )
  {
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*((ADAPTER_DISPLAY **)v9 + 365), v19);
  }
  else
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(*((DXGADAPTER ***)v9 + 365), v19) )
      goto LABEL_33;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)v9 + 365), v19);
  }
  v20 = VidPnSourceOwner;
LABEL_33:
  if ( !v20 )
    goto LABEL_26;
  LODWORD(v13) = 0;
  v22 = *(float *)&v32[2];
  if ( *(float *)&v32[2] > 4.0
    || *(float *)&v32[2] < 0.2
    || *(float *)&v32[3] > 4.0
    || *(float *)&v32[3] < 0.2
    || *(float *)&v33 > 4.0
    || *(float *)&v33 < 0.2 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    LODWORD(v13) = -1073741811;
  }
  v23 = *((float *)&v33 + 1);
  if ( *((float *)&v33 + 1) > 0.6
    || *((float *)&v33 + 1) < -0.6
    || *((float *)&v33 + 2) > 0.6
    || *((float *)&v33 + 2) < -0.6
    || *((float *)&v33 + 3) > 0.6
    || *((float *)&v33 + 3) < -0.6 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    LODWORD(v13) = -1073741811;
  }
  v24 = 0LL;
  if ( (int)v13 >= 0 )
  {
    if ( v22 != 1.0
      || *(float *)&v32[3] != 1.0
      || *(float *)&v33 != 1.0
      || v23 != 0.0
      || *((float *)&v33 + 2) != 0.0
      || *((float *)&v33 + 3) != 0.0 )
    {
      v24 = operator new[](0x18uLL, 0x4B677844u, 256LL);
      if ( !v24 )
      {
        LODWORD(v13) = -1073741801;
        WdLogSingleEntry2(3LL, v20, -1073741801LL);
        goto LABEL_19;
      }
      *(float *)v24 = v22;
      *(_DWORD *)(v24 + 4) = v32[3];
      *(_DWORD *)(v24 + 8) = v33;
      *(float *)(v24 + 12) = v23;
      *(_QWORD *)(v24 + 16) = *((_QWORD *)&v33 + 1);
    }
    DXGDEVICE::SetFullscreenGammaRampAdjustment(v20, v19, (struct DXGK_GAMMA_ADJUSTMENT *)v24);
    v25 = 0LL;
    LODWORD(v31) = -1;
    while ( 1 )
    {
      v26 = v25++;
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v9, v19, v26, (unsigned int *const)&v31) < 0
        || (_DWORD)v31 == -1 )
      {
        break;
      }
      v27 = MonitorNotifyDXGIGammaRampChange(v9, (unsigned int)v31);
      v13 = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(2LL, v27);
        v14 = L"Failed to setfullscreen gamma ramp, (Status == 0x%I64x)!";
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
  if ( v34 )
    DXGADAPTER::ReleaseReference(v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v28);
  return (unsigned int)v13;
}
