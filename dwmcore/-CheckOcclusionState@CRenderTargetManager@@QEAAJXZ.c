/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180052758 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6254 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F8758 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F88D0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAAPEAPEAVCRenderTarget@@QEAPEAV2@AEBQEAV2@@Z @ 0x180101390 (--$_Emplace_reallocate@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRend.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this, __int64 a2, __int64 a3)
{
  struct CRenderTarget **v3; // rsi
  struct CRenderTarget **v4; // rbx
  __int64 v5; // r13
  __int64 v7; // rcx
  CVisualGroup ***v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // esi
  CVisualGroup *v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // r14d
  struct CRenderTarget **v17; // r14
  struct CRenderTarget **i; // rbx
  __int64 *v19; // r14
  __int64 *j; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // r14
  CVisualGroup **v25; // rbx
  __int64 v26; // rcx
  CVisualGroup **v27; // r15
  CVisualGroup **k; // rbx
  CVisualGroup *v29; // rcx
  __int64 v30; // rdx
  CVisualGroup *v31; // rcx
  CVisualGroup *v32; // r14
  size_t v33; // r8
  char *v34; // rcx
  CVisualGroup **v35; // rbx
  void *v36; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-28h]
  _QWORD v38[2]; // [rsp+40h] [rbp-20h] BYREF

  v3 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  v4 = (struct CRenderTarget **)*((_QWORD *)this + 4);
  v5 = 0LL;
  v37 = 0;
  while ( v4 != v3 )
    CRenderTargetManager::AddRenderTarget(this, *v4++);
  v7 = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)this + 71) = v7;
  *((_BYTE *)this + 581) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
      a3,
      1LL,
      v38);
  v8 = (CVisualGroup ***)((char *)this + 8);
  *((_BYTE *)this + 576) = 1;
  v9 = *((_QWORD *)this + 2);
  v10 = *((_QWORD *)this + 1);
  if ( v10 != v9 )
  {
    v11 = 0;
    do
    {
      v12 = *(CVisualGroup **)v10;
      v13 = *(_QWORD *)v10 + *(int *)(*(_QWORD *)(*(_QWORD *)v10 + 80LL) + 12LL) + 80LL;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
      v16 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x32u, 0LL);
        if ( v11 >= 0 )
          v11 = v16;
      }
      else if ( v14 == 142213121 )
      {
        v36 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v12, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v36) >= 0 )
          v5 ^= (unsigned __int64)v12;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
      }
      else
      {
        *((_BYTE *)this + 581) = 0;
      }
      v10 += 8LL;
    }
    while ( v10 != v9 );
    v37 = v11;
    v8 = (CVisualGroup ***)((char *)this + 8);
  }
  *((_BYTE *)this + 576) = 0;
  v17 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 7); i != v17; ++i )
    CRenderTargetManager::RemoveRenderTarget(this, *i);
  v19 = (__int64 *)*((_QWORD *)this + 8);
  for ( j = (__int64 *)*((_QWORD *)this + 7); j != v19; ++j )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(j);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  v21 = *(_QWORD *)this;
  v22 = *(_QWORD *)(*(_QWORD *)this + 216LL);
  v23 = (!*(_BYTE *)(v22 + 581) || *(_BYTE *)(v22 + 582))
     && (*(_DWORD *)(v21 + 1228) || CSuperWetInkManager::HasActiveInk(*(CSuperWetInkManager **)(v21 + 256)));
  if ( v23 != *((_BYTE *)this + 583) )
  {
    *((_BYTE *)this + 576) = 1;
    v27 = v8[1];
    for ( k = *v8; k != v27; ++k )
    {
      v29 = *k;
      v36 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v29, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v36) >= 0 )
      {
        LOBYTE(v30) = v23;
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 112LL))(v36, v30);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 583) = v23;
  }
  if ( *((_BYTE *)this + 578) || *((_BYTE *)this + 579) )
  {
    v25 = *v8;
    if ( (unsigned __int64)(v8[1] - *v8) > 1 )
    {
      while ( v25 != *((CVisualGroup ***)this + 2) )
      {
        v31 = *v25;
        v36 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v31, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v36) >= 0
          && (**(unsigned __int8 (__fastcall ***)(void *))v36)(v36) )
        {
          if ( v25 != *v8 )
          {
            v32 = *v25;
            v33 = *((_QWORD *)this + 2) - (_QWORD)(v25 + 1);
            v38[0] = *v25;
            memmove_0(v25, v25 + 1, v33);
            *((_QWORD *)this + 2) -= 8LL;
            v34 = (char *)v8[1];
            v35 = *v8;
            if ( v34 == (char *)v8[2] )
            {
              std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>(v8, *v8, v38);
            }
            else if ( v35 == (CVisualGroup **)v34 )
            {
              *(_QWORD *)v34 = v32;
              ++v8[1];
            }
            else
            {
              *(_QWORD *)v34 = *((_QWORD *)v34 - 1);
              ++v8[1];
              memmove_0(v35 + 1, v35, v34 - (char *)v35 - 8);
              *v35 = v32;
            }
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
          break;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
        ++v25;
      }
    }
    v26 = *(_QWORD *)(*(_QWORD *)this + 488LL);
    if ( v26 )
      *(_BYTE *)(v26 + 16) = 1;
    *((_BYTE *)this + 579) = 0;
  }
  if ( v5 != *((_QWORD *)this + 67) )
  {
    *((_QWORD *)this + 67) = v5;
    CRenderTargetManager::NotifyTargetsOfOcclusionChange(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
      a3,
      1LL,
      v38);
  return v37;
}
