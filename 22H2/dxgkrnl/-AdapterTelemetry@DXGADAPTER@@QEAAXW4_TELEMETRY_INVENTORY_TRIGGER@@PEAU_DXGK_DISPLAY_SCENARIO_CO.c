/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0194BDC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B0F90 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U4@U_tlgWrapperBinary@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@35555555555555555443445333444666665336AEBU_tlgWrapperBinary@@3@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0007CAC (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x1C00230A4 (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0036660 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiGetDriverFullPath @ 0x1C01954EC (DpiGetDriverFullPath.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C02221A0 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, __int64 a3)
{
  bool v3; // zf
  int v5; // esi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // r10
  int v12; // r14d
  _DWORD *v13; // rax
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 i; // rcx
  int v21; // r15d
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned int v24; // r12d
  unsigned int v25; // r13d
  __int64 v26; // r9
  int v27; // r12d
  GUID *p_ActivityId; // r8
  unsigned __int8 v29; // [rsp+1D0h] [rbp-80h]
  __int16 v30; // [rsp+1D2h] [rbp-7Eh]
  __int16 v31; // [rsp+1D4h] [rbp-7Ch]
  unsigned int v32; // [rsp+1D8h] [rbp-78h]
  BOOL v33; // [rsp+1D8h] [rbp-78h]
  __int16 v34; // [rsp+1DCh] [rbp-74h]
  __int16 v35; // [rsp+1DEh] [rbp-72h]
  __int16 v36; // [rsp+1E0h] [rbp-70h]
  __int16 v37; // [rsp+1E2h] [rbp-6Eh]
  __int16 v38; // [rsp+1E4h] [rbp-6Ch]
  __int16 v39; // [rsp+1E6h] [rbp-6Ah] BYREF
  __int16 v40; // [rsp+1E8h] [rbp-68h] BYREF
  __int16 v41; // [rsp+1EAh] [rbp-66h] BYREF
  __int16 v42; // [rsp+1ECh] [rbp-64h] BYREF
  __int16 v43; // [rsp+1EEh] [rbp-62h] BYREF
  __int16 v44; // [rsp+1F0h] [rbp-60h] BYREF
  __int16 v45; // [rsp+1F2h] [rbp-5Eh] BYREF
  __int16 v46; // [rsp+1F4h] [rbp-5Ch] BYREF
  __int16 v47; // [rsp+1F6h] [rbp-5Ah] BYREF
  int v48; // [rsp+1F8h] [rbp-58h]
  unsigned int v49; // [rsp+1FCh] [rbp-54h] BYREF
  int v50; // [rsp+200h] [rbp-50h] BYREF
  int v51; // [rsp+204h] [rbp-4Ch]
  int v52; // [rsp+208h] [rbp-48h]
  int v53; // [rsp+20Ch] [rbp-44h]
  int v54; // [rsp+210h] [rbp-40h]
  unsigned int v55; // [rsp+214h] [rbp-3Ch]
  int v56; // [rsp+218h] [rbp-38h]
  BOOL v57; // [rsp+21Ch] [rbp-34h]
  BOOL v58; // [rsp+220h] [rbp-30h]
  int v59; // [rsp+224h] [rbp-2Ch]
  int v60; // [rsp+228h] [rbp-28h]
  __int64 v61; // [rsp+230h] [rbp-20h]
  int v62; // [rsp+238h] [rbp-18h] BYREF
  int v63; // [rsp+23Ch] [rbp-14h] BYREF
  int v64; // [rsp+240h] [rbp-10h] BYREF
  unsigned int v65; // [rsp+244h] [rbp-Ch] BYREF
  unsigned int v66; // [rsp+248h] [rbp-8h] BYREF
  int v67; // [rsp+24Ch] [rbp-4h] BYREF
  unsigned int v68; // [rsp+250h] [rbp+0h] BYREF
  int v69; // [rsp+254h] [rbp+4h] BYREF
  int v70; // [rsp+258h] [rbp+8h] BYREF
  BOOL v71; // [rsp+25Ch] [rbp+Ch] BYREF
  int v72; // [rsp+260h] [rbp+10h] BYREF
  int v73; // [rsp+264h] [rbp+14h] BYREF
  BOOL v74; // [rsp+268h] [rbp+18h] BYREF
  int v75; // [rsp+26Ch] [rbp+1Ch] BYREF
  int v76; // [rsp+270h] [rbp+20h] BYREF
  int v77; // [rsp+274h] [rbp+24h] BYREF
  int v78; // [rsp+278h] [rbp+28h] BYREF
  int v79; // [rsp+27Ch] [rbp+2Ch] BYREF
  int v80; // [rsp+280h] [rbp+30h] BYREF
  int v81; // [rsp+284h] [rbp+34h] BYREF
  int v82; // [rsp+288h] [rbp+38h] BYREF
  int v83; // [rsp+28Ch] [rbp+3Ch] BYREF
  BOOL v84; // [rsp+290h] [rbp+40h] BYREF
  int v85; // [rsp+294h] [rbp+44h] BYREF
  volatile unsigned int v86; // [rsp+298h] [rbp+48h] BYREF
  int v87; // [rsp+29Ch] [rbp+4Ch] BYREF
  int DriverFullPath; // [rsp+2A0h] [rbp+50h]
  __int64 v89; // [rsp+2A8h] [rbp+58h] BYREF
  unsigned __int16 *v90; // [rsp+2B0h] [rbp+60h]
  unsigned __int16 *v91; // [rsp+2B8h] [rbp+68h]
  unsigned __int16 *v92; // [rsp+2C0h] [rbp+70h]
  unsigned __int16 *v93; // [rsp+2C8h] [rbp+78h]
  unsigned __int16 *v94; // [rsp+2D0h] [rbp+80h]
  __int64 v95; // [rsp+2D8h] [rbp+88h] BYREF
  __int64 v96; // [rsp+2E0h] [rbp+90h] BYREF
  __int64 v97; // [rsp+2E8h] [rbp+98h] BYREF
  __int128 v98; // [rsp+2F0h] [rbp+A0h] BYREF
  __int64 v99; // [rsp+300h] [rbp+B0h]
  __int64 v100; // [rsp+308h] [rbp+B8h] BYREF
  unsigned __int16 *v101; // [rsp+310h] [rbp+C0h] BYREF
  __int64 v102; // [rsp+318h] [rbp+C8h] BYREF
  __int64 v103; // [rsp+320h] [rbp+D0h] BYREF
  unsigned __int16 *v104; // [rsp+328h] [rbp+D8h] BYREF
  unsigned __int16 *v105; // [rsp+330h] [rbp+E0h] BYREF
  unsigned __int16 *v106; // [rsp+338h] [rbp+E8h] BYREF
  unsigned __int16 *v107; // [rsp+340h] [rbp+F0h] BYREF
  PVOID *v108; // [rsp+348h] [rbp+F8h] BYREF
  __int64 v109; // [rsp+350h] [rbp+100h] BYREF
  __int64 v110; // [rsp+358h] [rbp+108h] BYREF
  __int64 v111; // [rsp+360h] [rbp+110h] BYREF
  __int64 v112; // [rsp+368h] [rbp+118h] BYREF
  __int64 v113; // [rsp+370h] [rbp+120h] BYREF
  void *v114; // [rsp+378h] [rbp+128h] BYREF
  unsigned __int16 *v115; // [rsp+380h] [rbp+130h] BYREF
  __int64 v116; // [rsp+388h] [rbp+138h] BYREF
  __int64 v117; // [rsp+390h] [rbp+140h]
  DXGADAPTER *v118[2]; // [rsp+398h] [rbp+148h] BYREF
  PVOID P[2]; // [rsp+3A8h] [rbp+158h] BYREF
  __int128 v120; // [rsp+3B8h] [rbp+168h] BYREF
  int v121; // [rsp+3C8h] [rbp+178h]
  int *v122; // [rsp+3D0h] [rbp+180h] BYREF
  __int16 v123; // [rsp+3D8h] [rbp+188h]
  GUID ActivityId; // [rsp+3E0h] [rbp+190h] BYREF

  v3 = (*(_DWORD *)(a1 + 348) & 0x20000) == 0;
  v53 = *(_DWORD *)(a1 + 2596);
  v61 = *(_QWORD *)(a1 + 808);
  v5 = 1;
  v32 = *(_DWORD *)(a1 + 280);
  v117 = a3;
  v52 = a2;
  if ( !v3 || (v6 = *(_DWORD *)(a1 + 2568) >> 1, v48 = 0, (v6 & 1) != 0) )
    v48 = 1;
  v121 = 0;
  v120 = 0LL;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v49);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v120);
  if ( *(_QWORD *)(a1 + 2704) || *(_QWORD *)(a1 + 2696) )
  {
    v7 = *(_QWORD *)(a1 + 2696);
    v97 = 0LL;
    v96 = 0LL;
    v8 = 0LL;
    v95 = 0LL;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    *(_OWORD *)P = 0LL;
    v98 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v30 = *(_WORD *)(v9 + 1452);
      v31 = *(_WORD *)(v9 + 1448);
    }
    if ( DXGADAPTER::IsIndirectDisplayDevice((DXGADAPTER *)a1) )
    {
      v118[0] = 0LL;
      if ( DxgkpGetIndirectDisplayPairedAdapter(v10, 0, (struct DXGADAPTER_REFERENCE *)v118) >= 0 )
        v8 = *(_QWORD *)((char *)v118[0] + 316);
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v118);
      v11 = *(_QWORD *)(a1 + 2704);
    }
    v12 = 0;
    if ( v11 )
    {
      if ( !*(_BYTE *)(a1 + 209) )
      {
        v89 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v11 + 640) + 8LL) + 80LL))(
          *(_QWORD *)(v11 + 648),
          0LL,
          &v89,
          &v89,
          &v89,
          &v97,
          &v96,
          &v95);
        v11 = *(_QWORD *)(a1 + 2704);
      }
      v29 = *(_BYTE *)(v11 + 1649);
      v13 = *(_DWORD **)(a1 + 2600);
      v94 = (unsigned __int16 *)(v11 + 312);
      v12 = (*v13 >> 15) & 1;
    }
    else
    {
      v94 = (unsigned __int16 *)&v98;
    }
    v14 = (unsigned __int16 *)(v11 + 328);
    if ( !v11 )
      v14 = (unsigned __int16 *)&v98;
    v93 = v14;
    v15 = (unsigned __int16 *)(v11 + 344);
    if ( !v11 )
      v15 = (unsigned __int16 *)&v98;
    v92 = v15;
    v16 = (unsigned __int16 *)(v11 + 360);
    if ( !v11 )
      v16 = (unsigned __int16 *)&v98;
    v91 = v16;
    if ( v11 )
      v90 = (unsigned __int16 *)(v11 + 440);
    else
      v90 = (unsigned __int16 *)&v98;
    DriverFullPath = DpiGetDriverFullPath(*(_QWORD *)(a1 + 216), P);
    v17 = (_QWORD *)(a1 + 360);
    v18 = 0LL;
    v19 = 0LL;
    for ( i = 0LL; i < 0x7E; ++i )
    {
      if ( *v17 )
      {
        if ( i >= 0x40 )
          v19 |= 1LL << ((unsigned __int8)i - 64);
        else
          v18 |= 1LL << i;
      }
      ++v17;
    }
    v21 = dword_1C00B1A58;
    v50 = **(_DWORD **)(a1 + 2600);
    ++DXGADAPTER::sTelemetrySeqId;
    if ( (unsigned int)dword_1C00B1A58 > 5 && tlgKeywordOn((__int64)&dword_1C00B1A58, 0x800000000004LL) )
    {
      v24 = *(_DWORD *)(a1 + 348);
      v51 = *(_DWORD *)(a1 + 1872);
      v34 = *(_WORD *)(a1 + 1456);
      v35 = *(_WORD *)(a1 + 2524);
      v36 = *(_WORD *)(a1 + 2520);
      v99 = *(_QWORD *)(a1 + 316);
      v37 = *(_WORD *)(a1 + 1648);
      v54 = v49 & 1;
      v25 = (v49 >> 1) & 1;
      v26 = (v49 >> 3) & 1;
      v55 = (v49 >> 2) & 1;
      v56 = (v24 >> 7) & 1;
      v57 = v32 > 1;
      v58 = v61 != 0;
      v59 = *(unsigned __int8 *)(a1 + 2540);
      v60 = *(unsigned __int8 *)(a1 + 2535);
      v27 = (v24 >> 6) & 1;
      LODWORD(v61) = BYTE8(v120) == 0;
      v38 = *(_WORD *)(a1 + 340);
      v33 = v21 && tlgKeywordOn((__int64)&dword_1C00B1A58, 0x200000000000LL);
      if ( !v21 || !tlgKeywordOn((__int64)&dword_1C00B1A58, 0x400000000000LL) )
        v5 = 0;
      LODWORD(p_ActivityId) = v117 + 8;
      if ( !v117 )
        p_ActivityId = &ActivityId;
      v100 = v8;
      v122 = &v50;
      v123 = 4;
      v101 = v90;
      v62 = v51;
      v104 = v91;
      v105 = v92;
      v106 = v93;
      v107 = v94;
      v108 = P;
      v39 = v34;
      v40 = v30;
      v41 = v31;
      v109 = v95;
      v110 = v96;
      v111 = v97;
      v63 = v52;
      v42 = v35;
      v43 = v36;
      v112 = v99;
      v44 = v53;
      v45 = v37;
      v64 = v48;
      v65 = v49;
      v67 = v54;
      v68 = v55;
      v70 = v56;
      v71 = v57;
      v73 = v29;
      v74 = v58;
      v75 = v59;
      v76 = v60;
      v77 = v61;
      v79 = *(_DWORD *)(a1 + 1608);
      v113 = *(_QWORD *)(a1 + 1600);
      v114 = *(void **)(a1 + 1592);
      v46 = v38;
      v80 = *(_DWORD *)(a1 + 336);
      v102 = v23;
      v103 = v22;
      v66 = v25;
      v69 = v26;
      v72 = v12;
      v78 = v27;
      v81 = *(_DWORD *)(a1 + 332);
      v82 = *(_DWORD *)(a1 + 328);
      v83 = *(_DWORD *)(a1 + 324);
      v115 = *(unsigned __int16 **)(a1 + 1520);
      v84 = v33;
      v47 = 11;
      v85 = v5;
      v86 = DXGADAPTER::sTelemetrySeqId;
      v87 = MEMORY[0xFFFFF780000002C4];
      v116 = 2048LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>>(
        DXGADAPTER::sTelemetrySeqId,
        (int)&unk_1C007E91C,
        (int)p_ActivityId,
        v26,
        (__int64)&v116,
        (__int64)&v47,
        (__int64)&v87,
        (__int64)&v86,
        (__int64)&v85,
        (__int64)&v84,
        &v115,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v46,
        &v114,
        (__int64)&v113,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v112,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v63,
        (__int64)&v111,
        (__int64)&v110,
        (__int64)&v109,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (unsigned __int16 **)&v108,
        &v107,
        &v106,
        &v105,
        &v104,
        (__int64)&v62,
        (__int64)&v103,
        (__int64)&v102,
        &v101,
        (__int64 *)&v122,
        (__int64)&v100);
    }
    if ( DriverFullPath >= 0 )
      ExFreePoolWithTag(P[1], 0);
  }
}
