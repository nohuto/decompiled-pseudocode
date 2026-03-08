/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0308370 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C001FE2C (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@356@Z @ 0x1C001FE60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage @ 0x1C0024478 (Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage.c)
 *     Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage @ 0x1C00244DC (Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperArray@$00@@U8@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3565AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$00@@555@Z @ 0x1C003DDF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@_ea_1C003DDF0.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiGetDriverFullPath @ 0x1C01D01CC (DpiGetDriverFullPath.c)
 *     DxgkCountInterfaceFunctions @ 0x1C020C6EC (DxgkCountInterfaceFunctions.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0221406 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // esi
  int v7; // eax
  __int64 v8; // rax
  int v9; // r12d
  bool v10; // r14
  int v11; // r13d
  unsigned __int16 *v12; // rbx
  bool v13; // r15
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // r11
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  GUID *v30; // r8
  __int64 v31; // r9
  int v32; // r10d
  __int64 v33; // r11
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  GUID *p_ActivityId; // r8
  __int16 v42; // [rsp+240h] [rbp-80h] BYREF
  __int16 v43; // [rsp+242h] [rbp-7Eh] BYREF
  __int16 v44; // [rsp+244h] [rbp-7Ch] BYREF
  __int16 v45; // [rsp+246h] [rbp-7Ah] BYREF
  __int16 v46; // [rsp+248h] [rbp-78h] BYREF
  __int16 v47; // [rsp+24Ah] [rbp-76h] BYREF
  __int16 v48; // [rsp+24Ch] [rbp-74h] BYREF
  __int16 v49; // [rsp+24Eh] [rbp-72h] BYREF
  __int16 v50; // [rsp+250h] [rbp-70h] BYREF
  __int16 v51; // [rsp+252h] [rbp-6Eh] BYREF
  _WORD v52[2]; // [rsp+254h] [rbp-6Ch] BYREF
  int v53; // [rsp+258h] [rbp-68h] BYREF
  int v54; // [rsp+25Ch] [rbp-64h] BYREF
  unsigned int v55; // [rsp+260h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+264h] [rbp-5Ch] BYREF
  int v57; // [rsp+268h] [rbp-58h] BYREF
  int v58; // [rsp+26Ch] [rbp-54h]
  unsigned __int16 *v59; // [rsp+270h] [rbp-50h] BYREF
  int v60; // [rsp+278h] [rbp-48h] BYREF
  int v61; // [rsp+27Ch] [rbp-44h] BYREF
  int v62; // [rsp+280h] [rbp-40h] BYREF
  int v63; // [rsp+284h] [rbp-3Ch] BYREF
  int v64; // [rsp+288h] [rbp-38h] BYREF
  int v65; // [rsp+28Ch] [rbp-34h] BYREF
  int v66; // [rsp+290h] [rbp-30h] BYREF
  BOOL v67; // [rsp+294h] [rbp-2Ch] BYREF
  int v68; // [rsp+298h] [rbp-28h] BYREF
  int v69; // [rsp+29Ch] [rbp-24h] BYREF
  int v70; // [rsp+2A0h] [rbp-20h] BYREF
  int v71; // [rsp+2A4h] [rbp-1Ch] BYREF
  int v72; // [rsp+2A8h] [rbp-18h] BYREF
  int v73; // [rsp+2ACh] [rbp-14h] BYREF
  int v74; // [rsp+2B0h] [rbp-10h] BYREF
  unsigned int v75; // [rsp+2B4h] [rbp-Ch] BYREF
  unsigned __int16 *v76; // [rsp+2B8h] [rbp-8h] BYREF
  unsigned __int16 *v77; // [rsp+2C0h] [rbp+0h] BYREF
  int v78; // [rsp+2C8h] [rbp+8h] BYREF
  int v79; // [rsp+2CCh] [rbp+Ch] BYREF
  int v80; // [rsp+2D0h] [rbp+10h] BYREF
  int v81; // [rsp+2D4h] [rbp+14h] BYREF
  volatile unsigned int v82; // [rsp+2D8h] [rbp+18h] BYREF
  int v83; // [rsp+2DCh] [rbp+1Ch] BYREF
  PVOID *v84; // [rsp+2E0h] [rbp+20h] BYREF
  unsigned __int16 *v85; // [rsp+2E8h] [rbp+28h] BYREF
  __int64 v86; // [rsp+2F0h] [rbp+30h] BYREF
  __int64 v87; // [rsp+2F8h] [rbp+38h] BYREF
  __int64 v88; // [rsp+300h] [rbp+40h] BYREF
  __int64 v89; // [rsp+308h] [rbp+48h] BYREF
  int v90; // [rsp+310h] [rbp+50h] BYREF
  __int64 v91; // [rsp+318h] [rbp+58h] BYREF
  __int64 v92; // [rsp+320h] [rbp+60h] BYREF
  __int16 v93; // [rsp+328h] [rbp+68h]
  unsigned __int16 *v94; // [rsp+330h] [rbp+70h] BYREF
  __int64 v95; // [rsp+338h] [rbp+78h] BYREF
  __int64 v96; // [rsp+340h] [rbp+80h] BYREF
  PVOID *v97; // [rsp+348h] [rbp+88h] BYREF
  PVOID *v98; // [rsp+350h] [rbp+90h] BYREF
  unsigned __int16 *v99; // [rsp+358h] [rbp+98h] BYREF
  unsigned __int16 *v100; // [rsp+360h] [rbp+A0h] BYREF
  PVOID *v101; // [rsp+368h] [rbp+A8h] BYREF
  unsigned __int16 *v102; // [rsp+370h] [rbp+B0h] BYREF
  __int64 v103; // [rsp+378h] [rbp+B8h] BYREF
  __int64 v104; // [rsp+380h] [rbp+C0h] BYREF
  __int64 v105; // [rsp+388h] [rbp+C8h] BYREF
  _WORD *v106; // [rsp+390h] [rbp+D0h] BYREF
  unsigned __int16 *v107; // [rsp+398h] [rbp+D8h] BYREF
  __int64 v108; // [rsp+3A0h] [rbp+E0h] BYREF
  __int64 v109; // [rsp+3A8h] [rbp+E8h]
  __int128 v110; // [rsp+3B0h] [rbp+F0h] BYREF
  PVOID P[2]; // [rsp+3C0h] [rbp+100h] BYREF
  PVOID v112[2]; // [rsp+3D0h] [rbp+110h] BYREF
  __int64 v113; // [rsp+3E0h] [rbp+120h] BYREF
  __int64 v114; // [rsp+3E8h] [rbp+128h] BYREF
  __int64 v115; // [rsp+3F0h] [rbp+130h] BYREF
  _WORD *v116; // [rsp+3F8h] [rbp+138h] BYREF
  unsigned __int16 *v117; // [rsp+400h] [rbp+140h] BYREF
  __int128 v118; // [rsp+408h] [rbp+148h] BYREF
  int v119; // [rsp+418h] [rbp+158h]
  __int16 *v120; // [rsp+420h] [rbp+160h]
  __int16 v121; // [rsp+428h] [rbp+168h]
  __int16 *v122; // [rsp+430h] [rbp+170h]
  __int16 v123; // [rsp+438h] [rbp+178h]
  int *v124; // [rsp+440h] [rbp+180h] BYREF
  __int16 v125; // [rsp+448h] [rbp+188h]
  __int64 v126; // [rsp+450h] [rbp+190h] BYREF
  int v127; // [rsp+458h] [rbp+198h]
  const wchar_t *v128; // [rsp+460h] [rbp+1A0h]
  PVOID *v129; // [rsp+468h] [rbp+1A8h]
  int v130; // [rsp+470h] [rbp+1B0h]
  __int64 v131; // [rsp+478h] [rbp+1B8h]
  int v132; // [rsp+480h] [rbp+1C0h]
  __int64 v133; // [rsp+488h] [rbp+1C8h]
  int v134; // [rsp+490h] [rbp+1D0h]
  __int128 v135; // [rsp+498h] [rbp+1D8h]
  __int128 v136; // [rsp+4A8h] [rbp+1E8h]
  __int64 v137; // [rsp+4B8h] [rbp+1F8h]
  GUID ActivityId; // [rsp+4C0h] [rbp+200h] BYREF

  v57 = *(_DWORD *)(a1 + 2820);
  v89 = *(_QWORD *)(a1 + 896);
  v4 = *(_DWORD *)(a1 + 288);
  v5 = (*(_DWORD *)(a1 + 436) & 0x20000) == 0;
  v109 = a3;
  v54 = a2;
  v6 = 1;
  v56 = v4;
  if ( !v5 || (v7 = *(_DWORD *)(a1 + 2792) >> 1, v53 = 0, (v7 & 1) != 0) )
    v53 = 1;
  v118 = 0LL;
  v119 = 0;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, &v55);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v118);
  if ( *(_QWORD *)(a1 + 2928) || *(_QWORD *)(a1 + 2920) )
  {
    v8 = *(_QWORD *)(a1 + 2920);
    v96 = 0LL;
    v95 = 0LL;
    LOWORD(v9) = 0;
    v94 = 0LL;
    v10 = 0;
    v44 = 0;
    LOWORD(v11) = 0;
    v43 = 0;
    v12 = 0LL;
    LOBYTE(v42) = 0;
    v13 = 0;
    *(_OWORD *)P = 0LL;
    v110 = 0LL;
    if ( v8 )
    {
      v14 = *(_DWORD *)(v8 + 24);
      v44 = *(_WORD *)(a1 + 1672);
      v43 = *(_WORD *)(a1 + 1676);
      v13 = (v14 & 0x20) != 0;
    }
    if ( (*(_DWORD *)(a1 + 436) & 0x100) != 0 )
    {
      v92 = 0LL;
      if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)a1, 0, (struct DXGADAPTER_REFERENCE *)&v92) >= 0 )
        v12 = *(unsigned __int16 **)(v92 + 404);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)&v92, 0LL);
    }
    v15 = *(_QWORD *)(a1 + 2928);
    if ( !v15 )
      goto LABEL_17;
    if ( !*(_BYTE *)(a1 + 209) )
    {
      v91 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *, unsigned __int16 **))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 64LL))(
        *(_QWORD *)(v15 + 768),
        0LL,
        &v91,
        &v91,
        &v91,
        &v96,
        &v95,
        &v94);
    }
    v16 = *(_QWORD *)(a1 + 2928);
    LOBYTE(v42) = *(_BYTE *)(v16 + 1880);
    v17 = *(_DWORD **)(a1 + 2824);
    v9 = (*v17 >> 15) & 3;
    v11 = (*v17 >> 18) & 3;
    v10 = (*v17 & 0x100000) != 0;
    if ( v16 )
    {
      v76 = (unsigned __int16 *)(v16 + 320);
      v77 = (unsigned __int16 *)(v16 + 336);
      v84 = (PVOID *)(v16 + 352);
      v85 = (unsigned __int16 *)(v16 + 368);
      v18 = (unsigned __int16 *)(v16 + 512);
    }
    else
    {
LABEL_17:
      v76 = (unsigned __int16 *)&v110;
      v77 = (unsigned __int16 *)&v110;
      v84 = (PVOID *)&v110;
      v85 = (unsigned __int16 *)&v110;
      v18 = (unsigned __int16 *)&v110;
    }
    v19 = *(_QWORD *)(a1 + 216);
    v59 = v18;
    LODWORD(v91) = DpiGetDriverFullPath(v19, P);
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    DxgkCountInterfaceFunctions(a1 + 280, &v86, &v87, &v88);
    v90 = **(_DWORD **)(a1 + 2824);
    *(_OWORD *)v112 = 0LL;
    Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage();
    v127 = 292;
    v126 = 0LL;
    v130 = 16777217;
    v128 = L"DxDbVersion";
    v131 = 0LL;
    v129 = v112;
    v132 = 0;
    v137 = 0LL;
    v133 = 0LL;
    v134 = 0;
    v135 = 0LL;
    v136 = 0LL;
    v58 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\DirectX", &v126, 0LL, 0LL);
    ++DXGADAPTER::sTelemetrySeqId;
    if ( (unsigned int)Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage() )
    {
      LOBYTE(v45) = 0;
      if ( (unsigned int)dword_1C013A9C0 > 5 && tlgKeywordOn((__int64)&dword_1C013A9C0, 0x800000000004LL) )
      {
        v34 = (*(unsigned __int8 *)(a1 + 2891) >> 1) & 1;
        v82 = v33;
        v83 = v34;
        v120 = &v45;
        v122 = &v45;
        v108 = (__int64)v112;
        v79 = v58;
        v124 = &v90;
        v125 = 4;
        v106 = v59;
        v105 = v88;
        v104 = v87;
        v103 = v86;
        v78 = *(_DWORD *)(a1 + 2096);
        v102 = v85;
        v101 = v84;
        v100 = v77;
        v99 = v76;
        v98 = P;
        v52[0] = *(_WORD *)(a1 + 1680);
        v51 = v43;
        v50 = v44;
        v97 = (PVOID *)v94;
        v113 = v95;
        v114 = v96;
        LODWORD(v77) = v54;
        v49 = *(_WORD *)(a1 + 2748);
        v48 = *(_WORD *)(a1 + 2744);
        v115 = *(_QWORD *)(a1 + 404);
        v47 = v57;
        v44 = *(_WORD *)(a1 + 1872);
        LODWORD(v76) = v53;
        v81 = v33;
        v74 = (v55 >> 1) & 1;
        v121 = v33;
        v73 = v55 & 1;
        v123 = v33;
        LOBYTE(v46) = v33;
        v80 = v33;
        v107 = v12;
        v75 = v55;
        v72 = (v55 >> 2) & 1;
        v35 = *(_DWORD *)(a1 + 436);
        v71 = (v55 >> 3) & 1;
        v43 = v11;
        v70 = (v35 >> 7) & 1;
        v36 = v33;
        LOBYTE(v36) = v56 > 1;
        LOWORD(v54) = v9;
        v69 = v36;
        v68 = v10;
        v67 = v13;
        v66 = (unsigned __int8)v42;
        v65 = *(_WORD *)(a1 + 2286) & 1;
        v37 = v33;
        LOBYTE(v37) = v89 != v33;
        v64 = v37;
        v63 = *(unsigned __int8 *)(a1 + 2764);
        v62 = *(unsigned __int8 *)(a1 + 2759);
        v38 = v33;
        LOBYTE(v38) = BYTE8(v118) == (unsigned __int8)v33;
        v61 = v38;
        v39 = (v35 >> 6) & 1;
        v56 = *(_DWORD *)(a1 + 1832);
        v89 = *(_QWORD *)(a1 + 1824);
        v116 = *(_WORD **)(a1 + 1816);
        v42 = *(_WORD *)(a1 + 428);
        v55 = *(_DWORD *)(a1 + 424);
        v57 = *(_DWORD *)(a1 + 420);
        LODWORD(v84) = *(_DWORD *)(a1 + 416);
        LODWORD(v85) = *(_DWORD *)(a1 + 412);
        v117 = *(unsigned __int16 **)(a1 + 1744);
        v60 = v39;
        if ( !v32 || (v5 = tlgKeywordOn(v31, 0x200000000000LL) == 0, v40 = 1, v5) )
          v40 = v33;
        LODWORD(v86) = v40;
        if ( !v32 || !tlgKeywordOn(v31, 0x400000000000LL) )
          v6 = v33;
        LODWORD(v88) = DXGADAPTER::sTelemetrySeqId;
        LODWORD(v87) = v6;
        LODWORD(v59) = MEMORY[0xFFFFF780000002C4];
        LOWORD(v53) = 20;
        v92 = 2048LL;
        p_ActivityId = (GUID *)(v109 + 8);
        if ( !v109 )
          p_ActivityId = &ActivityId;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperArray<1>,_tlgWrapperArray<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v39,
          byte_1C009D228,
          p_ActivityId,
          v31,
          (__int64)&v92,
          (__int64)&v53,
          (__int64)&v59,
          (__int64)&v88,
          (__int64)&v87,
          (__int64)&v86,
          &v117,
          (__int64)&v85,
          (__int64)&v84,
          (__int64)&v57,
          (__int64)&v55,
          (__int64)&v42,
          &v116,
          (__int64)&v89,
          (__int64)&v56,
          (__int64)&v60,
          (__int64)&v61,
          (__int64)&v62,
          (__int64)&v63,
          (__int64)&v64,
          (__int64)&v65,
          (__int64)&v66,
          (__int64)&v67,
          (__int64)&v54,
          (__int64)&v68,
          (__int64)&v43,
          (__int64)&v69,
          (__int64)&v70,
          (__int64)&v71,
          (__int64)&v72,
          (__int64)&v73,
          (__int64)&v74,
          (__int64)&v75,
          (__int64)&v76,
          (__int64)&v44,
          (__int64)&v47,
          (__int64)&v115,
          (__int64)&v48,
          (__int64)&v49,
          (__int64)&v77,
          (__int64)&v114,
          (__int64)&v113,
          (__int64)&v97,
          (__int64)&v50,
          (__int64)&v51,
          (__int64)v52,
          (unsigned __int16 **)&v98,
          &v99,
          &v100,
          (unsigned __int16 **)&v101,
          &v102,
          (__int64)&v78,
          (__int64)&v103,
          (__int64)&v104,
          (__int64)&v105,
          &v106,
          (__int64 *)&v124,
          (__int64)&v107,
          (__int64)&v79);
      }
    }
    else if ( (unsigned int)dword_1C013A9C0 > 5 && tlgKeywordOn((__int64)&dword_1C013A9C0, 0x800000000004LL) )
    {
      v98 = (PVOID *)v12;
      v97 = v112;
      v60 = v58;
      v92 = (__int64)&v90;
      v93 = v22 + 4;
      v61 = *(_DWORD *)(a1 + 2096);
      v99 = v77;
      v100 = v76;
      v101 = P;
      v46 = *(_WORD *)(a1 + 1680);
      v102 = v94;
      v103 = v95;
      v104 = v96;
      v45 = *(_WORD *)(a1 + 2748);
      v47 = *(_WORD *)(a1 + 2744);
      v105 = *(_QWORD *)(a1 + 404);
      v48 = v57;
      v49 = *(_WORD *)(a1 + 1872);
      v57 = v53;
      v53 = (v55 >> 1) & 1;
      v50 = v11;
      v62 = v55 & 1;
      v64 = (v55 >> 3) & 1;
      v63 = (v55 >> 2) & 1;
      v23 = *(_DWORD *)(a1 + 436);
      v65 = (v23 >> 7) & 1;
      v24 = v22;
      LOBYTE(v24) = v56 > 1;
      v56 = v24;
      v66 = v10;
      v67 = v13;
      v68 = (unsigned __int8)v42;
      v25 = *(_WORD *)(a1 + 2286) & 1;
      v51 = v9;
      v69 = v25;
      v26 = v22;
      LOBYTE(v26) = v89 != v22;
      v70 = v26;
      v71 = *(unsigned __int8 *)(a1 + 2764);
      v72 = *(unsigned __int8 *)(a1 + 2759);
      v27 = v22;
      LOBYTE(v27) = BYTE8(v118) == (unsigned __int8)v22;
      v73 = v27;
      v28 = (v23 >> 6) & 1;
      v75 = *(_DWORD *)(a1 + 1832);
      v89 = *(_QWORD *)(a1 + 1824);
      v106 = *(_WORD **)(a1 + 1816);
      v42 = *(_WORD *)(a1 + 428);
      LODWORD(v76) = *(_DWORD *)(a1 + 424);
      LODWORD(v77) = *(_DWORD *)(a1 + 420);
      v78 = *(_DWORD *)(a1 + 416);
      v79 = *(_DWORD *)(a1 + 412);
      v107 = *(unsigned __int16 **)(a1 + 1744);
      v74 = v28;
      if ( !v21 || (v5 = tlgKeywordOn(v20, 0x200000000000LL) == 0, v29 = 1, v5) )
        v29 = v22;
      v80 = v29;
      if ( !v21 || !tlgKeywordOn(v20, 0x400000000000LL) )
        v6 = v22;
      v82 = DXGADAPTER::sTelemetrySeqId;
      v81 = v6;
      v83 = MEMORY[0xFFFFF780000002C4];
      v52[0] = 16;
      v108 = 2048LL;
      v30 = (GUID *)(v109 + 8);
      if ( !v109 )
        v30 = &ActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v28,
        byte_1C009D72D,
        v30,
        v20,
        (__int64)&v108,
        (__int64)v52,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        &v107,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v42,
        &v106,
        (__int64)&v89,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v51,
        (__int64)&v66,
        (__int64)&v50,
        (__int64)&v56,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v53,
        (__int64)&v55,
        (__int64)&v57,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v105,
        (__int64)&v47,
        (__int64)&v45,
        (__int64)&v54,
        (__int64)&v104,
        (__int64)&v103,
        (__int64)&v102,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v46,
        (unsigned __int16 **)&v101,
        &v100,
        &v99,
        (unsigned __int16 **)&v84,
        &v85,
        (__int64)&v61,
        (__int64)&v86,
        (__int64)&v87,
        (__int64)&v88,
        &v59,
        &v92,
        (__int64)&v98,
        (__int64)&v60);
    }
    if ( (int)v91 >= 0 )
      ExFreePoolWithTag(P[1], 0);
    Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage();
    if ( v58 >= 0 )
      ExFreePoolWithTag(v112[1], 0);
  }
}
