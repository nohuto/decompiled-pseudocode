/*
 * XREFs of ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180052E70
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18004D304 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180052758 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?MustUpdateExpressions@CExpressionManager@@QEBA_NXZ @ 0x180052780 (-MustUpdateExpressions@CExpressionManager@@QEBA_NXZ.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x180053430 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?reserve_region@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@_K0@Z @ 0x18005353C (-reserve_region@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSIT.c)
 *     ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x18005360C (-AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x1800536A4 (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180129F7A (McTemplateU0qqxx_EventWriteTransfer.c)
 *     McTemplateU0qxqN4_EventWriteTransfer @ 0x1801B23DC (McTemplateU0qxqN4_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::PostPresent(CComposition *this, bool a2)
{
  __int64 v2; // rax
  CComposition *v3; // rdi
  int v4; // r15d
  bool v5; // r13
  int v6; // r12d
  unsigned int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // ecx
  unsigned int v10; // ebx
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // r14
  char v17; // r12
  __int64 *v18; // r15
  __int64 *v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  struct CRenderTarget **v26; // r15
  struct CRenderTarget **i; // rsi
  __int64 *v28; // r15
  __int64 *j; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned int k; // esi
  unsigned int v37; // ebx
  __int64 v38; // r14
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // ecx
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+68h] [rbp-A0h]
  __int128 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  __int128 v48; // [rsp+98h] [rbp-70h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-60h]
  _OWORD v50[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-10h]

  v2 = *((_QWORD *)this + 27);
  v3 = this;
  v4 = 0;
  v5 = a2;
  if ( !*(_BYTE *)(v2 + 581) || *(_BYTE *)(v2 + 582) )
  {
    v6 = 0;
    if ( *((_BYTE *)this + 1273) )
    {
      v7 = 0;
      if ( *((_DWORD *)this + 116) )
      {
        do
        {
          v8 = *(_DWORD **)(*((_QWORD *)v3 + 55) + 8LL * v7);
          if ( v8 )
          {
            v9 = v8[23];
            if ( v9 || v8[21] )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) != 0 )
                McTemplateU0qqxx_EventWriteTransfer(v9, a2, v8[4], v8[5], v9, v8[21]);
              dword_1803E2AA0 += v8[23];
              dword_1803E2AA4 += v8[21];
              v8[23] = 0;
              v8[21] = 0;
            }
          }
          ++v7;
        }
        while ( v7 < *((_DWORD *)v3 + 116) );
      }
      *((_BYTE *)v3 + 1273) = 0;
    }
    if ( CComposition::ProcessRoundTripRequest(v3) )
      v6 = 256;
    if ( CComposition::AreAnimateUpdatesRequired(v3) )
      v6 |= 0x10u;
    v10 = v6 | 0x20;
    if ( !CExpressionManager::MustUpdateExpressions(*((CExpressionManager **)v3 + 53)) )
      v10 = v6;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 28) + 56LL))(*((_QWORD *)v3 + 28)) )
      v10 |= 0x40u;
    if ( CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)v3 + 32)) )
      v10 |= 0x400000u;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v3 + 82) + 32LL))(*((_QWORD *)v3 + 82), 0LL, v10);
    CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  }
  v11 = CRenderTargetManager::PostPresent(*((CRenderTargetManager **)v3 + 27), v5);
  (*(void (__fastcall **)(_QWORD, bool))(**((_QWORD **)v3 + 28) + 40LL))(*((_QWORD *)v3 + 28), v11);
  if ( *((_QWORD *)v3 + 62) )
  {
    v12 = *((_QWORD *)v3 + 61);
    v44 = *((_QWORD *)v3 + 62);
    v47 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    if ( v12 )
    {
      *(_QWORD *)&v45 = *(_QWORD *)(*(_QWORD *)v12 + 72LL);
      v13 = *(_QWORD *)(*(_QWORD *)v12 + 216LL);
    }
    else
    {
      *(_QWORD *)&v45 = 0LL;
      v13 = 0LL;
    }
    *((_QWORD *)&v45 + 1) = v13;
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 82) + 64LL))(*((_QWORD *)v3 + 82));
    v15 = *((_QWORD *)v3 + 27);
    *(_QWORD *)&v46 = v14;
    v16 = (__int64 *)(v15 + 80);
    v17 = 0;
    if ( 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(v15 + 88) - *(_QWORD *)(v15 + 80)) >> 3) )
      *(_QWORD *)(v15 + 88) -= 8 * ((__int64)(*(_QWORD *)(v15 + 88) - *(_QWORD *)(v15 + 80)) >> 3);
    *(_BYTE *)(v15 + 576) = 1;
    v18 = *(__int64 **)(v15 + 16);
    v19 = *(__int64 **)(v15 + 8);
    if ( v19 != v18 )
    {
      do
      {
        v20 = *v19;
        memset_0(&v48, 0, 0x68uLL);
        v21 = v20 + *(int *)(*(_QWORD *)(v20 + 80) + 12LL) + 80LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v21 + 48LL))(v21, v50) )
        {
          v22 = v20 + *(int *)(*(_QWORD *)(v20 + 80) + 12LL) + 80LL;
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          if ( LODWORD(v50[0]) )
            v17 = 1;
          v24 = (__int64)(*(_QWORD *)(v15 + 88) - *(_QWORD *)(v15 + 80)) >> 3;
          v48 = *(_OWORD *)v23;
          *(_QWORD *)&v49 = *(_QWORD *)(v23 + 16);
          DWORD2(v49) = *(_DWORD *)(v23 + 24);
          v25 = detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::reserve_region(
                  v16,
                  0x4EC4EC4EC4EC4EC5LL * v24);
          *(_OWORD *)v25 = v48;
          *(_OWORD *)(v25 + 16) = v49;
          *(_OWORD *)(v25 + 32) = v50[0];
          *(_OWORD *)(v25 + 48) = v50[1];
          *(_OWORD *)(v25 + 64) = v50[2];
          *(_OWORD *)(v25 + 80) = v50[3];
          *(_QWORD *)(v25 + 96) = v51;
        }
        ++v19;
      }
      while ( v19 != v18 );
      v3 = this;
      v5 = a2;
    }
    *(_BYTE *)(v15 + 576) = 0;
    v26 = *(struct CRenderTarget ***)(v15 + 64);
    for ( i = *(struct CRenderTarget ***)(v15 + 56); i != v26; ++i )
      CRenderTargetManager::RemoveRenderTarget((CRenderTargetManager *)v15, *i);
    v28 = *(__int64 **)(v15 + 64);
    for ( j = *(__int64 **)(v15 + 56); j != v28; ++j )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(j);
    *(_QWORD *)(v15 + 64) = *(_QWORD *)(v15 + 56);
    if ( v17 && !*(_BYTE *)(v15 + 581) && g_pComposition )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)g_pComposition + 82) + 32LL))(
        *((_QWORD *)g_pComposition + 82),
        1000LL,
        128LL);
    v30 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(v15 + 88) - *(_QWORD *)(v15 + 80)) >> 3);
    if ( v30 )
      v47 = *v16;
    else
      v47 = 0LL;
    v31 = *((_QWORD *)v3 + 81);
    DWORD2(v46) = v30;
    v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 24LL))(v31, &v44);
    v4 = v32;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    {
      v41 = 4;
      if ( DWORD2(v46) > 4 )
        v41 = DWORD2(v46);
      McTemplateU0qxqN4_EventWriteTransfer(v47, 104 * v41, v32, *((_QWORD *)v3 + 62), SBYTE8(v46), 104 * v41, v47);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v4, 0x3FDu, 0LL);
      goto LABEL_48;
    }
    v34 = *((_QWORD *)v3 + 61);
    if ( v34 && v5 )
      *(_QWORD *)(*(_QWORD *)v34 + 24LL) = 0LL;
  }
  if ( *((_DWORD *)v3 + 208) )
  {
    v37 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)v3 + 101) + 8LL * v37++));
    while ( v37 < *((_DWORD *)v3 + 208) );
    *((_DWORD *)v3 + 208) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v3 + 808, 8LL);
  }
LABEL_48:
  for ( k = 0; k < *((_DWORD *)v3 + 196); ++k )
  {
    v38 = *(_QWORD *)(*((_QWORD *)v3 + 95) + 8LL * k);
    v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 232LL))(v38);
    if ( v39 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x305u, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  *((_DWORD *)v3 + 196) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)v3 + 760, 8LL);
  return (unsigned int)v4;
}
