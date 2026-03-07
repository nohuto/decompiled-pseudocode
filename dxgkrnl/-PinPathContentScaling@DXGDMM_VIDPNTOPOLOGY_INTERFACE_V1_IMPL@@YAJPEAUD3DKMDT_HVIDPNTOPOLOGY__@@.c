__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v10; // rsi
  char *v11; // rsi
  int v12; // eax
  D3DKMDT_HVIDPN v13; // rbx
  __int64 v14; // r13
  D3DKMDT_HVIDPN v15; // rdi
  __int64 v16; // rdi
  int IsSupportedVidPn; // eax
  __int64 v18; // r8
  D3DKMDT_HVIDPN v19; // rdi
  __int64 v20; // rcx
  char *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v28; // r15
  struct DXGPROCESS *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  struct DXGTHREAD *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  int v52; // r9d
  KIRQL v53; // al
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rdi
  KIRQL CurrentIrql; // [rsp+58h] [rbp-B0h]
  unsigned int v60; // [rsp+5Ch] [rbp-ACh]
  int v61; // [rsp+60h] [rbp-A8h]
  unsigned int v62; // [rsp+64h] [rbp-A4h]
  int v63; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v65[2]; // [rsp+78h] [rbp-90h]
  struct DXGTHREAD *DxgThread; // [rsp+80h] [rbp-88h] BYREF
  int v67; // [rsp+88h] [rbp-80h] BYREF
  __int64 v68; // [rsp+90h] [rbp-78h]
  char v69; // [rsp+98h] [rbp-70h]
  int v70; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h]
  char v72; // [rsp+B0h] [rbp-58h]
  D3DKMDT_HVIDPN v73; // [rsp+B8h] [rbp-50h] BYREF
  int v74; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+C4h] [rbp-44h]
  int v76; // [rsp+CCh] [rbp-3Ch]
  _DXGKARG_ISSUPPORTEDVIDPN v77; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v78[24]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v79[8]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-8h] BYREF

  v5 = 0;
  v7 = (unsigned int)a3;
  v8 = a4;
  v9 = (unsigned int)a2;
  v60 = a3;
  v65[0] = a4;
  v62 = (unsigned int)a2;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v72 = 1;
    v70 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6026);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v70, 6026);
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v7) = -1071774976;
    goto LABEL_127;
  }
  if ( (_DWORD)v8 == 254 )
  {
    WdLogSingleEntry4(2LL, 254LL, v9, v7, this);
    LODWORD(v7) = -1071774907;
    goto LABEL_127;
  }
  v10 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
  if ( v10 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
    goto LABEL_125;
  v11 = (char *)v10 - 8;
  while ( v11 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == (_DWORD)v9
      && *(_DWORD *)(*((_QWORD *)v11 + 12) + 24LL) == (_DWORD)v7 )
    {
      break;
    }
    v43 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v11 + 1);
    v11 = (char *)v43 - 8;
    if ( v43 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      v11 = 0LL;
  }
  if ( !v11 )
  {
LABEL_125:
    WdLogSingleEntry3(3LL, v9, v7, this);
    LODWORD(v7) = -1071774937;
    goto LABEL_127;
  }
  v65[1] = *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v11 + 28);
  v12 = DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v11, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v8);
  v7 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, v8, v9, v60, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to pin scaling transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
      v8,
      v9,
      v60,
      v7,
      0LL);
    goto LABEL_127;
  }
  if ( !*((_QWORD *)this + 21) )
    WdLogSingleEntry0(1LL);
  v13 = (D3DKMDT_HVIDPN)*((_QWORD *)this + 21);
  v64 = __PAIR64__(v60, v62);
  v14 = *((_QWORD *)v13 + 6);
  if ( v13 == (D3DKMDT_HVIDPN)-88LL )
  {
    v13 = 0LL;
    goto LABEL_86;
  }
  if ( !v13 )
  {
LABEL_86:
    WdLogSingleEntry0(1LL);
    goto LABEL_87;
  }
  if ( *((_DWORD *)v13 + 16) != 1833172997 )
  {
LABEL_87:
    v15 = 0LL;
    goto LABEL_18;
  }
  v15 = v13;
