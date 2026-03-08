/*
 * XREFs of ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01CE80C (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00F02A2 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665@Z @ 0x1C01CA5AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByV.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666@Z @ 0x1C01CA888 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$__ea_1C01CA888.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666666666@Z @ 0x1C01CABF8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@D@@U-$__ea_1C01CABF8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556@Z @ 0x1C01CB000 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tl.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01CB344 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::RIM::CopyPointerFromContainer(
        struct RIMDEV *const a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int64 v2; // r8
  const char *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // ecx
  const char *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r9d
  __int64 v13; // r8
  int v14; // ecx
  const char *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r8
  int v20; // r9d
  _WORD *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r9
  _DWORD *v25; // r8
  int v26; // ecx
  const char *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r8
  int v32; // r9d
  _WORD *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // r9
  _DWORD *v37; // r8
  int v38; // ecx
  const char *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // r8
  int v44; // r9d
  _WORD *v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r10
  __int64 v48; // r9
  __int64 v49; // r8
  const char *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // r8
  int v55; // r9d
  _WORD *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r10
  __int64 v59; // r9
  int v60; // [rsp+140h] [rbp-80h] BYREF
  int v61; // [rsp+144h] [rbp-7Ch] BYREF
  int v62; // [rsp+148h] [rbp-78h] BYREF
  int v63; // [rsp+14Ch] [rbp-74h] BYREF
  int v64; // [rsp+150h] [rbp-70h] BYREF
  int v65; // [rsp+154h] [rbp-6Ch] BYREF
  __int64 v66; // [rsp+158h] [rbp-68h] BYREF
  __int64 v67; // [rsp+160h] [rbp-60h] BYREF
  int v68; // [rsp+168h] [rbp-58h] BYREF
  int v69; // [rsp+16Ch] [rbp-54h] BYREF
  int v70; // [rsp+170h] [rbp-50h] BYREF
  int v71; // [rsp+174h] [rbp-4Ch] BYREF
  __int64 v72; // [rsp+178h] [rbp-48h] BYREF
  __int64 v73; // [rsp+180h] [rbp-40h] BYREF
  __int64 v74; // [rsp+188h] [rbp-38h] BYREF
  __int64 v75; // [rsp+190h] [rbp-30h] BYREF
  __int64 v76; // [rsp+198h] [rbp-28h] BYREF
  __int64 v77; // [rsp+1A0h] [rbp-20h] BYREF
  __int64 v78; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v79; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v81; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v82; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v83; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v84; // [rsp+1D8h] [rbp+18h] BYREF
  __int64 v85; // [rsp+1E0h] [rbp+20h] BYREF
  __int64 v86; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v87; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp+38h] BYREF
  __int64 v89; // [rsp+210h] [rbp+50h] BYREF
  __int64 v90; // [rsp+220h] [rbp+60h] BYREF
  __int64 v91; // [rsp+228h] [rbp+68h] BYREF

  if ( a1 )
  {
    v12 = *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL);
    if ( (unsigned int)(v12 - 1) > 3 )
    {
      if ( (unsigned int)(v12 - 5) > 1 )
      {
        if ( v12 == 7 )
        {
          if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
          {
            v38 = v37[24];
            LODWORD(v90) = v37[37];
            LODWORD(v91) = v37[36];
            LODWORD(v80) = v37[35];
            LODWORD(v79) = v37[34];
            LODWORD(v78) = v37[33];
            LODWORD(v77) = v37[32];
            LODWORD(v76) = v37[31];
            LODWORD(v75) = v37[30];
            LODWORD(v74) = v37[29];
            v69 = v37[28];
            v61 = v37[27];
            v65 = v37[26];
            v39 = InputTraceLogging::ButtonChangeTypeToString(v38);
            v41 = *(_QWORD *)(v40 + 88);
            v42 = *(_DWORD *)(v40 + 8);
            v88 = (__int64)v39;
            v64 = *(_DWORD *)(v40 + 84);
            v63 = *(_DWORD *)(v40 + 76);
            v60 = *(_DWORD *)(v40 + 72);
            v86 = *(_QWORD *)(v40 + 32);
            v85 = *(_QWORD *)(v40 + 24);
            v62 = *(_DWORD *)(v40 + 80);
            v68 = *(_DWORD *)(v40 + 68);
            HIDWORD(v67) = *(_DWORD *)(v40 + 64);
            LODWORD(v67) = *(_DWORD *)(v40 + 52);
            HIDWORD(v66) = *(_DWORD *)(v40 + 48);
            LODWORD(v66) = *(_DWORD *)(v40 + 60);
            HIDWORD(v72) = *(_DWORD *)(v40 + 56);
            LODWORD(v72) = *(_DWORD *)(v40 + 44);
            v71 = *(_DWORD *)(v40 + 40);
            v70 = *(_DWORD *)(v40 + 20);
            v87 = v41;
            v84 = (__int64)InputTraceLogging::PointerTypeToString(v42);
            v73 = *(_QWORD *)(v43 + 12);
            v83 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v44);
            LOWORD(v89) = *v45;
            v82 = v46;
            v81 = v47;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C02CA7E0,
              (unsigned __int8 *)dword_1C02975AD,
              (__int64)v45,
              v48,
              (__int64)&v81,
              (__int64)&v82,
              (__int64)&v89,
              (void **)&v83,
              (__int64)&v73,
              (__int64)&v73 + 4,
              (void **)&v84,
              (__int64)&v70,
              (__int64)&v71,
              (__int64)&v72,
              (__int64)&v72 + 4,
              (__int64)&v66,
              (__int64)&v66 + 4,
              (__int64)&v67,
              (__int64)&v67 + 4,
              (__int64)&v68,
              (__int64)&v62,
              (__int64)&v85,
              (__int64)&v86,
              (__int64)&v60,
              (__int64)&v87,
              (__int64)&v63,
              (__int64)&v64,
              (void **)&v88,
              (__int64)&v65,
              (__int64)&v61,
              (__int64)&v69,
              (__int64)&v74,
              (__int64)&v75,
              (__int64)&v76,
              (__int64)&v77,
              (__int64)&v78,
              (__int64)&v79,
              (__int64)&v80,
              (__int64)&v91,
              (__int64)&v90);
          }
        }
        else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
        {
          v50 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v49 + 96));
          v52 = *(_QWORD *)(v51 + 88);
          v53 = *(_DWORD *)(v51 + 8);
          v88 = (__int64)v50;
          LODWORD(v90) = *(_DWORD *)(v51 + 84);
          LODWORD(v91) = *(_DWORD *)(v51 + 76);
          LODWORD(v80) = *(_DWORD *)(v51 + 72);
          v86 = *(_QWORD *)(v51 + 32);
          v85 = *(_QWORD *)(v51 + 24);
          LODWORD(v79) = *(_DWORD *)(v51 + 80);
          LODWORD(v78) = *(_DWORD *)(v51 + 68);
          LODWORD(v77) = *(_DWORD *)(v51 + 64);
          LODWORD(v76) = *(_DWORD *)(v51 + 52);
          LODWORD(v75) = *(_DWORD *)(v51 + 48);
          LODWORD(v74) = *(_DWORD *)(v51 + 60);
          v69 = *(_DWORD *)(v51 + 56);
          v61 = *(_DWORD *)(v51 + 44);
          v65 = *(_DWORD *)(v51 + 40);
          v64 = *(_DWORD *)(v51 + 20);
          v87 = v52;
          v84 = (__int64)InputTraceLogging::PointerTypeToString(v53);
          v63 = *(_DWORD *)(v54 + 16);
          v60 = *(_DWORD *)(v54 + 12);
          v83 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v55);
          LOWORD(v89) = *v56;
          v82 = v57;
          v81 = v58;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
            (__int64)&dword_1C02CA7E0,
            (unsigned __int8 *)dword_1C0297915,
            (__int64)v56,
            v59,
            (__int64)&v81,
            (__int64)&v82,
            (__int64)&v89,
            (void **)&v83,
            (__int64)&v60,
            (__int64)&v63,
            (void **)&v84,
            (__int64)&v64,
            (__int64)&v65,
            (__int64)&v61,
            (__int64)&v69,
            (__int64)&v74,
            (__int64)&v75,
            (__int64)&v76,
            (__int64)&v77,
            (__int64)&v78,
            (__int64)&v79,
            (__int64)&v85,
            (__int64)&v86,
            (__int64)&v80,
            (__int64)&v87,
            (__int64)&v91,
            (__int64)&v90,
            (void **)&v88);
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
      {
        v26 = v25[24];
        LODWORD(v90) = v25[31];
        LODWORD(v91) = v25[30];
        LODWORD(v80) = v25[29];
        LODWORD(v79) = v25[28];
        LODWORD(v78) = v25[27];
        LODWORD(v77) = v25[26];
        v27 = InputTraceLogging::ButtonChangeTypeToString(v26);
        v29 = *(_QWORD *)(v28 + 88);
        v30 = *(_DWORD *)(v28 + 8);
        v88 = (__int64)v27;
        LODWORD(v76) = *(_DWORD *)(v28 + 84);
        LODWORD(v75) = *(_DWORD *)(v28 + 76);
        LODWORD(v74) = *(_DWORD *)(v28 + 72);
        v86 = *(_QWORD *)(v28 + 32);
        v85 = *(_QWORD *)(v28 + 24);
        v69 = *(_DWORD *)(v28 + 80);
        v61 = *(_DWORD *)(v28 + 68);
        v65 = *(_DWORD *)(v28 + 64);
        v64 = *(_DWORD *)(v28 + 52);
        v63 = *(_DWORD *)(v28 + 48);
        v60 = *(_DWORD *)(v28 + 60);
        v62 = *(_DWORD *)(v28 + 56);
        v68 = *(_DWORD *)(v28 + 44);
        HIDWORD(v67) = *(_DWORD *)(v28 + 40);
        LODWORD(v67) = *(_DWORD *)(v28 + 20);
        v87 = v29;
        v84 = (__int64)InputTraceLogging::PointerTypeToString(v30);
        v66 = *(_QWORD *)(v31 + 12);
        v83 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v32);
        LOWORD(v89) = *v33;
        v82 = v34;
        v81 = v35;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C02CA7E0,
          (unsigned __int8 *)dword_1C0297785,
          (__int64)v33,
          v36,
          (__int64)&v81,
          (__int64)&v82,
          (__int64)&v89,
          (void **)&v83,
          (__int64)&v66,
          (__int64)&v66 + 4,
          (void **)&v84,
          (__int64)&v67,
          (__int64)&v67 + 4,
          (__int64)&v68,
          (__int64)&v62,
          (__int64)&v60,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v61,
          (__int64)&v69,
          (__int64)&v85,
          (__int64)&v86,
          (__int64)&v74,
          (__int64)&v87,
          (__int64)&v75,
          (__int64)&v76,
          (void **)&v88,
          (__int64)&v77,
          (__int64)&v78,
          (__int64)&v79,
          (__int64)&v80,
          (__int64)&v91,
          (__int64)&v90);
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
    {
      v14 = *(_DWORD *)(v13 + 96);
      LODWORD(v90) = *(_DWORD *)(v13 + 148);
      LODWORD(v91) = *(_DWORD *)(v13 + 144);
      v60 = *(_DWORD *)(v13 + 140);
      v62 = *(_DWORD *)(v13 + 136);
      v68 = *(_DWORD *)(v13 + 132);
      v67 = *(_QWORD *)(v13 + 124);
      v66 = *(_QWORD *)(v13 + 116);
      v72 = *(_QWORD *)(v13 + 108);
      v71 = *(_DWORD *)(v13 + 104);
      v15 = InputTraceLogging::ButtonChangeTypeToString(v14);
      v17 = *(_QWORD *)(v16 + 88);
      v18 = *(_DWORD *)(v16 + 8);
      v81 = (__int64)v15;
      v70 = *(_DWORD *)(v16 + 84);
      v73 = *(_QWORD *)(v16 + 72);
      v83 = *(_QWORD *)(v16 + 32);
      v84 = *(_QWORD *)(v16 + 24);
      v63 = *(_DWORD *)(v16 + 80);
      v64 = *(_DWORD *)(v16 + 68);
      v65 = *(_DWORD *)(v16 + 64);
      v61 = *(_DWORD *)(v16 + 52);
      v69 = *(_DWORD *)(v16 + 48);
      LODWORD(v74) = *(_DWORD *)(v16 + 60);
      LODWORD(v75) = *(_DWORD *)(v16 + 56);
      LODWORD(v76) = *(_DWORD *)(v16 + 44);
      LODWORD(v77) = *(_DWORD *)(v16 + 40);
      LODWORD(v78) = *(_DWORD *)(v16 + 20);
      v82 = v17;
      v85 = (__int64)InputTraceLogging::PointerTypeToString(v18);
      LODWORD(v79) = *(_DWORD *)(v19 + 16);
      LODWORD(v80) = *(_DWORD *)(v19 + 12);
      v86 = (__int64)InputTraceLogging::PointerDeviceTypeToString(v20);
      LOWORD(v89) = *v21;
      v87 = v22;
      v88 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029728A,
        (__int64)v21,
        v24,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v89,
        (void **)&v86,
        (__int64)&v80,
        (__int64)&v79,
        (void **)&v85,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v69,
        (__int64)&v61,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v84,
        (__int64)&v83,
        (__int64)&v73,
        (__int64)&v82,
        (__int64)&v73 + 4,
        (__int64)&v70,
        (void **)&v81,
        (__int64)&v71,
        (__int64)&v72,
        (__int64)&v72 + 4,
        (__int64)&v66,
        (__int64)&v66 + 4,
        (__int64)&v67,
        (__int64)&v67 + 4,
        (__int64)&v68,
        (__int64)&v62,
        (__int64)&v60,
        (__int64)&v91,
        (__int64)&v90);
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v3 = InputTraceLogging::ButtonChangeTypeToString(*(_DWORD *)(v2 + 96));
    v5 = *(_QWORD *)(v4 + 88);
    v6 = *(_DWORD *)(v4 + 8);
    v80 = (__int64)v3;
    LODWORD(v90) = *(_DWORD *)(v4 + 84);
    LODWORD(v91) = *(_DWORD *)(v4 + 76);
    LODWORD(v73) = *(_DWORD *)(v4 + 72);
    v78 = *(_QWORD *)(v4 + 32);
    v77 = *(_QWORD *)(v4 + 24);
    HIDWORD(v73) = *(_DWORD *)(v4 + 80);
    v70 = *(_DWORD *)(v4 + 68);
    v71 = *(_DWORD *)(v4 + 64);
    LODWORD(v72) = *(_DWORD *)(v4 + 52);
    HIDWORD(v72) = *(_DWORD *)(v4 + 48);
    LODWORD(v66) = *(_DWORD *)(v4 + 60);
    HIDWORD(v66) = *(_DWORD *)(v4 + 56);
    LODWORD(v67) = *(_DWORD *)(v4 + 44);
    HIDWORD(v67) = *(_DWORD *)(v4 + 40);
    v68 = *(_DWORD *)(v4 + 20);
    v79 = v5;
    v7 = InputTraceLogging::PointerTypeToString(v6);
    v74 &= v8;
    v76 = (__int64)v7;
    v62 = *(_DWORD *)(v9 + 16);
    v60 = *(_DWORD *)(v9 + 12);
    LOWORD(v89) = *(_WORD *)v9;
    v75 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C02CA7E0,
      (unsigned __int8 *)dword_1C0297464,
      v9,
      v11,
      (__int64)&v74,
      (__int64)&v75,
      (__int64)&v89,
      (__int64)&v60,
      (__int64)&v62,
      (void **)&v76,
      (__int64)&v68,
      (__int64)&v67 + 4,
      (__int64)&v67,
      (__int64)&v66 + 4,
      (__int64)&v66,
      (__int64)&v72 + 4,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v70,
      (__int64)&v73 + 4,
      (__int64)&v77,
      (__int64)&v78,
      (__int64)&v73,
      (__int64)&v79,
      (__int64)&v91,
      (__int64)&v90,
      (void **)&v80);
  }
}
