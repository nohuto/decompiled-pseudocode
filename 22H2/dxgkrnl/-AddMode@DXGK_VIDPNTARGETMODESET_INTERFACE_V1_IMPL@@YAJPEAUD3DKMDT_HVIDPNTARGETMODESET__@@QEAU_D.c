/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C011D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000721C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C011D6F4 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C011DA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C011DB94 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  char v19; // al
  int v20; // ebx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 Id; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rsi
  void (__fastcall ***v27)(_QWORD, __int64); // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  UINT Numerator; // edx
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  int v53; // [rsp+20h] [rbp-48h] BYREF
  __int64 v54; // [rsp+28h] [rbp-40h]
  char v55; // [rsp+30h] [rbp-38h]
  unsigned int *v56; // [rsp+70h] [rbp+8h] BYREF

  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 7014LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !a2 )
  {
    v39 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v39 + 24) = 0LL;
    *(_QWORD *)(v39 + 32) = this;
    WdLogEvent5_WdError(v39);
    LODWORD(v31) = -1071774959;
    goto LABEL_34;
  }
  if ( !this || (v10 = this, *((_DWORD *)this + 32) != 1833173005) )
    v10 = 0LL;
  if ( !v10 )
  {
    v40 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdError(v40);
    LODWORD(v31) = -1071774967;
    goto LABEL_34;
  }
  v11 = *((_QWORD *)v10 + 14);
  v12 = *(_QWORD *)(v11 + 40);
  if ( !v12 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v41);
    v12 = *(_QWORD *)(v11 + 40);
  }
  v13 = *(_QWORD *)(v12 + 72);
  if ( !v13 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v42);
    v13 = *(_QWORD *)(v12 + 72);
  }
  v14 = *(_QWORD *)(v13 + 48);
  v15 = *(_QWORD *)(v14 + 8);
  if ( !v15 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v43);
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v44);
    }
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v9 = *(_QWORD *)(v15 + 16);
    if ( (*(_DWORD *)(v9 + 348) & 0x100) == 0 && !*(_QWORD *)(v9 + 600) )
      goto LABEL_63;
    if ( a2->VideoSignalInfo.HSyncFreq.Numerator == -2 && a2->VideoSignalInfo.HSyncFreq.Denominator == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_57;
      a2->VideoSignalInfo.HSyncFreq.Numerator = 1000;
      a2->VideoSignalInfo.HSyncFreq.Denominator = 1;
    }
    if ( a2->VideoSignalInfo.PixelRate != 4294967294 )
      goto LABEL_17;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      a2->VideoSignalInfo.PixelRate = 1000000LL;
      goto LABEL_17;
    }
LABEL_57:
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v46[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v46[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v46[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v46[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v46);
    LODWORD(v31) = -1071774966;
    goto LABEL_34;
  }
  if ( a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    goto LABEL_63;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v15 + 16) + 600LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_63;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = *(_QWORD *)(v15 + 16);
  }
  else
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v45[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v45[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v45[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v45[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_17:
  v9 = *(_QWORD *)(*((_QWORD *)v10 + 14) + 96LL);
  v16 = *(_DWORD *)(v9 + 84);
  if ( (v16 < 0xF || v16 > 0x11) && (*(_DWORD *)(*(_QWORD *)(v15 + 16) + 348LL) & 0x200) == 0 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_20;
LABEL_63:
    v49 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v31) = -1071774966;
    *(_QWORD *)(v49 + 24) = *(_QWORD *)(v15 + 16);
    *(_QWORD *)(v49 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v49);
    goto LABEL_34;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_63;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v9 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
       * a2->VideoSignalInfo.VSyncFreq.Denominator;
    v48 = 10 * Numerator;
    v8 = 10 * Numerator % (unsigned int)v9;
    if ( v48 / (unsigned int)v9 < 0xEF )
      goto LABEL_63;
  }
LABEL_20:
  if ( !DXGADAPTER::DriverSupportSetTimingsFromVidPn(*(DXGADAPTER **)(v15 + 16))
    || (v19 = 1, (*(_DWORD *)(*(_QWORD *)(v18 + 2696) + 440LL) & 1) != 0) )
  {
    v19 = 0;
  }
  v20 = v17 & 3;
  if ( v19 )
    v20 = v17;
  v21 = operator new[](0x90uLL, 0x4E506456u, PagedPool);
  v26 = v21;
  if ( v21 )
  {
    Id = a2->Id;
    v21[1] = 0LL;
    v21[2] = 0LL;
    *v21 = &SetElement::`vftable';
    *((_DWORD *)v21 + 6) = Id;
    if ( (_DWORD)Id == -1 )
    {
      v50 = WdLogNewEntry5_WdAssertion(Id, v22);
      *(_QWORD *)(v50 + 24) = 240LL;
      WdLogEvent5_WdAssertion(v50);
    }
    *(_QWORD *)((char *)v26 + 76) = -1LL;
    *(_QWORD *)((char *)v26 + 84) = -1LL;
    *(_QWORD *)((char *)v26 + 92) = -1LL;
    *v26 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_DWORD *)v26 + 18) = 0;
    v26[14] = 0xFFFFFFFFLL;
    *((_DWORD *)v26 + 30) = 8;
    v26[5] = 0LL;
    *((_DWORD *)v26 + 14) = 1833173007;
    v26[4] = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    v26[6] = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    v26[8] = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *((_DWORD *)v26 + 32) = v20;
    *((_DWORD *)v26 + 33) = 0;
    *((_DWORD *)v26 + 34) = 4;
  }
  else
  {
    v26 = 0LL;
  }
  v27 = (void (__fastcall ***)(_QWORD, __int64))v26;
  if ( v26 )
  {
    v28 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDEOSIGNALMODE *)(v26 + 9), &a2->VideoSignalInfo);
    v31 = v28;
    if ( v28 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29);
      v52[3] = v26;
    }
    else
    {
      v56 = (unsigned int *)v26;
      v27 = 0LL;
      v32 = DMMVIDPNTARGETMODESET::AddMode((__int64)v10, &v56);
      v31 = v32;
      if ( v32 >= 0 )
      {
        LODWORD(v31) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v10, a2);
        goto LABEL_32;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33);
      v52[3] = a2;
    }
    v52[5] = v31;
    v52[4] = this;
  }
  else
  {
    v51 = WdLogNewEntry5_WdLowResource(Id, v22, v24, v25);
    *(_QWORD *)(v51 + 24) = this;
    WdLogEvent5_WdLowResource(v51);
    LODWORD(v31) = -1073741801;
  }
LABEL_32:
  if ( v27 )
    (**v27)(v27, 1LL);
LABEL_34:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v35);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v53);
  return (unsigned int)v31;
}
