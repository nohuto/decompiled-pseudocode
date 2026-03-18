/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C00188E0
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00179AC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C0017968 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00246E4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0080338 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

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
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rax
  unsigned __int64 v24; // xmm0_8
  WORD dmDriverExtra; // cx
  _OWORD *v27; // rdx
  __int128 v28; // xmm0
  _OWORD *v29; // rdx
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh]
  DWORD *v32; // [rsp+38h] [rbp-C8h]
  DWORD *v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  DWORD *v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  DWORD *v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  DWORD *v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  __int64 v57; // [rsp+130h] [rbp+30h]
  int v58; // [rsp+138h] [rbp+38h]
  __int64 v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  __int64 v61; // [rsp+150h] [rbp+50h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *v62; // [rsp+158h] [rbp+58h]
  int v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  int v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  DWORD *p_dmPanningWidth; // [rsp+190h] [rbp+90h]
  int v70; // [rsp+198h] [rbp+98h]
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  int v72; // [rsp+1A8h] [rbp+A8h]
  __int64 v73; // [rsp+1B0h] [rbp+B0h]
  int v74; // [rsp+1B8h] [rbp+B8h]
  __int64 v75; // [rsp+1C0h] [rbp+C0h]
  DWORD *p_dmPanningHeight; // [rsp+1C8h] [rbp+C8h]
  int v77; // [rsp+1D0h] [rbp+D0h]
  __int64 v78; // [rsp+1D8h] [rbp+D8h]
  int v79; // [rsp+1E0h] [rbp+E0h]
  __int64 v80; // [rsp+1E8h] [rbp+E8h]
  int v81; // [rsp+1F0h] [rbp+F0h]
  __int64 v82; // [rsp+1F8h] [rbp+F8h]
  DWORD *p_dmDisplayOrientation; // [rsp+200h] [rbp+100h]
  int v84; // [rsp+208h] [rbp+108h]
  __int64 v85; // [rsp+210h] [rbp+110h]
  int v86; // [rsp+218h] [rbp+118h]
  __int64 v87; // [rsp+220h] [rbp+120h]
  int v88; // [rsp+228h] [rbp+128h]
  __int64 v89; // [rsp+230h] [rbp+130h]
  DWORD *v90; // [rsp+238h] [rbp+138h]
  int v91; // [rsp+240h] [rbp+140h]
  __int64 v92; // [rsp+248h] [rbp+148h]
  int v93; // [rsp+250h] [rbp+150h]
  __int64 v94; // [rsp+258h] [rbp+158h]
  int v95; // [rsp+260h] [rbp+160h]
  __int64 v96; // [rsp+268h] [rbp+168h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+270h] [rbp+170h]
  int v98; // [rsp+278h] [rbp+178h]
  __int64 v99; // [rsp+280h] [rbp+180h]
  int v100; // [rsp+288h] [rbp+188h]
  __int64 v101; // [rsp+290h] [rbp+190h]
  int v102; // [rsp+298h] [rbp+198h]
  __int64 v103; // [rsp+2A0h] [rbp+1A0h]
  LONG *p_y; // [rsp+2A8h] [rbp+1A8h]
  int v105; // [rsp+2B0h] [rbp+1B0h]
  __int64 v106; // [rsp+2B8h] [rbp+1B8h]
  int v107; // [rsp+2C0h] [rbp+1C0h]
  __int64 v108; // [rsp+2C8h] [rbp+1C8h]
  int v109; // [rsp+2D0h] [rbp+1D0h]
  __int64 v110; // [rsp+2D8h] [rbp+1D8h]
  int *v111; // [rsp+2E0h] [rbp+1E0h]
  int v112; // [rsp+2E8h] [rbp+1E8h]
  __int64 v113; // [rsp+2F0h] [rbp+1F0h]
  int v114; // [rsp+2F8h] [rbp+1F8h]
  int (*v115)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+300h] [rbp+200h]
  int v116; // [rsp+308h] [rbp+208h]
  __int64 v117; // [rsp+310h] [rbp+210h]
  struct _devicemodeW *v118; // [rsp+318h] [rbp+218h]
  int v119; // [rsp+320h] [rbp+220h]
  int *v120; // [rsp+328h] [rbp+228h]
  int v121; // [rsp+330h] [rbp+230h]
  __int64 v122; // [rsp+338h] [rbp+238h]
  int v123; // [rsp+340h] [rbp+240h]
  __int128 v124; // [rsp+348h] [rbp+248h]
  __int128 v125; // [rsp+358h] [rbp+258h]
  __int64 v126; // [rsp+368h] [rbp+268h]

  v35 = a1;
  v36 = a4;
  v4 = a1;
  v31 = 0;
  v30 = 0;
  p_dmBitsPerPel = &a2->dmBitsPerPel;
  v34 = 0;
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
  v32 = &a2->dmPelsHeight;
  p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
  v33 = p_dmDisplayFixedOutput;
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
    if ( (*(_DWORD *)(v36 + 72) & 0x20) != 0 )
      v30 = 1;
    goto LABEL_21;
  }
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v38 = 0LL;
  v40 = 0LL;
  p_dmPanningHeight = &a2->dmPanningHeight;
  p_dmDisplayOrientation = &a2->dmDisplayOrientation;
  p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
  QueryTable.EntryContext = p_dmBitsPerPel;
  v41 = p_dmPelsWidth;
  p_y = &a2->dmPosition.y;
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 0x4000000;
  v39 = 288;
  v42 = 0x4000000;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v46 = 288;
  v47 = 0LL;
  v48 = p_dmPelsHeight;
  v49 = 0x4000000;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 288;
  v54 = 0LL;
  v55 = p_dmDisplayFrequency;
  v56 = 0x4000000;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 288;
  v61 = 0LL;
  v62 = p_dmDisplayFlags;
  v63 = 0x4000000;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v67 = 288;
  v68 = 0LL;
  p_dmPanningWidth = &a2->dmPanningWidth;
  v70 = 0x4000000;
  v71 = 0LL;
  v72 = 0;
  v73 = 0LL;
  v74 = 288;
  v75 = 0LL;
  v77 = 0x4000000;
  v78 = 0LL;
  v79 = 0;
  v80 = 0LL;
  v81 = 288;
  v82 = 0LL;
  v84 = 0x4000000;
  v85 = 0LL;
  v86 = 0;
  v87 = 0LL;
  v88 = 288;
  v89 = 0LL;
  v90 = p_dmDisplayFixedOutput;
  v91 = 0x4000000;
  v92 = 0LL;
  v93 = 0;
  v94 = 0LL;
  v95 = 288;
  v96 = 0LL;
  v98 = 0x4000000;
  v99 = 0LL;
  v100 = 0;
  v101 = 0LL;
  v102 = 288;
  v103 = 0LL;
  v105 = 0x4000000;
  v106 = 0LL;
  v111 = &v30;
  v107 = 0;
  v115 = DrvDriverExtraCallback;
  v120 = &v34;
  v108 = 0LL;
  v109 = 288;
  v110 = 0LL;
  v112 = 0x4000000;
  v113 = 0LL;
  v114 = 0;
  v116 = 0;
  v117 = 0LL;
  v118 = a2;
  v119 = 4;
  v121 = 0x10000;
  v122 = 0LL;
  v123 = 0;
  v124 = 0LL;
  v126 = 0LL;
  v125 = 0LL;
  if ( !a2->dmDriverExtra )
  {
    v115 = 0LL;
    v116 = 0;
    v117 = 0LL;
    a2->dmDriverExtra = 0;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu && (*(_DWORD *)(v4 + 160) & 8) != 0 )
  {
    v27 = *(_OWORD **)(v4 + 264);
    if ( v27 )
    {
      *(_OWORD *)a2->dmDeviceName = *v27;
      *(_OWORD *)&a2->dmDeviceName[8] = v27[1];
      *(_OWORD *)&a2->dmDeviceName[16] = v27[2];
      *(_OWORD *)&a2->dmDeviceName[24] = v27[3];
      *(_OWORD *)&a2->dmSpecVersion = v27[4];
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v27[5];
      *(_OWORD *)&a2->dmYResolution = v27[6];
      v28 = v27[7];
      v29 = v27 + 8;
      *(_OWORD *)&a2->dmFormName[5] = v28;
      *(_OWORD *)&a2->dmFormName[13] = *v29;
      *(_OWORD *)&a2->dmFormName[21] = v29[1];
      *(_OWORD *)&a2->dmFormName[29] = v29[2];
      *(_OWORD *)&a2->dmPelsHeight = v29[3];
      *(_OWORD *)&a2->dmICMIntent = v29[4];
      *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v29 + 10);
      a2->dmPanningHeight = *((_DWORD *)v29 + 22);
      memmove(&a2[1], (const void *)(*(_QWORD *)(v4 + 264) + 220LL), a2->dmDriverExtra);
      goto LABEL_20;
    }
  }
  p_Name = &QueryTable.Name;
  v15 = 13LL;
  v16 = off_1C02418B0;
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
    RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(v4, v7, 0LL, 0LL, 0, 0LL);
    if ( !RegistryHandleFromDeviceMap )
    {
      v31 = -1073741823;
      goto LABEL_31;
    }
    v31 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    v20 = v31;
    ZwClose(RegistryHandleFromDeviceMap);
    if ( v20 >= 0 )
      break;
