__int64 __fastcall DrvWriteDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct _devicemodeW *const a4,
        int a5)
{
  __int64 result; // rax
  NTSTATUS v9; // edi
  char v10; // bl
  wchar_t **v11; // rdx
  PCWSTR *p_Name; // rcx
  __int64 v13; // r8
  const WCHAR *v14; // rax
  unsigned int v15; // r15d
  NTSTATUS v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  _devicemodeW v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[12]; // [rsp+120h] [rbp+20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+150h] [rbp+50h] BYREF
  __int64 v22; // [rsp+188h] [rbp+88h]
  int v23; // [rsp+190h] [rbp+90h]
  __int64 v24; // [rsp+198h] [rbp+98h]
  DWORD *p_dmPelsWidth; // [rsp+1A0h] [rbp+A0h]
  int v26; // [rsp+1A8h] [rbp+A8h]
  __int64 v27; // [rsp+1B0h] [rbp+B0h]
  int v28; // [rsp+1B8h] [rbp+B8h]
  __int64 v29; // [rsp+1C0h] [rbp+C0h]
  int v30; // [rsp+1C8h] [rbp+C8h]
  __int64 v31; // [rsp+1D0h] [rbp+D0h]
  DWORD *p_dmPelsHeight; // [rsp+1D8h] [rbp+D8h]
  int v33; // [rsp+1E0h] [rbp+E0h]
  __int64 v34; // [rsp+1E8h] [rbp+E8h]
  int v35; // [rsp+1F0h] [rbp+F0h]
  __int64 v36; // [rsp+1F8h] [rbp+F8h]
  int v37; // [rsp+200h] [rbp+100h]
  __int64 v38; // [rsp+208h] [rbp+108h]
  DWORD *p_dmDisplayFrequency; // [rsp+210h] [rbp+110h]
  int v40; // [rsp+218h] [rbp+118h]
  __int64 v41; // [rsp+220h] [rbp+120h]
  int v42; // [rsp+228h] [rbp+128h]
  __int64 v43; // [rsp+230h] [rbp+130h]
  int v44; // [rsp+238h] [rbp+138h]
  __int64 v45; // [rsp+240h] [rbp+140h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+248h] [rbp+148h]
  int v47; // [rsp+250h] [rbp+150h]
  __int64 v48; // [rsp+258h] [rbp+158h]
  int v49; // [rsp+260h] [rbp+160h]
  __int64 v50; // [rsp+268h] [rbp+168h]
  int v51; // [rsp+270h] [rbp+170h]
  __int64 v52; // [rsp+278h] [rbp+178h]
  DWORD *p_dmPanningWidth; // [rsp+280h] [rbp+180h]
  int v54; // [rsp+288h] [rbp+188h]
  __int64 v55; // [rsp+290h] [rbp+190h]
  int v56; // [rsp+298h] [rbp+198h]
  __int64 v57; // [rsp+2A0h] [rbp+1A0h]
  int v58; // [rsp+2A8h] [rbp+1A8h]
  __int64 v59; // [rsp+2B0h] [rbp+1B0h]
  DWORD *p_dmPanningHeight; // [rsp+2B8h] [rbp+1B8h]
  int v61; // [rsp+2C0h] [rbp+1C0h]
  __int64 v62; // [rsp+2C8h] [rbp+1C8h]
  int v63; // [rsp+2D0h] [rbp+1D0h]
  __int64 v64; // [rsp+2D8h] [rbp+1D8h]
  int v65; // [rsp+2E0h] [rbp+1E0h]
  __int64 v66; // [rsp+2E8h] [rbp+1E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+2F0h] [rbp+1F0h]
  int v68; // [rsp+2F8h] [rbp+1F8h]
  __int64 v69; // [rsp+300h] [rbp+200h]
  int v70; // [rsp+308h] [rbp+208h]
  __int64 v71; // [rsp+310h] [rbp+210h]
  int v72; // [rsp+318h] [rbp+218h]
  __int64 v73; // [rsp+320h] [rbp+220h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+328h] [rbp+228h]
  int v75; // [rsp+330h] [rbp+230h]
  __int64 v76; // [rsp+338h] [rbp+238h]
  int v77; // [rsp+340h] [rbp+240h]
  __int64 (__fastcall *v78)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+348h] [rbp+248h]
  int v79; // [rsp+350h] [rbp+250h]
  const wchar_t *v80; // [rsp+358h] [rbp+258h]
  _devicemodeW *v81; // [rsp+360h] [rbp+260h]
  int v82; // [rsp+368h] [rbp+268h]
  int *v83; // [rsp+370h] [rbp+270h]
  int v84; // [rsp+378h] [rbp+278h]
  __int64 v85; // [rsp+380h] [rbp+280h]
  int v86; // [rsp+388h] [rbp+288h]
  __int128 v87; // [rsp+390h] [rbp+290h]
  __int128 v88; // [rsp+3A0h] [rbp+2A0h]
  __int64 v89; // [rsp+3B0h] [rbp+2B0h]

  v17 = 11;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    return 0LL;
  result = DrvWriteAttachedSettings(0xFFFDu, a3, a4, a5, &v17);
  v9 = result;
  if ( !a5 )
  {
    if ( a4 )
    {
      v10 = 0;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        memset(&v19, 0, sizeof(v19));
        v18 = 0;
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &v19.dmBitsPerPel;
        p_dmPelsWidth = &v19.dmPelsWidth;
        p_dmPelsHeight = &v19.dmPelsHeight;
        p_dmDisplayFrequency = &v19.dmDisplayFrequency;
        p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&v19.dmDisplayFlags;
        p_dmPanningWidth = &v19.dmPanningWidth;
        p_dmPanningHeight = &v19.dmPanningHeight;
        p_dmDisplayOrientation = &v19.dmDisplayOrientation;
        p_dmDisplayFixedOutput = &v19.dmDisplayFixedOutput;
        v78 = DrvDriverExtraSizeCallback;
        QueryTable.Name = 0LL;
        QueryTable.DefaultType = 0x4000000;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v22 = 0LL;
        v23 = 288;
        v24 = 0LL;
        v26 = 0x4000000;
        v27 = 0LL;
        v28 = 0;
        v29 = 0LL;
        v30 = 288;
        v31 = 0LL;
        v33 = 0x4000000;
        v34 = 0LL;
        v35 = 0;
        v36 = 0LL;
        v37 = 288;
        v38 = 0LL;
        v40 = 0x4000000;
        v41 = 0LL;
        v42 = 0;
        v43 = 0LL;
        v44 = 288;
        v45 = 0LL;
        v47 = 0x4000000;
        v48 = 0LL;
        v49 = 0;
        v50 = 0LL;
        v51 = 288;
        v52 = 0LL;
        v54 = 0x4000000;
        v55 = 0LL;
        v56 = 0;
        v57 = 0LL;
        v58 = 288;
        v59 = 0LL;
        v61 = 0x4000000;
        v62 = 0LL;
        v63 = 0;
        v64 = 0LL;
        v65 = 288;
        v66 = 0LL;
        v68 = 0x4000000;
        v69 = 0LL;
        v70 = 0;
        v71 = 0LL;
        v72 = 288;
        v73 = 0LL;
        v75 = 0x4000000;
        v76 = 0LL;
        v77 = 0;
        v79 = 0;
        v82 = 4;
        v81 = &v19;
        v11 = off_1C0280520;
        v84 = 4;
        v83 = &v18;
        v85 = 0LL;
        v86 = 0;
        p_Name = &QueryTable.Name;
        v87 = 0LL;
        v88 = 0LL;
        v13 = 9LL;
        v89 = 0LL;
        do
        {
          v14 = *v11++;
          *p_Name = v14;
          p_Name += 7;
          --v13;
        }
        while ( v13 );
        v80 = L"DefaultSettings.DriverExtra";
        v9 = RtlQueryRegistryValues(0x40000000u, a3, &QueryTable, 0LL, 0LL);
        if ( v9 >= 0 && (v19.dmDriverExtra & 0xFFFB) != 0 && !AreEquivalentDevModes(a4, &v19) )
          v10 = 1;
      }
      v15 = 0;
      v20[0] = a4->dmBitsPerPel;
      v20[1] = a4->dmPelsWidth;
      v20[2] = a4->dmPelsHeight;
      v20[3] = a4->dmDisplayFrequency;
      v20[4] = a4->dmDisplayFlags;
      v20[5] = a4->dmPanningWidth;
      v20[6] = a4->dmPanningHeight;
      v20[7] = a4->dmDisplayOrientation;
      v20[8] = a4->dmDisplayFixedOutput;
      v20[9] = a4->dmPosition.x;
      v20[10] = a4->dmPosition.y;
      if ( v9 >= 0 )
      {
        while ( v15 < v17 )
        {
          v16 = RtlWriteRegistryValue(0x40000000u, a3, off_1C0280520[v15], 4u, &v20[v15], 4u);
          ++v15;
          v9 = v16;
          if ( v16 < 0 )
            return (unsigned int)v9;
        }
        if ( a4->dmDriverExtra )
        {
          return (unsigned int)RtlWriteRegistryValue(
                                 0x40000000u,
                                 a3,
                                 L"DefaultSettings.DriverExtra",
                                 3u,
                                 (char *)a4 + a4->dmSize,
                                 a4->dmDriverExtra);
        }
        else if ( v10 )
        {
          RtlDeleteRegistryValue(0x40000000u, a3, L"DefaultSettings.DriverExtra");
        }
      }
      return (unsigned int)v9;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
