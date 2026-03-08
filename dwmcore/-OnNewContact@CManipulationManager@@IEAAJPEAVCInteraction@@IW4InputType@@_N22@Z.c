/*
 * XREFs of ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x18019B610 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027640 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801290B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180129252 (McTemplateU0pq_EventWriteTransfer.c)
 *     ??2CParticleVector2Behavior@@CAPEAX_K@Z @ 0x18019A474 (--2CParticleVector2Behavior@@CAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019A4F4 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18019A63C (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x18019A704 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18019AF90 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x18019AFEC (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x18019BD9C (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801A015C (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A0564 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1801A11A0 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801A1B54 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        void *a7)
{
  __int64 *v8; // rcx
  CManipulationContext *v9; // rbx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  bool v18; // r12
  __int64 v19; // r15
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  CManipulationContext *v24; // rax
  CManipulationContext *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  LPVOID v29; // rax
  void *v30; // rcx
  LPVOID v31; // rax
  int v32; // edx
  unsigned int v33; // r12d
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v37; // [rsp+20h] [rbp-58h]
  _OWORD *v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+28h] [rbp-50h]
  bool *v40; // [rsp+30h] [rbp-48h]
  CManipulationContext *v41; // [rsp+40h] [rbp-38h] BYREF
  struct CVisualTree *v42; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v43[2]; // [rsp+50h] [rbp-28h]
  _OWORD v44[2]; // [rsp+58h] [rbp-20h] BYREF
  bool v45; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+50h]
  unsigned int v47; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+60h] BYREF

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v43[0] = *(_DWORD *)(a2 + 1720);
  v8 = *(__int64 **)(a1 + 16);
  v9 = 0LL;
  v41 = 0LL;
  v45 = 0;
  v43[1] = -2;
  v12 = *v8;
  v42 = 0LL;
  v44[0] = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct CVisualTree **))(v12 + 56))(v8, *(_QWORD *)v43, &v42);
  v17 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x762u, 0LL);
    v19 = *((_QWORD *)&v44[0] + 1);
    v20 = *(_QWORD *)&v44[0];
    goto LABEL_35;
  }
  if ( !a5 )
    CManipulationManager::LockTree(v42, 1);
  v40 = &v45;
  v38 = v44;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v42, a2, v16, a4);
  v18 = v45;
  v19 = *((_QWORD *)&v44[0] + 1);
  v20 = *(_QWORD *)&v44[0];
  if ( *(_QWORD *)(a1 + 296) - *(_QWORD *)(a1 + 304) > 0xE4E1C0uLL )
    v18 = 0;
  if ( *((_QWORD *)&v44[0] + 1) )
  {
    v21 = 0;
    if ( *(int *)(a1 + 192) <= 0 )
      goto LABEL_15;
    v22 = *(_QWORD *)(a1 + 184);
    v23 = 0LL;
    while ( *(_QWORD *)&v44[0] != *(_QWORD *)(*(_QWORD *)v22 + 48LL) )
    {
      ++v21;
      ++v23;
      v22 += 8LL;
      if ( v23 >= *(int *)(a1 + 192) )
        goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v41,
      (_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * v21));
    v9 = v41;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0pq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&MANIPULATION_CONTEXT_NEW_CONTACT,
        (__int64)v41,
        a3);
    if ( !v9 )
    {
LABEL_15:
      v24 = (CManipulationContext *)CParticleVector2Behavior::operator new();
      if ( v24 )
        v25 = CManipulationContext::CManipulationContext(v24, *(struct CComposition **)(a1 + 16));
      else
        v25 = v9;
      Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
        (__int64 (__fastcall ****)(_QWORD))&v41,
        (__int64 (__fastcall ***)(_QWORD))v25);
      v9 = v41;
      if ( !v41 )
      {
        v37 = 1935;
LABEL_20:
        v17 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, v37, 0LL);
LABEL_35:
        v33 = v48;
LABEL_36:
        LOBYTE(v40) = 0;
        LOBYTE(v39) = 0;
        CManipulationManager::OnUp(a1, v46, a3, v33, v9, v39, (_DWORD)v40, (_BYTE)a7, v41);
        goto LABEL_37;
      }
      v27 = CManipulationContext::Initialize(v41, v18, v43[0]);
      v17 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x790u, 0LL);
        goto LABEL_35;
      }
      if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                            (int *)(a1 + 184),
                            &v41) )
      {
        v37 = 1939;
        goto LABEL_20;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0pq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&MANIPULATION_CONTEXT_CREATED,
          (__int64)v9,
          a3);
    }
    v29 = DefaultHeap::Realloc(*(void **)(a1 + 160), 4LL * (*(_DWORD *)(a1 + 176) + 1));
    if ( v29
      && (v30 = *(void **)(a1 + 168),
          *(_QWORD *)(a1 + 160) = v29,
          (v31 = DefaultHeap::Realloc(v30, 8LL * (*(_DWORD *)(a1 + 176) + 1))) != 0LL) )
    {
      v32 = *(_DWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 168) = v31;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::InternalSetAtIndex(
        (_QWORD *)(a1 + 160),
        v32,
        &v47,
        &v41);
      ++*(_DWORD *)(a1 + 176);
      if ( (unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                           a1 + 200,
                           &v47,
                           &v48) )
      {
        v33 = v48;
        LOBYTE(v38) = (_BYTE)a7;
        v34 = CManipulationContext::OnNewContact(v9, v44, a3, v48, a6, v38);
        v17 = v34;
        if ( v34 >= 0 )
          goto LABEL_37;
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x7A2u, 0LL);
        goto LABEL_36;
      }
      v37 = 1951;
    }
    else
    {
      v37 = 1946;
    }
    goto LABEL_20;
  }
LABEL_37:
  if ( !a5 )
  {
    if ( !v42 )
      goto LABEL_42;
    CManipulationManager::LockTree(v42, 0);
  }
  if ( v42 )
    CResource::InternalRelease(v42);
LABEL_42:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v41);
  return v17;
}
