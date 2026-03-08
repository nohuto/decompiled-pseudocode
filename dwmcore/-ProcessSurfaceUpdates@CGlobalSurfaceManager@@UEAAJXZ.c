/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x180044DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180044F90 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x18004824C (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x18004828C (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x1801B4368 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(CGlobalSurfaceManager *this)
{
  unsigned int v2; // r15d
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  int SurfaceUpdates; // ebx
  __int64 v8; // rcx
  int FrameSurfaceUpdates; // eax
  CGlobalSurfaceManager *v10; // rcx
  unsigned int i; // esi
  __int64 v13; // r14
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  int v15; // eax
  unsigned int v16; // ecx
  void *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-18h] BYREF

  v18 = 0;
  v2 = 0;
  v19 = 0;
  v3 = 0;
  v4 = CGlobalSurfaceManager::ProcessLegacyTokens(this);
  SurfaceUpdates = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x8Fu, 0LL);
    return (unsigned int)SurfaceUpdates;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start,
      v6,
      1LL,
      v20);
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 62);
  v20[0] = v8;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(v20, &v18, &v19);
  if ( FrameSurfaceUpdates >= 0 )
  {
    SurfaceUpdates = 0;
    goto LABEL_8;
  }
  SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)v10,
    &dword_180339270,
    3u,
    FrameSurfaceUpdates | 0x10000000,
    0x7Fu,
    0LL);
  for ( ; SurfaceUpdates >= 0; SurfaceUpdates = CGlobalSurfaceManager::GetSurfaceUpdates(v10, &v18, &v19) )
  {
LABEL_8:
    for ( i = 0; i < v18; ++i )
    {
      v20[0] = 0LL;
      v13 = *((_QWORD *)this + 13) + 224LL * i;
      CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
                                       (CGlobalSurfaceManager *)((char *)this + 16),
                                       *(struct _LUID *)(v13 + 4));
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(v20, CompositionSurfaceInfoByLuid);
      if ( v20[0] )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20[0] + 120LL))(v20[0], v13);
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xAAu, 0LL);
        ++v3;
      }
      v17 = *(void **)(v13 + 32);
      if ( (unsigned __int64)v17 >= 2 )
        DeleteObject(v17);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v20);
    }
    if ( !v19 )
      break;
    ++v2;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v3,
      v2);
  dword_1803E2A9C += v3;
  return (unsigned int)SurfaceUpdates;
}
