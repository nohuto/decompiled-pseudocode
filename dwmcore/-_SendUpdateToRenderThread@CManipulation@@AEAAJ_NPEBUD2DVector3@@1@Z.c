/*
 * XREFs of ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x18020BE3C
 * Callers:
 *     ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x18020A5E0 (-CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z.c)
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x18020B620 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipula.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x18020BA30 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x180012374 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800318E0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800C0CE8 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180208C50 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444444444444@Z @ 0x180209FB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180209FB4.c)
 */

__int64 __fastcall CManipulation::_SendUpdateToRenderThread(
        CManipulation *this,
        char a2,
        const struct D2DVector3 *a3,
        const struct D2DVector3 *a4)
{
  const struct D2DMatrix *v4; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct CManipulationManager *v17; // rbx
  __int64 v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-1C0h]
  struct CManipulationManager *v31; // [rsp+160h] [rbp-80h] BYREF
  struct IMessageCallSendHost *v32; // [rsp+168h] [rbp-78h] BYREF
  int v33; // [rsp+170h] [rbp-70h] BYREF
  int v34; // [rsp+174h] [rbp-6Ch] BYREF
  int v35; // [rsp+178h] [rbp-68h] BYREF
  int v36; // [rsp+17Ch] [rbp-64h] BYREF
  int v37; // [rsp+180h] [rbp-60h] BYREF
  int v38; // [rsp+184h] [rbp-5Ch] BYREF
  int v39; // [rsp+188h] [rbp-58h] BYREF
  int v40; // [rsp+18Ch] [rbp-54h] BYREF
  int v41; // [rsp+190h] [rbp-50h] BYREF
  int v42; // [rsp+194h] [rbp-4Ch] BYREF
  int v43; // [rsp+198h] [rbp-48h] BYREF
  int v44; // [rsp+19Ch] [rbp-44h] BYREF
  int v45; // [rsp+1A0h] [rbp-40h] BYREF
  int v46; // [rsp+1A4h] [rbp-3Ch] BYREF
  int v47; // [rsp+1A8h] [rbp-38h] BYREF
  int v48; // [rsp+1ACh] [rbp-34h] BYREF
  int v49; // [rsp+1B0h] [rbp-30h] BYREF
  int v50; // [rsp+1B4h] [rbp-2Ch] BYREF
  int v51; // [rsp+1B8h] [rbp-28h] BYREF
  int v52; // [rsp+1BCh] [rbp-24h] BYREF
  int v53; // [rsp+1C0h] [rbp-20h] BYREF
  int v54; // [rsp+1C4h] [rbp-1Ch] BYREF
  int v55; // [rsp+1C8h] [rbp-18h] BYREF
  int v56; // [rsp+1CCh] [rbp-14h] BYREF
  int v57; // [rsp+1D0h] [rbp-10h] BYREF
  int v58; // [rsp+1D4h] [rbp-Ch] BYREF
  int v59; // [rsp+1D8h] [rbp-8h] BYREF
  int v60; // [rsp+1DCh] [rbp-4h] BYREF
  int v61; // [rsp+1E0h] [rbp+0h] BYREF
  int v62; // [rsp+1E4h] [rbp+4h] BYREF
  int v63; // [rsp+1E8h] [rbp+8h] BYREF
  int v64; // [rsp+1ECh] [rbp+Ch] BYREF
  int v65; // [rsp+1F0h] [rbp+10h] BYREF
  __int64 v66; // [rsp+1F8h] [rbp+18h] BYREF
  int v67; // [rsp+200h] [rbp+20h] BYREF
  int v68; // [rsp+204h] [rbp+24h] BYREF
  CManipulation *v69; // [rsp+208h] [rbp+28h] BYREF
  __int128 v70; // [rsp+210h] [rbp+30h]
  __int128 v71; // [rsp+220h] [rbp+40h]
  __int128 v72; // [rsp+230h] [rbp+50h]
  __int128 v73; // [rsp+240h] [rbp+60h]
  __int128 v74; // [rsp+250h] [rbp+70h]
  __int128 v75; // [rsp+260h] [rbp+80h]
  __int128 v76; // [rsp+270h] [rbp+90h]
  __int128 v77; // [rsp+280h] [rbp+A0h]
  __int128 v78; // [rsp+290h] [rbp+B0h]
  __int128 v79; // [rsp+2A0h] [rbp+C0h]
  __int128 v80; // [rsp+2B0h] [rbp+D0h]
  __int64 v81; // [rsp+2C0h] [rbp+E0h]
  _OWORD v82[4]; // [rsp+2D0h] [rbp+F0h] BYREF
  _BYTE v83[64]; // [rsp+310h] [rbp+130h] BYREF

  v4 = (CManipulation *)((char *)this + 144);
  if ( a2 )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      a3,
      a4,
      (CManipulation *)((char *)this + 132),
      (struct D2DMatrix *)v83);
    D2DMatrixMultiply((struct D2DMatrix *)v82, v4, (const struct D2DMatrix *)v83);
    v6 = v82[1];
    v7 = v82[2];
    *(_OWORD *)v4 = v82[0];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v82[3];
    *((_OWORD *)v4 + 2) = v7;
    *((_OWORD *)v4 + 3) = v8;
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v62 = *((_DWORD *)this + 113);
    v11 = *((_BYTE *)this + 260);
    v69 = this;
    v68 = (v11 >> 1) & 1;
    v12 = v11 & 1;
    v34 = *((_DWORD *)this + 60);
    v35 = *((_DWORD *)this + 64);
    v36 = *((_DWORD *)this + 63);
    v37 = *((_DWORD *)this + 62);
    v38 = *((_DWORD *)this + 59);
    v39 = *((_DWORD *)this + 51);
    v40 = *((_DWORD *)this + 50);
    v41 = *((_DWORD *)this + 49);
    v42 = *((_DWORD *)this + 48);
    v43 = *((_DWORD *)this + 47);
    v44 = *((_DWORD *)this + 46);
    v45 = *((_DWORD *)this + 45);
    v46 = *((_DWORD *)this + 44);
    v47 = *((_DWORD *)this + 43);
    v48 = *((_DWORD *)this + 42);
    v49 = *((_DWORD *)this + 41);
    v50 = *((_DWORD *)this + 40);
    v51 = *((_DWORD *)this + 39);
    v52 = *((_DWORD *)this + 38);
    v53 = *((_DWORD *)this + 37);
    v54 = *(_DWORD *)v4;
    v55 = *((_DWORD *)this + 58);
    v56 = *((_DWORD *)this + 57);
    v57 = *((_DWORD *)this + 56);
    v58 = *((_DWORD *)this + 55);
    v59 = *((_DWORD *)this + 54);
    v60 = *((_DWORD *)this + 53);
    v61 = *((_DWORD *)this + 52);
    v67 = *((_DWORD *)this + 32);
    v63 = *((_DWORD *)this + 28);
    v64 = *((_DWORD *)this + 27);
    v65 = *((_DWORD *)this + 26);
    LODWORD(v66) = *((_DWORD *)this + 22);
    LODWORD(v31) = *((_DWORD *)this + 21);
    LODWORD(v32) = *((_DWORD *)this + 20);
    v33 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_18037C64B,
      v9,
      v10,
      (__int64)&v69,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v67,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v68,
      (__int64)&v62);
  }
  v13 = (CComposition *)*((_QWORD *)this + 2);
  v31 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  ManipulationManager = CComposition::GetManipulationManager(v13, &v31);
  v16 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v30 = 320;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  v17 = v31;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v31, &v32);
  v16 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v30 = 322;
    goto LABEL_15;
  }
  v18 = *((_QWORD *)v17 + 7);
  if ( v18 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v69 = this;
    v19 = *((_OWORD *)this + 5);
    v20 = *((_OWORD *)this + 6);
    v66 = v18;
    v70 = v19;
    v21 = *((_OWORD *)this + 7);
    v71 = v20;
    v22 = *((_OWORD *)this + 8);
    v72 = v21;
    v23 = *((_OWORD *)this + 9);
    v73 = v22;
    v24 = *((_OWORD *)this + 10);
    v74 = v23;
    v25 = *((_OWORD *)this + 11);
    v75 = v24;
    v76 = v25;
    v77 = *((_OWORD *)this + 12);
    v26 = *((_OWORD *)this + 14);
    v78 = *((_OWORD *)this + 13);
    v27 = *((_OWORD *)this + 15);
    v28 = *((_QWORD *)this + 32);
    v79 = v26;
    v80 = v27;
    v81 = v28;
    ManipulationManager = CoreUICallSend(v32, &v66, 1LL, 12LL, 0, &unk_18033943C, &v69);
    v16 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
        0LL,
        0x4000LL);
      goto LABEL_16;
    }
    v30 = 333;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, ManipulationManager, v30, 0LL);
    goto LABEL_16;
  }
  v16 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147467259, 0x145u, 0LL);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  return v16;
}