LABEL_18:
  if ( !*((_BYTE *)v15 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v15 + 24)) )
  {
    WdLogSingleEntry1(2LL, v13);
    goto LABEL_88;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)v15 + 172)) - 1) & *((_WORD *)v15 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(v14 + 8) )
    WdLogSingleEntry0(1LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v77.hDesiredVidPn = v13;
  *(_QWORD *)&v77.IsVidPnSupported = 0LL;
  if ( !*(_QWORD *)(v14 + 8) )
    WdLogSingleEntry0(1LL);
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(*(ADAPTER_DISPLAY **)(v14 + 8), &v77);
  v7 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, v13, v16, IsSupportedVidPn);
    if ( !*(_QWORD *)(v14 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry3(2LL, v13, *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), v7);
LABEL_120:
    v44 = v60;
    v46 = v62;
    v45 = (int)v8;
    if ( (_DWORD)v7 != -1071774970 )
    {
      WdLogSingleEntry4(2LL, (int)v8, v62, v60, (int)v7);
      goto LABEL_92;
    }
LABEL_91:
    WdLogSingleEntry3(3LL, v46, v44, v45);
LABEL_92:
    if ( v65[1] != D3DKMDT_VPPS_UNPINNED )
    {
      if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v11, v65[1]) >= 0 )
        goto LABEL_127;
      goto LABEL_94;
    }
    if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)v11, 254LL, v47, v48) < 0 )
LABEL_94:
      WdLogSingleEntry0(1LL);
LABEL_127:
    v5 = v7;
    goto LABEL_73;
  }
  if ( !v77.IsVidPnSupported )
  {
LABEL_88:
    if ( !*(_QWORD *)(v14 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(7LL, v13, *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL));
    v44 = v60;
    v45 = v8;
    v46 = v62;
    LODWORD(v7) = -1071774970;
    goto LABEL_91;
  }
  if ( !(_BYTE)a5 )
  {
    WdLogSingleEntry4(7LL, 7LL, v13, (unsigned int)v64, HIDWORD(v64));
    goto LABEL_73;
  }
  if ( v13 && *((_DWORD *)v13 + 16) == 1833172997 )
    v19 = v13;
  else
    v19 = 0LL;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v19 + 172)) - 1) & *((_WORD *)v19 + 87)) != 0 )
    WdLogSingleEntry0(1LL);
  LOBYTE(v18) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v78, v19 + 38, v18);
  if ( !*(_QWORD *)(v14 + 8) )
    WdLogSingleEntry0(1LL);
  v20 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v21 = 0LL;
  v76 = 0;
  v73 = v13;
  v74 = 3;
  v75 = v64;
  if ( !*(_QWORD *)(v14 + 8) )
    WdLogSingleEntry0(1LL);
  v22 = *(_QWORD *)(v14 + 8);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 23);
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v69 = 1;
    v67 = 5026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerEnter, v24, 5026);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 5026);
  CurrentProcess = PsGetCurrentProcess(v25);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v28 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v29 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v29 )
        goto LABEL_48;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v29 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v29 )
        goto LABEL_48;
      WdLogSingleEntry1(2LL, 2923LL);
      v21 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v29 = v28;
  if ( !v28 )
  {
    v61 = 0;
    goto LABEL_54;
  }
LABEL_48:
  v21 = (char *)v29 + 152;
  v61 = 0;
  if ( v29 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v29 + 20) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v29 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v29 + 152, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v52 = *((_DWORD *)v29 + 44);
        if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, v52);
      }
      ExAcquirePushLockExclusiveEx((char *)v29 + 152, 0LL);
    }
    *((_QWORD *)v29 + 20) = KeGetCurrentThread();
    v61 = 2;
  }
LABEL_54:
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v22 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 16) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v32 = 0;
  v33 = 0LL;
  if ( CurrentIrql < 2u )
  {
    DxgThread = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0
      && ((v33 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v33 = DxgThread) != 0LL)) )
    {
      v32 = *((_DWORD *)v33 + 12);
    }
    else
    {
      v32 = 0;
    }
  }
  v63 = v32;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v79,
    *(struct DXGADAPTER **)(v22 + 16));
  v7 = (*(int (__fastcall **)(_QWORD, D3DKMDT_HVIDPN *))(*(_QWORD *)(v22 + 16) + 624LL))(
         *(_QWORD *)(*(_QWORD *)(v22 + 16) + 280LL),
         &v73);
  if ( v79[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v53 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v22, CurrentIrql, v53);
  }
  if ( v33 && (v35 = *((int *)v33 + 12), (_DWORD)v35 != v63) )
  {
    v5 = 0;
    WdLogSingleEntry5(0LL, 275LL, 38LL, v35, v63, 0LL);
  }
  else
  {
    v5 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 16) + 4612LL));
  v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
  v38[3] = v7;
  v38[4] = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 280LL);
  v38[5] = v73;
  if ( (_DWORD)v7 != -1073741801 && (_DWORD)v7 )
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v22 + 16));
  if ( v61 == 2 )
  {
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v67);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry4(2LL, v13, (unsigned int)v75, HIDWORD(v75), v7);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v78);
    v58 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54, v56, v57);
    v58[3] = v13;
    v58[4] = 7LL;
    v58[5] = &v64;
    if ( !*(_QWORD *)(v14 + 8) )
      WdLogSingleEntry0(1LL);
    SLODWORD(v8) = v65[0];
    v58[6] = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL);
    v58[7] = v7;
    goto LABEL_120;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v78);
LABEL_73:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v41, v70);
  return v5;
}
