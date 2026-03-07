char EtwpTraceSystemInitialization()
{
  __int64 v0; // rax
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  REGHANDLE v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  char v9; // r9
  REGHANDLE v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  ULONGLONG v13; // rax
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+5Ch] [rbp-ACh] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+64h] [rbp-A4h] BYREF
  int v23; // [rsp+68h] [rbp-A0h] BYREF
  int v24; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v25; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+74h] [rbp-94h] BYREF
  LARGE_INTEGER v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 SystemTimePrecise; // [rsp+80h] [rbp-88h] BYREF
  __int128 v29; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h] BYREF
  int VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD VersionInformation_4[71]; // [rsp+ACh] [rbp-5Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *p_SystemTimePrecise; // [rsp+1D8h] [rbp+D0h]
  __int64 v35; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v36; // [rsp+1E8h] [rbp+E0h]
  __int64 v37; // [rsp+1F0h] [rbp+E8h]
  int *v38; // [rsp+1F8h] [rbp+F0h]
  __int64 v39; // [rsp+200h] [rbp+F8h]
  _DWORD *v40; // [rsp+208h] [rbp+100h]
  __int64 v41; // [rsp+210h] [rbp+108h]
  int *v42; // [rsp+218h] [rbp+110h]
  __int64 v43; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v44; // [rsp+228h] [rbp+120h]
  __int64 v45; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+238h] [rbp+130h] BYREF
  int *v47; // [rsp+258h] [rbp+150h]
  __int64 v48; // [rsp+260h] [rbp+158h]
  int *v49; // [rsp+268h] [rbp+160h]
  __int64 v50; // [rsp+270h] [rbp+168h]
  int *v51; // [rsp+278h] [rbp+170h]
  __int64 v52; // [rsp+280h] [rbp+178h]
  int *v53; // [rsp+288h] [rbp+180h]
  __int64 v54; // [rsp+290h] [rbp+188h]
  int *v55; // [rsp+298h] [rbp+190h]
  __int64 v56; // [rsp+2A0h] [rbp+198h]
  int *v57; // [rsp+2A8h] [rbp+1A0h]
  __int64 v58; // [rsp+2B0h] [rbp+1A8h]
  int *v59; // [rsp+2B8h] [rbp+1B0h]
  __int64 v60; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v61; // [rsp+2C8h] [rbp+1C0h]
  __int64 v62; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v63; // [rsp+2D8h] [rbp+1D0h]
  __int64 v64; // [rsp+2E0h] [rbp+1D8h]
  int *v65; // [rsp+2E8h] [rbp+1E0h]
  __int64 v66; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v68; // [rsp+318h] [rbp+210h]
  __int64 v69; // [rsp+320h] [rbp+218h]
  int *v70; // [rsp+328h] [rbp+220h]
  __int64 v71; // [rsp+330h] [rbp+228h]

  memset(VersionInformation_4, 0, 0x118uLL);
  v18 = NtBuildQfe;
  v19 = InitSafeBootMode;
  v30 = 0LL;
  VersionInformation = 284;
  LODWORD(v0) = RtlGetVersion((PRTL_OSVERSIONINFOW)&VersionInformation);
  if ( (int)v0 >= 0 )
  {
    v27 = KeBootTime;
    if ( (unsigned int)dword_140C06690 > 5 && tlgKeywordOn((__int64)&dword_140C06690, 0x800000000000LL) )
    {
      v20 = VersionInformation_4[0];
      *(_QWORD *)&v29 = v1;
      v47 = &v20;
      LOBYTE(v15) = v2 != 0;
      v21 = VersionInformation_4[1];
      v48 = 4LL;
      v49 = &v21;
      v22 = VersionInformation_4[2];
      v51 = &v22;
      v53 = &v23;
      v24 = v18;
      v55 = &v24;
      LOWORD(v16) = VersionInformation_4[68];
      v57 = &v16;
      v25 = v19;
      v59 = &v25;
      v61 = &v29;
      v17 = dword_140C6A7C8;
      v63 = &v17;
      v65 = &v15;
      v50 = 4LL;
      v52 = 4LL;
      v23 = 1;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 2LL;
      v60 = 4LL;
      v62 = 8LL;
      v64 = 4LL;
      v66 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C06690,
        (unsigned __int8 *)&word_140034646,
        0LL,
        0LL,
        0xCu,
        &v46);
    }
    LOBYTE(v0) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)v0 )
    {
      HviGetHardwareFeatures((__int64)&v30, v3, v4, v5);
      v29 = 0LL;
      LOBYTE(v0) = HviGetHypervisorFeatures(&v29);
      if ( (unsigned int)dword_140C06690 > 5 )
      {
        LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140C06690, 0x400000000000LL);
        if ( (_BYTE)v0 )
        {
          LOBYTE(v15) = v9;
          v17 = ((unsigned int)v30 >> 10) & 0xF;
          v69 = 4LL;
          v68 = &v17;
          v71 = 1LL;
          v70 = &v15;
          LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)&dword_140C06690,
                         (unsigned __int8 *)byte_140034611,
                         0LL,
                         0LL,
                         4u,
                         &v67);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)VersionInformation_4;
      v35 = 4LL;
      p_SystemTimePrecise = (__int64 *)&VersionInformation_4[1];
      v37 = 4LL;
      v36 = &VersionInformation_4[2];
      v39 = 4LL;
      v38 = &v18;
      v40 = &VersionInformation_4[68];
      v42 = &v19;
      v44 = &v27;
      v41 = 2LL;
      v43 = 4LL;
      v45 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      v6 = EtwKernelProvRegHandle;
      if ( EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData) )
      {
        *(_QWORD *)&UserData.Size = 264LL;
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        EtwWriteEx(v6, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      v7 = KeLoaderBlock_0;
      v0 = *(_QWORD *)(KeLoaderBlock_0 + 240);
      v8 = (_QWORD *)(v0 + 224);
      if ( (*(_DWORD *)(v0 + 132) & 0x100) != 0 || *v8 )
      {
        v10 = EtwKernelProvRegHandle;
        LOBYTE(v0) = EtwEventEnabled(EtwKernelProvRegHandle, &VsmPerformanceData);
        if ( (_BYTE)v0 )
        {
          UserData.Ptr = (ULONGLONG)v8;
          *(_QWORD *)&UserData.Size = 8LL;
          v11 = *(_QWORD *)(v7 + 240) + 3520LL;
          v35 = 64LL;
          p_SystemTimePrecise = (__int64 *)v11;
          v12 = *(_QWORD *)(v7 + 240);
          v37 = 8LL;
          v36 = (_DWORD *)(v12 + 3864);
          LOBYTE(v0) = EtwWriteEx(v10, &VsmPerformanceData, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
      if ( (qword_140C316F8 & 4) != 0 )
      {
        v26 = (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2648LL) >> 14) & 1;
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v13 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2944LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v13;
        p_SystemTimePrecise = &SystemTimePrecise;
        v35 = 8LL;
        v36 = (_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2936LL);
        v38 = &v26;
        v37 = 4LL;
        v39 = 4LL;
        LOBYTE(v0) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v0;
}
