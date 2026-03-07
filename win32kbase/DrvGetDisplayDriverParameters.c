__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  DWORD *p_dmBitsPerPel; // r15
  unsigned int v7; // r11d
  DWORD *p_dmPelsWidth; // rsi
  DWORD *p_dmPelsHeight; // r14
  DWORD *p_dmDisplayFixedOutput; // rdi
  DWORD *p_dmDisplayFrequency; // rcx
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // rdx
  DWORD *v13; // r13
  PCWSTR *p_Name; // rcx
  __int64 v15; // r9
  wchar_t **v16; // r8
  const WCHAR *v17; // rax
  unsigned int v18; // edi
  WCHAR *RegistryHandleFromDeviceMap; // rsi
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // rax
  unsigned __int64 v25; // xmm0_8
  WORD dmDriverExtra; // cx
  _OWORD *v28; // rdx
  __int128 v29; // xmm0
  _OWORD *v30; // rdx
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-CCh]
  DWORD *v33; // [rsp+38h] [rbp-C8h]
  DWORD *v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  DWORD *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  DWORD *v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  DWORD *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  __int64 v60; // [rsp+140h] [rbp+40h]
  int v61; // [rsp+148h] [rbp+48h]
  __int64 v62; // [rsp+150h] [rbp+50h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  int v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  DWORD *p_dmPanningWidth; // [rsp+190h] [rbp+90h]
  int v71; // [rsp+198h] [rbp+98h]
  __int64 v72; // [rsp+1A0h] [rbp+A0h]
  int v73; // [rsp+1A8h] [rbp+A8h]
  __int64 v74; // [rsp+1B0h] [rbp+B0h]
  int v75; // [rsp+1B8h] [rbp+B8h]
  __int64 v76; // [rsp+1C0h] [rbp+C0h]
  DWORD *p_dmPanningHeight; // [rsp+1C8h] [rbp+C8h]
  int v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  int v80; // [rsp+1E0h] [rbp+E0h]
  __int64 v81; // [rsp+1E8h] [rbp+E8h]
  int v82; // [rsp+1F0h] [rbp+F0h]
  __int64 v83; // [rsp+1F8h] [rbp+F8h]
  DWORD *p_dmDisplayOrientation; // [rsp+200h] [rbp+100h]
  int v85; // [rsp+208h] [rbp+108h]
  __int64 v86; // [rsp+210h] [rbp+110h]
  int v87; // [rsp+218h] [rbp+118h]
  __int64 v88; // [rsp+220h] [rbp+120h]
  int v89; // [rsp+228h] [rbp+128h]
  __int64 v90; // [rsp+230h] [rbp+130h]
  DWORD *v91; // [rsp+238h] [rbp+138h]
  int v92; // [rsp+240h] [rbp+140h]
  __int64 v93; // [rsp+248h] [rbp+148h]
  int v94; // [rsp+250h] [rbp+150h]
  __int64 v95; // [rsp+258h] [rbp+158h]
  int v96; // [rsp+260h] [rbp+160h]
  __int64 v97; // [rsp+268h] [rbp+168h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+270h] [rbp+170h]
  int v99; // [rsp+278h] [rbp+178h]
  __int64 v100; // [rsp+280h] [rbp+180h]
  int v101; // [rsp+288h] [rbp+188h]
  __int64 v102; // [rsp+290h] [rbp+190h]
  int v103; // [rsp+298h] [rbp+198h]
  __int64 v104; // [rsp+2A0h] [rbp+1A0h]
  LONG *p_y; // [rsp+2A8h] [rbp+1A8h]
  int v106; // [rsp+2B0h] [rbp+1B0h]
  __int64 v107; // [rsp+2B8h] [rbp+1B8h]
  int v108; // [rsp+2C0h] [rbp+1C0h]
  __int64 v109; // [rsp+2C8h] [rbp+1C8h]
  int v110; // [rsp+2D0h] [rbp+1D0h]
  __int64 v111; // [rsp+2D8h] [rbp+1D8h]
  int *v112; // [rsp+2E0h] [rbp+1E0h]
  int v113; // [rsp+2E8h] [rbp+1E8h]
  __int64 v114; // [rsp+2F0h] [rbp+1F0h]
  int v115; // [rsp+2F8h] [rbp+1F8h]
  int (*v116)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+300h] [rbp+200h]
  int v117; // [rsp+308h] [rbp+208h]
  __int64 v118; // [rsp+310h] [rbp+210h]
  struct _devicemodeW *v119; // [rsp+318h] [rbp+218h]
  int v120; // [rsp+320h] [rbp+220h]
  int *v121; // [rsp+328h] [rbp+228h]
  int v122; // [rsp+330h] [rbp+230h]
  __int64 v123; // [rsp+338h] [rbp+238h]
  int v124; // [rsp+340h] [rbp+240h]
  __int128 v125; // [rsp+348h] [rbp+248h]
  __int128 v126; // [rsp+358h] [rbp+258h]
  __int64 v127; // [rsp+368h] [rbp+268h]

  v36 = a1;
  v37 = a4;
  v4 = a1;
  v32 = 0;
  v31 = 0;
  p_dmBitsPerPel = &a2->dmBitsPerPel;
  v35 = 0;
  v7 = 1;
  p_dmPelsWidth = &a2->dmPelsWidth;
  p_dmPelsHeight = &a2->dmPelsHeight;
  p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
    goto LABEL_21;
  }
  p_dmDisplayFrequency = &a2->dmDisplayFrequency;
  v33 = &a2->dmPelsHeight;
  p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
  v34 = p_dmDisplayFixedOutput;
  v13 = p_dmPelsWidth;
  if ( a4 )
  {
    *p_dmBitsPerPel = *(_DWORD *)(a4 + 168);
    *p_dmPelsWidth = *(_DWORD *)(a4 + 172);
    *p_dmPelsHeight = *(_DWORD *)(a4 + 176);
    *p_dmDisplayFrequency = *(_DWORD *)(a4 + 184);
    dmDriverExtra = a2->dmDriverExtra;
    p_dmDisplayFlags->dmDisplayFlags = *(DWORD *)(a4 + 180);
    a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
    a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
    a2->dmPosition.x = *(_DWORD *)(a4 + 76);
    a2->dmPosition.y = *(_DWORD *)(a4 + 80);
    a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
    *p_dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
    if ( dmDriverExtra >= *(_WORD *)(a4 + 70) )
      dmDriverExtra = *(_WORD *)(a4 + 70);
    a2->dmDriverExtra = dmDriverExtra;
    memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
    if ( (*(_DWORD *)(v37 + 72) & 0x20) != 0 )
      v31 = 1;
    goto LABEL_21;
  }
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v39 = 0LL;
  v41 = 0LL;
  p_dmPanningHeight = &a2->dmPanningHeight;
  p_dmDisplayOrientation = &a2->dmDisplayOrientation;
  p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
  QueryTable.EntryContext = p_dmBitsPerPel;
  v42 = p_dmPelsWidth;
  p_y = &a2->dmPosition.y;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 0x4000000;
  v40 = 288;
  v43 = 0x4000000;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 288;
  v48 = 0LL;
  v49 = p_dmPelsHeight;
  v50 = 0x4000000;
  v51 = 0LL;
  v52 = 0;
  v53 = 0LL;
  v54 = 288;
  v55 = 0LL;
  v56 = p_dmDisplayFrequency;
  v57 = 0x4000000;
  v58 = 0LL;
  v59 = 0;
  v60 = 0LL;
  v61 = 288;
  v62 = 0LL;
  v63 = p_dmDisplayFlags;
  v64 = 0x4000000;
  v65 = 0LL;
  v66 = 0;
  v67 = 0LL;
  v68 = 288;
  v69 = 0LL;
  p_dmPanningWidth = &a2->dmPanningWidth;
  v71 = 0x4000000;
  v72 = 0LL;
  v73 = 0;
  v74 = 0LL;
  v75 = 288;
  v76 = 0LL;
  v78 = 0x4000000;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 288;
  v83 = 0LL;
  v85 = 0x4000000;
  v86 = 0LL;
  v87 = 0;
  v88 = 0LL;
  v89 = 288;
  v90 = 0LL;
  v91 = p_dmDisplayFixedOutput;
  v92 = 0x4000000;
  v93 = 0LL;
  v94 = 0;
  v95 = 0LL;
  v96 = 288;
  v97 = 0LL;
  v99 = 0x4000000;
  v100 = 0LL;
  v101 = 0;
  v102 = 0LL;
  v103 = 288;
  v104 = 0LL;
  v106 = 0x4000000;
  v107 = 0LL;
  v112 = &v31;
  v108 = 0;
  v116 = DrvDriverExtraCallback;
  v121 = &v35;
  v109 = 0LL;
  v110 = 288;
  v111 = 0LL;
  v113 = 0x4000000;
  v114 = 0LL;
  v115 = 0;
  v117 = 0;
  v118 = 0LL;
  v119 = a2;
  v120 = 4;
  v122 = 0x10000;
  v123 = 0LL;
  v124 = 0;
  v125 = 0LL;
  v127 = 0LL;
  v126 = 0LL;
  if ( !a2->dmDriverExtra )
  {
    v116 = 0LL;
    v117 = 0;
    v118 = 0LL;
    a2->dmDriverExtra = 0;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu && (*(_DWORD *)(v4 + 160) & 8) != 0 )
  {
    v28 = *(_OWORD **)(v4 + 264);
    if ( v28 )
    {
      *(_OWORD *)a2->dmDeviceName = *v28;
      *(_OWORD *)&a2->dmDeviceName[8] = v28[1];
      *(_OWORD *)&a2->dmDeviceName[16] = v28[2];
      *(_OWORD *)&a2->dmDeviceName[24] = v28[3];
      *(_OWORD *)&a2->dmSpecVersion = v28[4];
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v28[5];
      *(_OWORD *)&a2->dmYResolution = v28[6];
      v29 = v28[7];
      v30 = v28 + 8;
      *(_OWORD *)&a2->dmFormName[5] = v29;
      *(_OWORD *)&a2->dmFormName[13] = *v30;
      *(_OWORD *)&a2->dmFormName[21] = v30[1];
      *(_OWORD *)&a2->dmFormName[29] = v30[2];
      *(_OWORD *)&a2->dmPelsHeight = v30[3];
      *(_OWORD *)&a2->dmICMIntent = v30[4];
      *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v30 + 10);
      a2->dmPanningHeight = *((_DWORD *)v30 + 22);
      memmove(&a2[1], (const void *)(*(_QWORD *)(v4 + 264) + 220LL), a2->dmDriverExtra);
      goto LABEL_20;
    }
  }
  p_Name = &QueryTable.Name;
  v15 = 13LL;
  v16 = off_1C0280520;
  do
  {
    v17 = *v16++;
    *p_Name = v17;
    p_Name += 7;
    --v15;
  }
  while ( v15 );
  v18 = 1;
  while ( 1 )
  {
    RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(v4, v7, 0LL, 0LL, 0);
    if ( !RegistryHandleFromDeviceMap )
    {
      v32 = -1073741823;
      goto LABEL_31;
    }
    v32 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    v20 = v32;
    ZwClose(RegistryHandleFromDeviceMap);
    if ( v20 >= 0 )
      break;
LABEL_31:
    v4 = v36;
    ++v18;
    v7 = 0;
    if ( v18 > 2 )
      return v32;
  }
  v22 = SGDGetSessionState(v21);
  p_dmPelsHeight = v33;
  if ( v31
    && !*p_dmBitsPerPel
    && !*v13
    && !*v33
    && !a2->dmDisplayFrequency
    && !a2->dmDisplayFlags
    && !*(_DWORD *)(*(_QWORD *)(v22 + 24) + 1232LL) )
  {
    DrvLogDisplayDriverEvent(6);
  }
  p_dmDisplayFixedOutput = v34;
LABEL_20:
  p_dmPelsWidth = v13;
LABEL_21:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v23 = 410910848;
  a2->dmFields = 410910848;
  if ( v31 )
  {
    v23 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( *p_dmDisplayFixedOutput )
  {
    v23 |= 0x20000000u;
    a2->dmFields = v23;
  }
  if ( (*(_DWORD *)(v36 + 160) & 0x2000000) != 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v25 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    *p_dmBitsPerPel = *((unsigned __int8 *)gpsi + 7003);
    a2->dmFields = v23;
    *p_dmPelsWidth = v25 - v24;
    *p_dmPelsHeight = HIDWORD(v25) - HIDWORD(v24);
  }
  return v32;
}
