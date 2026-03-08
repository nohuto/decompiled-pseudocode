/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C478
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@444444443@Z @ 0x1801994E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@U2@U2@U2@U2@U1@@-$_.c)
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019A7E4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019D9FC (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019E3BC (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Update@ManipulationThreadTelemetryData@@QEAAXAEBUtagPOINTER_INFO@@AEBUtagTELEMETRY_POINTER_FRAME_TIMES@@I@Z @ 0x18019EFB0 (-Update@ManipulationThreadTelemetryData@@QEAAXAEBUtagPOINTER_INFO@@AEBUtagTELEMETRY_POINTER_FRAM.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v2; // eax
  unsigned int *v4; // rdx
  unsigned int v6; // r9d
  __int128 *v7; // rsi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  int v76; // [rsp+90h] [rbp-80h] BYREF
  int v77; // [rsp+94h] [rbp-7Ch] BYREF
  int v78; // [rsp+98h] [rbp-78h] BYREF
  int v79; // [rsp+9Ch] [rbp-74h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v89; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v90; // [rsp+100h] [rbp-10h]
  __int128 v91; // [rsp+110h] [rbp+0h]
  __int128 v92; // [rsp+120h] [rbp+10h]
  __int128 v93; // [rsp+130h] [rbp+20h]
  __int128 v94; // [rsp+140h] [rbp+30h]
  __int128 v95; // [rsp+150h] [rbp+40h]
  __int128 v96; // [rsp+160h] [rbp+50h]
  __int128 v97; // [rsp+170h] [rbp+60h]

  v2 = *((_DWORD *)a2 + 94);
  v4 = (unsigned int *)((char *)this + 268);
  if ( *((_DWORD *)this + 66) != v2 )
  {
    ++*v4;
    *((_DWORD *)this + 66) = v2;
  }
  v6 = *v4;
  v7 = (__int128 *)((char *)a2 + 32);
  v8 = *((_OWORD *)a2 + 3);
  v89 = *((_OWORD *)a2 + 2);
  v9 = *((_OWORD *)a2 + 4);
  v90 = v8;
  v10 = *((_OWORD *)a2 + 5);
  v91 = v9;
  v11 = *((_OWORD *)a2 + 6);
  v92 = v10;
  v12 = *((_OWORD *)a2 + 7);
  v93 = v11;
  v13 = *((_OWORD *)a2 + 8);
  v94 = v12;
  v14 = *((_OWORD *)a2 + 10);
  v95 = v13;
  v96 = *((_OWORD *)a2 + 9);
  v97 = v14;
  ManipulationThreadTelemetryData::Update(
    (struct CManipulationFrame *)((char *)a2 + 184),
    (struct CManipulationFrame *)((char *)a2 + 368),
    (const struct tagTELEMETRY_POINTER_FRAME_TIMES *)&v89,
    v6);
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v17 = *v7;
    v18 = *((_OWORD *)a2 + 3);
    v76 = *((_DWORD *)a2 + 92);
    v89 = v17;
    v90 = v18;
    v19 = *((_OWORD *)a2 + 5);
    v91 = *((_OWORD *)a2 + 4);
    v92 = v19;
    v20 = *((_OWORD *)a2 + 7);
    v93 = *((_OWORD *)a2 + 6);
    v94 = v20;
    v21 = *((_OWORD *)a2 + 9);
    v95 = *((_OWORD *)a2 + 8);
    v96 = v21;
    v22 = *((_OWORD *)a2 + 3);
    v97 = *((_OWORD *)a2 + 10);
    v23 = *v7;
    v80 = *((_QWORD *)&v92 + 1);
    v89 = v23;
    v90 = v22;
    v24 = *((_OWORD *)a2 + 5);
    v91 = *((_OWORD *)a2 + 4);
    v92 = v24;
    v25 = *((_OWORD *)a2 + 7);
    v93 = *((_OWORD *)a2 + 6);
    v26 = *((_OWORD *)a2 + 8);
    v94 = v25;
    v27 = *((_OWORD *)a2 + 9);
    v95 = v26;
    v28 = *((_OWORD *)a2 + 10);
    v96 = v27;
    v29 = *((_OWORD *)a2 + 3);
    v97 = v28;
    v30 = *v7;
    v81 = v92;
    v89 = v30;
    v31 = *((_OWORD *)a2 + 4);
    v90 = v29;
    v32 = *((_OWORD *)a2 + 5);
    v91 = v31;
    v33 = *((_OWORD *)a2 + 6);
    v92 = v32;
    v34 = *((_OWORD *)a2 + 7);
    v93 = v33;
    v35 = *((_OWORD *)a2 + 8);
    v94 = v34;
    v36 = *((_OWORD *)a2 + 9);
    v95 = v35;
    v37 = *((_OWORD *)a2 + 10);
    v96 = v36;
    v38 = *((_OWORD *)a2 + 3);
    v97 = v37;
    v39 = *v7;
    v82 = *((_QWORD *)&v91 + 1);
    v89 = v39;
    v40 = *((_OWORD *)a2 + 4);
    v90 = v38;
    v41 = *((_OWORD *)a2 + 5);
    v91 = v40;
    v42 = *((_OWORD *)a2 + 6);
    v92 = v41;
    v43 = *((_OWORD *)a2 + 7);
    v93 = v42;
    v44 = *((_OWORD *)a2 + 8);
    v94 = v43;
    v45 = *((_OWORD *)a2 + 9);
    v95 = v44;
    v96 = v45;
    v46 = *((_OWORD *)a2 + 3);
    v97 = *((_OWORD *)a2 + 10);
    v47 = *v7;
    v83 = v91;
    v89 = v47;
    v90 = v46;
    v48 = *((_OWORD *)a2 + 5);
    v91 = *((_OWORD *)a2 + 4);
    v92 = v48;
    v49 = *((_OWORD *)a2 + 7);
    v93 = *((_OWORD *)a2 + 6);
    v94 = v49;
    v50 = *((_OWORD *)a2 + 9);
    v95 = *((_OWORD *)a2 + 8);
    v96 = v50;
    v51 = *((_OWORD *)a2 + 3);
    v97 = *((_OWORD *)a2 + 10);
    v52 = *v7;
    v84 = *((_QWORD *)&v90 + 1);
    v89 = v52;
    v90 = v51;
    v53 = *((_OWORD *)a2 + 5);
    v91 = *((_OWORD *)a2 + 4);
    v54 = *((_OWORD *)a2 + 6);
    v92 = v53;
    v55 = *((_OWORD *)a2 + 7);
    v93 = v54;
    v56 = *((_OWORD *)a2 + 8);
    v94 = v55;
    v57 = *((_OWORD *)a2 + 9);
    v95 = v56;
    v58 = *((_OWORD *)a2 + 10);
    v96 = v57;
    v59 = *((_OWORD *)a2 + 3);
    v97 = v58;
    v60 = *v7;
    v85 = v90;
    v89 = v60;
    v61 = *((_OWORD *)a2 + 4);
    v90 = v59;
    v62 = *((_OWORD *)a2 + 5);
    v91 = v61;
    v63 = *((_OWORD *)a2 + 6);
    v92 = v62;
    v64 = *((_OWORD *)a2 + 7);
    v93 = v63;
    v65 = *((_OWORD *)a2 + 8);
    v94 = v64;
    v66 = *((_OWORD *)a2 + 9);
    v95 = v65;
    v67 = *((_OWORD *)a2 + 10);
    v96 = v66;
    v68 = *((_OWORD *)a2 + 3);
    v97 = v67;
    v69 = *v7;
    v86 = *((_QWORD *)&v89 + 1);
    v89 = v69;
    v70 = *((_OWORD *)a2 + 4);
    v90 = v68;
    v71 = *((_OWORD *)a2 + 5);
    v91 = v70;
    v72 = *((_OWORD *)a2 + 6);
    v92 = v71;
    v73 = *((_OWORD *)a2 + 7);
    v93 = v72;
    v94 = v73;
    v74 = *((_OWORD *)a2 + 9);
    v95 = *((_OWORD *)a2 + 8);
    v75 = *((_OWORD *)a2 + 10);
    v96 = v74;
    v97 = v75;
    v87 = v89;
    v88 = *((_QWORD *)a2 + 56);
    v77 = *((_DWORD *)a2 + 4);
    v78 = *((_DWORD *)a2 + 48);
    v79 = *((_DWORD *)a2 + 6);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&v89,
      byte_1803796C5,
      v15,
      v16,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v88,
      (__int64)&v87,
      (__int64)&v86,
      (__int64)&v85,
      (__int64)&v84,
      (__int64)&v83,
      (__int64)&v82,
      (__int64)&v81,
      (__int64)&v80,
      (__int64)&v76);
  }
  CManipulationManager::ProcessFrameInputPreTargeting(this, a2);
  CManipulationManager::CalculateFrameTargets(this, a2);
  CManipulationManager::TargetFrameInput(this, a2);
  CManipulationManager::RouteAllFrames(this, a2);
  CManipulationManager::ProcessFrameInputPostTargeting(this, a2);
}
