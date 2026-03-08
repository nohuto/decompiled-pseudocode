/*
 * XREFs of ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18019E5C8
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019E3BC (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180031CA8 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801290B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180197AFC (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x1801996D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x18019AFCC (-IsRoute@TargetingInfo@@QEBA_NXZ.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18019CBB0 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18019DF94 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x1801A0FE8 (-GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A4680 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 */

void __fastcall CManipulationManager::TargetPointer(
        CManipulationManager *this,
        struct CManipulationContext *a2,
        struct CManipulationFrame *a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r15
  __int64 v7; // rbx
  __int64 v10; // r12
  char *v11; // rbx
  unsigned __int64 v12; // r13
  __int64 *v13; // rcx
  int v14; // edx
  struct CInteraction *HoverTarget; // rax
  struct CInteraction *v16; // rax
  int PointerTarget; // r15d
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r11
  int v34; // r9d
  __int128 v35; // xmm1
  int v36; // r8d
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  char IsRoute; // al
  char v45; // dl
  unsigned int v46; // eax
  __int64 v47; // r9
  __int64 v48; // r11
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int128 v56; // [rsp+80h] [rbp-80h] BYREF
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+C0h] [rbp-40h]
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h]
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int128 v64; // [rsp+100h] [rbp+0h]
  __int128 v65; // [rsp+110h] [rbp+10h]
  __int128 v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+130h] [rbp+30h]
  unsigned __int64 v68; // [rsp+180h] [rbp+80h] BYREF
  int v69; // [rsp+190h] [rbp+90h] BYREF
  int v70; // [rsp+198h] [rbp+98h] BYREF

  v5 = a5;
  v50 = 0LL;
  v7 = a4;
  v49 = 1;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v50);
  v10 = 248 * v7;
  v11 = (char *)a3 + 248 * v7 + 368;
  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                       (CManipulationManager *)((char *)this + 280),
                       *((_QWORD *)v11 + 10),
                       &v68) )
    v12 = v68;
  else
    v12 = 1000LL * *((unsigned int *)v11 + 16);
  if ( (*((_BYTE *)a3 + 176) & 2) != 0 )
  {
    v13 = (__int64 *)&v50;
LABEL_40:
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v13);
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v11 + 3) & 0x40004) != 0 || CManipulationFrame::IsMousewheelFrame(a3) )
  {
    PointerTarget = CGestureTargetingManager::GetPointerTarget(
                      (const struct tagPOINTER_INFO *)v11,
                      a2,
                      (struct TargetingInfo *)&v49);
    if ( PointerTarget >= 0 && v50 && v49 )
    {
      v18 = *v50;
      v19 = *(_OWORD *)((char *)a3 + 200);
      v56 = *(_OWORD *)((char *)a3 + 184);
      v20 = *(_OWORD *)((char *)a3 + 216);
      v57 = v19;
      v21 = *(_OWORD *)((char *)a3 + 232);
      v58 = v20;
      v22 = *(_OWORD *)((char *)a3 + 248);
      v59 = v21;
      v23 = *(_OWORD *)((char *)a3 + 264);
      v60 = v22;
      v24 = *(_OWORD *)((char *)a3 + 280);
      v61 = v23;
      v25 = *(_OWORD *)((char *)a3 + 296);
      v62 = v24;
      v26 = *(_OWORD *)((char *)a3 + 312);
      v63 = v25;
      v27 = *(_OWORD *)((char *)a3 + 328);
      v64 = v26;
      v28 = *(_OWORD *)((char *)a3 + 344);
      v29 = *((_QWORD *)a3 + 45);
      v65 = v27;
      v66 = v28;
      v67 = v29;
      LOBYTE(v29) = 1;
      PointerTarget = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, __int128 *, int *))(v18 + 184))(
                        v50,
                        v12,
                        v29,
                        0LL,
                        &v56,
                        &v49);
    }
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      LODWORD(v68) = *((_DWORD *)v11 + 9);
      v69 = *((_DWORD *)v11 + 8);
      v53 = v49;
      v54 = *((_DWORD *)v11 + 1);
      v70 = PointerTarget;
      v55 = v33;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v30,
        byte_180379666,
        v31,
        v32,
        (__int64)&v54,
        (__int64)&v55,
        (__int64)&v53,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v70);
    }
    v34 = *((_DWORD *)v11 + 1);
    v35 = *((_OWORD *)a3 + 3);
    v36 = *((_DWORD *)a3 + 6);
    v56 = *((_OWORD *)a3 + 2);
    v37 = *((_OWORD *)a3 + 4);
    v57 = v35;
    v38 = *((_OWORD *)a3 + 5);
    v58 = v37;
    v39 = *((_OWORD *)a3 + 6);
    v59 = v38;
    v40 = *((_OWORD *)a3 + 7);
    v60 = v39;
    v41 = *((_OWORD *)a3 + 8);
    v61 = v40;
    v42 = *((_OWORD *)a3 + 9);
    v62 = v41;
    v43 = *((_OWORD *)a3 + 10);
    v63 = v42;
    v64 = v43;
    InputTraceLogging::GestureTargeting::SetPointerResult(
      *((_QWORD *)a3 + 56),
      v56,
      v36,
      v34,
      (const struct TargetingInfo *)&v49);
    if ( *(_DWORD *)v11 == 2 && (v49 == 2 || v49 == 1 && v50) )
      *((_QWORD *)this + 38) = 0LL;
    v52 = 0LL;
    v51 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      *((unsigned int *)v11 + 1),
      &v51);
    if ( PointerTarget < 0 )
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v50, &v52);
    if ( v49 )
    {
      if ( v50 != v52 )
      {
        if ( (_DWORD)v51 )
        {
          TargetingInfo::IsRoute((TargetingInfo *)&v51);
          IsRoute = TargetingInfo::IsRoute((TargetingInfo *)&v49);
          if ( v45 != IsRoute )
          {
            *((_BYTE *)a3 + v10 + 608) |= 1u;
            *((_BYTE *)a3 + 176) |= 4u;
          }
        }
      }
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        *((unsigned int *)v11 + 1),
        &v49);
    }
    else
    {
      if ( (*((_DWORD *)v11 + 3) & 0x40000) == 0 )
      {
        v5 = a5;
        *a5 = (void *)-1LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&MANIPULATION_POINTER_BUFFERED,
            *((_DWORD *)v11 + 2),
            *((_DWORD *)v11 + 1));
        goto LABEL_39;
      }
      v49 = 1;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v50);
      (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
        a2,
        *((unsigned int *)v11 + 1),
        &v49);
    }
    v5 = a5;
