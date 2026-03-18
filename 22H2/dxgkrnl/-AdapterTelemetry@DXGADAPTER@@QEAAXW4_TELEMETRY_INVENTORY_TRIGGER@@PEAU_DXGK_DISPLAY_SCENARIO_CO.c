/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021A2B8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0219510 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C030D1A0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C002008C (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage @ 0x1C0023F84 (Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperArray@$00@@U8@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3565AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$00@@555@Z @ 0x1C003ED50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01B625C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiGetDriverFullPath @ 0x1C01E4DC8 (DpiGetDriverFullPath.c)
 *     DxgkCountInterfaceFunctions @ 0x1C021AD34 (DxgkCountInterfaceFunctions.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C022F9AC (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  int v3; // r14d
  bool v4; // zf
  int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rbx
  int v12; // r15d
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  unsigned __int16 *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r9
  int v22; // r10d
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  GUID *p_ActivityId; // r8
  _BYTE v32[2]; // [rsp+240h] [rbp-80h] BYREF
  __int16 v33; // [rsp+242h] [rbp-7Eh] BYREF
  __int16 v34; // [rsp+244h] [rbp-7Ch] BYREF
  __int16 v35; // [rsp+246h] [rbp-7Ah] BYREF
  char v36; // [rsp+248h] [rbp-78h]
  int v37; // [rsp+24Ch] [rbp-74h] BYREF
  __int16 v38; // [rsp+250h] [rbp-70h] BYREF
  __int16 v39; // [rsp+252h] [rbp-6Eh] BYREF
  __int16 v40; // [rsp+254h] [rbp-6Ch] BYREF
  __int16 v41; // [rsp+256h] [rbp-6Ah] BYREF
  _WORD v42[2]; // [rsp+258h] [rbp-68h] BYREF
  int v43; // [rsp+25Ch] [rbp-64h] BYREF
  int v44; // [rsp+260h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+264h] [rbp-5Ch] BYREF
  unsigned int v46; // [rsp+268h] [rbp-58h] BYREF
  __int64 v47; // [rsp+270h] [rbp-50h] BYREF
  unsigned __int16 *v48; // [rsp+278h] [rbp-48h] BYREF
  unsigned __int16 *v49; // [rsp+280h] [rbp-40h] BYREF
  unsigned __int16 *v50; // [rsp+288h] [rbp-38h] BYREF
  unsigned __int16 *v51; // [rsp+290h] [rbp-30h] BYREF
  __int64 v52; // [rsp+298h] [rbp-28h] BYREF
  __int64 v53; // [rsp+2A0h] [rbp-20h] BYREF
  __int64 v54; // [rsp+2A8h] [rbp-18h] BYREF
  unsigned __int16 *v55; // [rsp+2B0h] [rbp-10h] BYREF
  int v56; // [rsp+2B8h] [rbp-8h] BYREF
  int v57; // [rsp+2BCh] [rbp-4h] BYREF
  unsigned int v58; // [rsp+2C0h] [rbp+0h] BYREF
  int v59; // [rsp+2C4h] [rbp+4h] BYREF
  unsigned int v60; // [rsp+2C8h] [rbp+8h] BYREF
  unsigned int v61; // [rsp+2CCh] [rbp+Ch] BYREF
  int v62; // [rsp+2D0h] [rbp+10h] BYREF
  int v63; // [rsp+2D4h] [rbp+14h] BYREF
  int v64; // [rsp+2D8h] [rbp+18h] BYREF
  int v65; // [rsp+2DCh] [rbp+1Ch] BYREF
  int v66; // [rsp+2E0h] [rbp+20h] BYREF
  int v67; // [rsp+2E4h] [rbp+24h] BYREF
  int v68; // [rsp+2E8h] [rbp+28h] BYREF
  int v69; // [rsp+2ECh] [rbp+2Ch] BYREF
  int v70; // [rsp+2F0h] [rbp+30h] BYREF
  __int64 v71; // [rsp+2F8h] [rbp+38h] BYREF
  int v72; // [rsp+300h] [rbp+40h] BYREF
  _DWORD v73[5]; // [rsp+304h] [rbp+44h] BYREF
  int v74; // [rsp+318h] [rbp+58h] BYREF
  int DriverFullPath; // [rsp+31Ch] [rbp+5Ch]
  int v76; // [rsp+320h] [rbp+60h] BYREF
  __int64 v77; // [rsp+328h] [rbp+68h] BYREF
  __int64 v78; // [rsp+330h] [rbp+70h] BYREF
  __int64 v79; // [rsp+338h] [rbp+78h] BYREF
  DXGADAPTER *v80[2]; // [rsp+340h] [rbp+80h] BYREF
  __int128 v81; // [rsp+350h] [rbp+90h] BYREF
  __int64 v82; // [rsp+360h] [rbp+A0h]
  PVOID *v83; // [rsp+368h] [rbp+A8h]
  __int64 v84; // [rsp+370h] [rbp+B0h] BYREF
  unsigned __int16 *v85; // [rsp+378h] [rbp+B8h] BYREF
  __int64 v86; // [rsp+380h] [rbp+C0h] BYREF
  __int64 v87; // [rsp+388h] [rbp+C8h] BYREF
  __int64 v88; // [rsp+390h] [rbp+D0h] BYREF
  unsigned __int16 *v89; // [rsp+398h] [rbp+D8h] BYREF
  unsigned __int16 *v90; // [rsp+3A0h] [rbp+E0h] BYREF
  unsigned __int16 *v91; // [rsp+3A8h] [rbp+E8h] BYREF
  unsigned __int16 *v92; // [rsp+3B0h] [rbp+F0h] BYREF
  PVOID *v93; // [rsp+3B8h] [rbp+F8h] BYREF
  __int64 v94; // [rsp+3C0h] [rbp+100h] BYREF
  __int64 v95; // [rsp+3C8h] [rbp+108h] BYREF
  __int64 v96; // [rsp+3D0h] [rbp+110h] BYREF
  __int64 v97; // [rsp+3D8h] [rbp+118h] BYREF
  __int64 v98; // [rsp+3E0h] [rbp+120h] BYREF
  _WORD *v99; // [rsp+3E8h] [rbp+128h] BYREF
  unsigned __int16 *v100; // [rsp+3F0h] [rbp+130h] BYREF
  PVOID P[2]; // [rsp+3F8h] [rbp+138h] BYREF
  PVOID v102[2]; // [rsp+408h] [rbp+148h] BYREF
  __int128 v103; // [rsp+418h] [rbp+158h] BYREF
  int v104; // [rsp+428h] [rbp+168h]
  _BYTE *v105; // [rsp+430h] [rbp+170h]
  __int16 v106; // [rsp+438h] [rbp+178h]
  _BYTE *v107; // [rsp+440h] [rbp+180h]
  __int16 v108; // [rsp+448h] [rbp+188h]
  _DWORD *v109; // [rsp+450h] [rbp+190h] BYREF
  __int16 v110; // [rsp+458h] [rbp+198h]
  __int64 v111; // [rsp+460h] [rbp+1A0h] BYREF
  int v112; // [rsp+468h] [rbp+1A8h]
  const wchar_t *v113; // [rsp+470h] [rbp+1B0h]
  PVOID *v114; // [rsp+478h] [rbp+1B8h]
  int v115; // [rsp+480h] [rbp+1C0h]
  __int64 v116; // [rsp+488h] [rbp+1C8h]
  int v117; // [rsp+490h] [rbp+1D0h]
  __int64 v118; // [rsp+498h] [rbp+1D8h]
  int v119; // [rsp+4A0h] [rbp+1E0h]
  __int128 v120; // [rsp+4A8h] [rbp+1E8h]
  __int128 v121; // [rsp+4B8h] [rbp+1F8h]
  __int64 v122; // [rsp+4C8h] [rbp+208h]
  GUID ActivityId; // [rsp+4D0h] [rbp+210h] BYREF

  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 436) & 0x20000) == 0;
  v43 = *(_DWORD *)(a1 + 2820);
  v71 = *(_QWORD *)(a1 + 896);
  v6 = 1;
  v46 = *(_DWORD *)(a1 + 288);
  v82 = a3;
  v44 = a2;
  if ( !v4 || (v7 = *(_DWORD *)(a1 + 2792) >> 1, v37 = 0, (v7 & 1) != 0) )
    v37 = 1;
  v103 = 0LL;
  v104 = 0;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v45);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v103);
  if ( *(_QWORD *)(a1 + 2928) || *(_QWORD *)(a1 + 2920) )
  {
    v8 = *(_QWORD *)(a1 + 2920);
    v79 = 0LL;
    v78 = 0LL;
    LOWORD(v9) = 0;
    v77 = 0LL;
    LOWORD(v10) = 0;
    v35 = 0;
    v11 = 0LL;
    v34 = 0;
    v12 = 0;
    LOBYTE(v33) = 0;
    *(_OWORD *)P = 0LL;
    v81 = 0LL;
    if ( v8 )
    {
      v13 = *(_DWORD *)(v8 + 24);
      v35 = *(_WORD *)(a1 + 1672);
      v34 = *(_WORD *)(a1 + 1676);
      v12 = (v13 >> 5) & 1;
    }
    if ( (*(_DWORD *)(a1 + 436) & 0x100) != 0 )
    {
      v80[0] = 0LL;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a1, 0, (struct DXGADAPTER_REFERENCE *)v80) >= 0 )
        v11 = *(_QWORD *)((char *)v80[0] + 404);
      DXGADAPTER_REFERENCE::Assign(v80, 0LL);
    }
    v14 = *(_QWORD *)(a1 + 2928);
    if ( !v14 )
      goto LABEL_17;
    if ( !*(_BYTE *)(a1 + 209) )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 64LL))(
        *(_QWORD *)(v14 + 768),
        0LL,
        &v47,
        &v47,
        &v47,
        &v79,
        &v78,
        &v77);
    }
    v15 = *(_QWORD *)(a1 + 2928);
    LOBYTE(v33) = *(_BYTE *)(v15 + 1880);
    v16 = *(_DWORD **)(a1 + 2824);
    v9 = (*v16 >> 15) & 3;
    v10 = (*v16 >> 18) & 3;
    v3 = (*v16 >> 20) & 1;
    if ( v15 )
    {
      v48 = (unsigned __int16 *)(v15 + 320);
      v49 = (unsigned __int16 *)(v15 + 336);
      v50 = (unsigned __int16 *)(v15 + 352);
      v51 = (unsigned __int16 *)(v15 + 368);
      v17 = (unsigned __int16 *)(v15 + 512);
    }
    else
    {
LABEL_17:
      v48 = (unsigned __int16 *)&v81;
      v49 = (unsigned __int16 *)&v81;
      v50 = (unsigned __int16 *)&v81;
      v51 = (unsigned __int16 *)&v81;
      v17 = (unsigned __int16 *)&v81;
    }
    v18 = *(_QWORD *)(a1 + 216);
    v55 = v17;
    DriverFullPath = DpiGetDriverFullPath(v18, P);
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    DxgkCountInterfaceFunctions(a1 + 280, &v52, &v53, &v54);
    v73[0] = **(_DWORD **)(a1 + 2824);
    *(_OWORD *)v102 = 0LL;
    Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage();
    v112 = 292;
    v111 = 0LL;
    v115 = 16777217;
    v113 = L"DxDbVersion";
    v116 = 0LL;
    v114 = v102;
    v117 = 0;
    v122 = 0LL;
    v118 = 0LL;
    v119 = 0;
    v120 = 0LL;
    v121 = 0LL;
    v19 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\DirectX", &v111, 0LL, 0LL);
    LODWORD(v20) = 0;
    LODWORD(v47) = v19;
    ++DXGADAPTER::sTelemetrySeqId;
    v32[0] = 0;
    if ( (unsigned int)dword_1C013F9C0 > 5 && tlgKeywordOn((__int64)&dword_1C013F9C0, 0x800000000004LL) )
    {
      v23 = (*(unsigned __int8 *)(a1 + 2891) >> 1) & 1;
      v73[2] = v20;
      v73[1] = v23;
      v105 = v32;
      v107 = v32;
      v83 = v102;
      v109 = v73;
      v110 = v20 + 4;
      v85 = v55;
      v86 = v54;
      v87 = v53;
      v88 = v52;
      v76 = *(_DWORD *)(a1 + 2096);
      v89 = v51;
      v90 = v50;
      v91 = v49;
      v92 = v48;
      v93 = P;
      v38 = *(_WORD *)(a1 + 1680);
      v94 = v77;
      v95 = v78;
      v96 = v79;
      v56 = v44;
      v39 = *(_WORD *)(a1 + 2748);
      v40 = *(_WORD *)(a1 + 2744);
      v97 = *(_QWORD *)(a1 + 404);
      v41 = v43;
      v42[0] = *(_WORD *)(a1 + 1872);
      v57 = v37;
      v73[3] = v20;
      v58 = (v45 >> 1) & 1;
      v106 = v20;
      v59 = v45 & 1;
      v108 = v20;
      v60 = (v45 >> 2) & 1;
      v36 = v20;
      v73[4] = v20;
      v74 = v22;
      v84 = v11;
      v24 = *(_DWORD *)(a1 + 436);
      LOWORD(v43) = v10;
      v61 = (v45 >> 3) & 1;
      v63 = v3;
      v62 = (v24 >> 7) & 1;
      v25 = v20;
      LOBYTE(v25) = v46 > 1;
      LOWORD(v44) = v9;
      v46 = v25;
      v64 = (unsigned __int8)v33;
      v26 = *(_WORD *)(a1 + 2286) & 1;
      v72 = v12;
      v65 = v26;
      v27 = v20;
      LOBYTE(v27) = v71 != v20;
      v66 = v27;
      v67 = *(unsigned __int8 *)(a1 + 2764);
      v68 = *(unsigned __int8 *)(a1 + 2759);
      v28 = v20;
      LOBYTE(v28) = BYTE8(v103) == (unsigned __int8)v20;
      v69 = v28;
      v29 = (v24 >> 6) & 1;
      LODWORD(v71) = *(_DWORD *)(a1 + 1832);
      v98 = *(_QWORD *)(a1 + 1824);
      v99 = *(_WORD **)(a1 + 1816);
      v33 = *(_WORD *)(a1 + 428);
      LODWORD(v48) = *(_DWORD *)(a1 + 424);
      LODWORD(v49) = *(_DWORD *)(a1 + 420);
      LODWORD(v50) = *(_DWORD *)(a1 + 416);
      LODWORD(v51) = *(_DWORD *)(a1 + 412);
      v100 = *(unsigned __int16 **)(a1 + 1744);
      v70 = v29;
      if ( !(_DWORD)v21 || (v4 = tlgKeywordOn((__int64)&dword_1C013F9C0, 0x200000000000LL) == 0, v30 = 1, v4) )
        v30 = v20;
      LODWORD(v52) = v30;
      if ( !(_DWORD)v21 || !tlgKeywordOn((__int64)&dword_1C013F9C0, 0x400000000000LL) )
        v6 = v20;
      LODWORD(v54) = DXGADAPTER::sTelemetrySeqId;
      LODWORD(v53) = v6;
      LODWORD(v55) = MEMORY[0xFFFFF780000002C4];
      LOWORD(v37) = 20;
      v80[0] = (DXGADAPTER *)2048;
      p_ActivityId = (GUID *)(v82 + 8);
      if ( !v82 )
        p_ActivityId = &ActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperArray<1>,_tlgWrapperArray<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v29,
        byte_1C00A6A58,
        p_ActivityId,
        v21,
        (__int64)v80,
        (__int64)&v37,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52,
        &v100,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v33,
        &v99,
        (__int64)&v98,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v72,
        (__int64)&v44,
        (__int64)&v63,
        (__int64)&v43,
        (__int64)&v46,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v45,
        (__int64)&v57,
        (__int64)v42,
        (__int64)&v41,
        (__int64)&v97,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v56,
        (__int64)&v96,
        (__int64)&v95,
        (__int64)&v94,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v38,
        (unsigned __int16 **)&v93,
        &v92,
        &v91,
        &v90,
        &v89,
        (__int64)&v76,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v86,
        &v85,
        (__int64 *)&v109,
        (__int64)&v84,
        (__int64)&v74);
      LODWORD(v20) = 0;
    }
    if ( DriverFullPath >= (int)v20 )
      ExFreePoolWithTag(P[1], 0);
    Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage();
    if ( (int)v47 >= 0 )
      ExFreePoolWithTag(v102[1], 0);
  }
}