LABEL_31:
    v4 = v35;
    ++v18;
    v7 = 0;
    if ( v18 > 2 )
      return v31;
  }
  v21 = SGDGetSessionState();
  p_dmPelsHeight = v32;
  if ( v30
    && !*p_dmBitsPerPel
    && !*v13
    && !*v32
    && !a2->dmDisplayFrequency
    && !a2->dmDisplayFlags
    && !*(_DWORD *)(*(_QWORD *)(v21 + 24) + 1232LL) )
  {
    DrvLogDisplayDriverEvent(6LL);
  }
  p_dmDisplayFixedOutput = v33;
LABEL_20:
  p_dmPelsWidth = v13;
LABEL_21:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v22 = 410910848;
  a2->dmFields = 410910848;
  if ( v30 )
  {
    v22 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( *p_dmDisplayFixedOutput )
  {
    v22 |= 0x20000000u;
    a2->dmFields = v22;
  }
  if ( (*(_DWORD *)(v35 + 160) & 0x2000000) != 0 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v24 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    *p_dmBitsPerPel = *((unsigned __int8 *)gpsi + 7003);
    a2->dmFields = v22;
    *p_dmPelsWidth = v24 - v23;
    *p_dmPelsHeight = HIDWORD(v24) - HIDWORD(v23);
  }
  return v31;
}