LABEL_39:
    v13 = (__int64 *)&v52;
    goto LABEL_40;
  }
  if ( (v14 & 0x800002) == 0 )
  {
    v52 = 0LL;
    v51 = 0LL;
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, __int64 *))(*(_QWORD *)a2 + 64LL))(
      a2,
      *((unsigned int *)v11 + 1),
      &v51);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v50, &v52);
    if ( !(_DWORD)v51 && !v52 )
    {
      HoverTarget = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), *((_DWORD *)v11 + 1));
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
        (__int64 (__fastcall ****)(_QWORD))&v50,
        (__int64)HoverTarget);
    }
    goto LABEL_39;
  }
  if ( (v14 & 0x20006) == 0x20002 )
  {
    v16 = CManipulationContext::GetHoverTarget(*((CManipulationContext **)this + 30), *((_DWORD *)v11 + 1));
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(
      (__int64 (__fastcall ****)(_QWORD))&v50,
      (__int64)v16);
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 72LL))(
      a2,
      *((unsigned int *)v11 + 1),
      &v49);
  }
LABEL_41:
  if ( v50 && TargetingInfo::IsRoute((TargetingInfo *)&v49) )
  {
    v46 = ConvertToInputType(*(_DWORD *)v11, *((_DWORD *)v11 + 3));
    (*(void (__fastcall **)(__int64, _QWORD, void **))(v47 + 72))(v48, v46, v5);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v50);
}
