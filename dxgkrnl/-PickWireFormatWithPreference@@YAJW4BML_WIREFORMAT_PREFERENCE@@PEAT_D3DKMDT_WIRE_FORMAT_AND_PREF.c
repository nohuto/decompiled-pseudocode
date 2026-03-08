/*
 * XREFs of ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C016CD10
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016D868 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall PickWireFormatWithPreference(int a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 v5; // rdi
  int *v8; // rbx
  unsigned int v9; // eax
  int v10; // ecx
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+54h] [rbp-ACh]
  int v14; // [rsp+58h] [rbp-A8h]
  char v15; // [rsp+5Ch] [rbp-A4h]
  int v16; // [rsp+60h] [rbp-A0h]
  char v17; // [rsp+64h] [rbp-9Ch]
  int v18; // [rsp+68h] [rbp-98h]
  char v19; // [rsp+6Ch] [rbp-94h]
  int v20; // [rsp+70h] [rbp-90h]
  char v21; // [rsp+74h] [rbp-8Ch]
  int v22; // [rsp+78h] [rbp-88h]
  char v23; // [rsp+7Ch] [rbp-84h]
  int v24; // [rsp+80h] [rbp-80h]
  char v25; // [rsp+84h] [rbp-7Ch]
  int v26; // [rsp+88h] [rbp-78h]
  char v27; // [rsp+8Ch] [rbp-74h]
  int v28; // [rsp+90h] [rbp-70h]
  char v29; // [rsp+94h] [rbp-6Ch]
  int v30; // [rsp+98h] [rbp-68h]
  char v31; // [rsp+9Ch] [rbp-64h]
  int v32; // [rsp+A0h] [rbp-60h]
  char v33; // [rsp+A4h] [rbp-5Ch]
  int v34; // [rsp+A8h] [rbp-58h]
  char v35; // [rsp+ACh] [rbp-54h]
  int v36; // [rsp+B0h] [rbp-50h]
  char v37; // [rsp+B4h] [rbp-4Ch]
  int v38; // [rsp+B8h] [rbp-48h]
  char v39; // [rsp+BCh] [rbp-44h]
  int v40; // [rsp+C0h] [rbp-40h]
  char v41; // [rsp+C4h] [rbp-3Ch]
  int v42; // [rsp+C8h] [rbp-38h]
  char v43; // [rsp+CCh] [rbp-34h]
  int v44; // [rsp+D0h] [rbp-30h]
  char v45; // [rsp+D4h] [rbp-2Ch]
  int v46; // [rsp+D8h] [rbp-28h]
  char v47; // [rsp+DCh] [rbp-24h]
  int v48; // [rsp+E0h] [rbp-20h] BYREF
  char v49; // [rsp+E4h] [rbp-1Ch]
  int v50; // [rsp+E8h] [rbp-18h]
  char v51; // [rsp+ECh] [rbp-14h]
  int v52; // [rsp+F0h] [rbp-10h]
  char v53; // [rsp+F4h] [rbp-Ch]
  int v54; // [rsp+F8h] [rbp-8h]
  char v55; // [rsp+FCh] [rbp-4h]
  int v56; // [rsp+100h] [rbp+0h]
  char v57; // [rsp+104h] [rbp+4h]
  int v58; // [rsp+108h] [rbp+8h]
  char v59; // [rsp+10Ch] [rbp+Ch]
  int v60; // [rsp+110h] [rbp+10h]
  char v61; // [rsp+114h] [rbp+14h]
  int v62; // [rsp+118h] [rbp+18h]
  char v63; // [rsp+11Ch] [rbp+1Ch]
  int v64; // [rsp+120h] [rbp+20h]
  char v65; // [rsp+124h] [rbp+24h]
  int v66; // [rsp+128h] [rbp+28h]
  char v67; // [rsp+12Ch] [rbp+2Ch]
  int v68; // [rsp+130h] [rbp+30h]
  char v69; // [rsp+134h] [rbp+34h]
  int v70; // [rsp+138h] [rbp+38h]
  char v71; // [rsp+13Ch] [rbp+3Ch]
  int v72; // [rsp+140h] [rbp+40h]
  char v73; // [rsp+144h] [rbp+44h]
  int v74; // [rsp+148h] [rbp+48h]
  char v75; // [rsp+14Ch] [rbp+4Ch]
  int v76; // [rsp+150h] [rbp+50h]
  char v77; // [rsp+154h] [rbp+54h]
  int v78; // [rsp+158h] [rbp+58h]
  char v79; // [rsp+15Ch] [rbp+5Ch]
  __int64 v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+170h] [rbp+70h] BYREF
  char v83; // [rsp+174h] [rbp+74h]
  int v84; // [rsp+178h] [rbp+78h]
  char v85; // [rsp+17Ch] [rbp+7Ch]
  int v86; // [rsp+180h] [rbp+80h]
  char v87; // [rsp+184h] [rbp+84h]
  int v88; // [rsp+188h] [rbp+88h]
  char v89; // [rsp+18Ch] [rbp+8Ch]
  int v90; // [rsp+190h] [rbp+90h]
  char v91; // [rsp+194h] [rbp+94h]
  int v92; // [rsp+198h] [rbp+98h]
  char v93; // [rsp+19Ch] [rbp+9Ch]
  int v94; // [rsp+1A0h] [rbp+A0h]
  char v95; // [rsp+1A4h] [rbp+A4h]
  int v96; // [rsp+1A8h] [rbp+A8h]
  char v97; // [rsp+1ACh] [rbp+ACh]
  int v98; // [rsp+1B0h] [rbp+B0h]
  char v99; // [rsp+1B4h] [rbp+B4h]
  int v100; // [rsp+1B8h] [rbp+B8h]
  char v101; // [rsp+1BCh] [rbp+BCh]
  int v102; // [rsp+1C0h] [rbp+C0h]
  char v103; // [rsp+1C4h] [rbp+C4h]
  int v104; // [rsp+1C8h] [rbp+C8h]
  char v105; // [rsp+1CCh] [rbp+CCh]
  int v106; // [rsp+1D0h] [rbp+D0h]
  char v107; // [rsp+1D4h] [rbp+D4h]
  int v108; // [rsp+1D8h] [rbp+D8h]
  char v109; // [rsp+1DCh] [rbp+DCh]
  int v110; // [rsp+1E0h] [rbp+E0h]
  char v111; // [rsp+1E4h] [rbp+E4h]
  int v112; // [rsp+1E8h] [rbp+E8h]
  char v113; // [rsp+1ECh] [rbp+ECh]
  __int64 v114; // [rsp+1F0h] [rbp+F0h]
  __int64 v115; // [rsp+1F8h] [rbp+F8h]

  v5 = a1;
  if ( *a4 )
  {
    WdLogSingleEntry1(1LL, 5509LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPickedWireFormat->Value == 0", 5509LL, 0LL, 0LL, 0LL, 0LL);
  }
  v13 = 0;
  v26 = 0x20000;
  v62 = 0x20000;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v45 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v83 = 0;
  v12 = 16;
  v14 = 32;
  v16 = 1024;
  v18 = 2048;
  v20 = 8;
  v21 = 1;
  v22 = 512;
  v23 = 1;
  v24 = 0x10000;
  v28 = 0x400000;
  v30 = 0x800000;
  v32 = 8;
  v34 = 512;
  v36 = 0x8000;
  v38 = 0x200000;
  v40 = 4;
  v42 = 256;
  v44 = 0x4000;
  v46 = 0x100000;
  v47 = 0;
  v48 = 16;
  v49 = 0;
  v50 = 32;
  v51 = 0;
  v52 = 8;
  v53 = 0;
  v54 = 1024;
  v55 = 0;
  v56 = 2048;
  v57 = 0;
  v58 = 512;
  v59 = 0;
  v60 = 0x10000;
  v61 = 0;
  v64 = 0x8000;
  v66 = 0x400000;
  v68 = 0x800000;
  v70 = 0x200000;
  v72 = 4;
  v74 = 256;
  v76 = 0x4000;
  v78 = 0x100000;
  v82 = 8;
  v84 = 512;
  v8 = 0LL;
  v88 = 0x200000;
  v85 = 0;
  v86 = 0x8000;
  v87 = 0;
  v89 = 0;
  v90 = 16;
  v91 = 0;
  v92 = 32;
  v93 = 0;
  v94 = 1024;
  v95 = 0;
  v96 = 2048;
  v97 = 0;
  v98 = 0x10000;
  v99 = 0;
  v100 = 0x20000;
  v101 = 0;
  v102 = 0x400000;
  v103 = 0;
  v104 = 0x800000;
  v105 = 0;
  v106 = 4;
  v107 = 0;
  v108 = 256;
  v109 = 0;
  v110 = 0x4000;
  v111 = 0;
  v112 = 0x100000;
  v113 = 0;
  v114 = 0LL;
  v115 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_12:
    v8 = &v12;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 != 1 )
  {
    if ( (_DWORD)v5 != 2 )
    {
      if ( (_DWORD)v5 == 3 )
      {
        v8 = &v48;
        goto LABEL_6;
      }
      if ( (_DWORD)v5 != 4 )
      {
        WdLogSingleEntry1(1LL, v5);
        goto LABEL_6;
      }
    }
    goto LABEL_12;
  }
  v8 = &v82;
LABEL_6:
  v9 = 0;
  while ( 1 )
  {
    v10 = *v8;
    if ( (*v8 & *a2) != 0 && (!*((_BYTE *)v8 + 4) || (v10 & *a3) != 0) )
      break;
    ++v9;
    v8 += 2;
    if ( v9 >= 0x12 )
      return 3221225473LL;
  }
  *a4 = v10;
  if ( ((v10 - 1) & v10) != 0 )
  {
    WdLogSingleEntry1(1LL, 5631LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pPickedWireFormat->Value & (pPickedWireFormat->Value - 1)) == 0",
      5631LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
