/*
 * XREFs of EtwpTraceSystemInitialization @ 0x140A41CF8
 * Callers:
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 *     HviGetHypervisorFeatures @ 0x1403A9020 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AA5F0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     HviGetHardwareFeatures @ 0x1405BEEB0 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x14068F5D0 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  REGHANDLE v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r10
  char v9; // r9
  REGHANDLE v10; // rsi
  __int64 v11; // rax
  ULONGLONG v12; // rax
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+64h] [rbp-A4h] BYREF
  int v22; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER v25; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTimePrecise; // [rsp+80h] [rbp-88h] BYREF
  __int128 v27; // [rsp+88h] [rbp-80h] BYREF
  __int128 v28; // [rsp+98h] [rbp-70h] BYREF
  int VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD VersionInformation_4[71]; // [rsp+ACh] [rbp-5Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *p_SystemTimePrecise; // [rsp+1D8h] [rbp+D0h]
  __int64 v33; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v34; // [rsp+1E8h] [rbp+E0h]
  __int64 v35; // [rsp+1F0h] [rbp+E8h]
  int *v36; // [rsp+1F8h] [rbp+F0h]
  __int64 v37; // [rsp+200h] [rbp+F8h]
  _DWORD *v38; // [rsp+208h] [rbp+100h]
  __int64 v39; // [rsp+210h] [rbp+108h]
  int *v40; // [rsp+218h] [rbp+110h]
  __int64 v41; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v42; // [rsp+228h] [rbp+120h]
  __int64 v43; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+238h] [rbp+130h] BYREF
  int *v45; // [rsp+258h] [rbp+150h]
  __int64 v46; // [rsp+260h] [rbp+158h]
  int *v47; // [rsp+268h] [rbp+160h]
  __int64 v48; // [rsp+270h] [rbp+168h]
  int *v49; // [rsp+278h] [rbp+170h]
  __int64 v50; // [rsp+280h] [rbp+178h]
  int *v51; // [rsp+288h] [rbp+180h]
  __int64 v52; // [rsp+290h] [rbp+188h]
  int *v53; // [rsp+298h] [rbp+190h]
  __int64 v54; // [rsp+2A0h] [rbp+198h]
  int *v55; // [rsp+2A8h] [rbp+1A0h]
  __int64 v56; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v57; // [rsp+2B8h] [rbp+1B0h]
  __int64 v58; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v59; // [rsp+2C8h] [rbp+1C0h]
  __int64 v60; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v61; // [rsp+2D8h] [rbp+1D0h]
  __int64 v62; // [rsp+2E0h] [rbp+1D8h]
  int *v63; // [rsp+2E8h] [rbp+1E0h]
  __int64 v64; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int *v66; // [rsp+318h] [rbp+210h]
  __int64 v67; // [rsp+320h] [rbp+218h]
  int *v68; // [rsp+328h] [rbp+220h]
  __int64 v69; // [rsp+330h] [rbp+228h]

  memset(VersionInformation_4, 0, 0x118uLL);
  v17 = NtBuildQfe;
  v18 = InitSafeBootMode;
  v28 = 0LL;
  VersionInformation = 284;
  Version = RtlGetVersion((PRTL_OSVERSIONINFOW)&VersionInformation);
  if ( Version >= 0 )
  {
    v25 = KeBootTime;
    if ( (unsigned int)dword_140C02BF0 > 5 && tlgKeywordOn((__int64)&dword_140C02BF0, 0x800000000000LL) )
    {
      v19 = VersionInformation_4[0];
      *(_QWORD *)&v27 = v7;
      v45 = &v19;
      LOBYTE(v14) = v8 != 0;
      v20 = VersionInformation_4[1];
      v46 = 4LL;
      v47 = &v20;
      v21 = VersionInformation_4[2];
      v49 = &v21;
      v51 = &v22;
      v23 = v17;
      v53 = &v23;
      LOWORD(v15) = VersionInformation_4[68];
      v55 = &v15;
      LODWORD(v24) = v18;
      v57 = &v24;
      v59 = &v27;
      v16 = dword_140C50B64;
      v61 = &v16;
      v63 = &v14;
      v48 = 4LL;
      v50 = 4LL;
      v22 = 1;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 2LL;
      v58 = 4LL;
      v60 = 8LL;
      v62 = 4LL;
      v64 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02BF0,
        (unsigned __int8 *)word_14002D1FA,
        0LL,
        0LL,
        0xCu,
        &v44);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)&v28, v1, v2, v3);
      v27 = 0LL;
      LOBYTE(Version) = HviGetHypervisorFeatures(&v27);
      if ( (unsigned int)dword_140C02BF0 > 5 )
      {
        LOBYTE(Version) = tlgKeywordOn((__int64)&dword_140C02BF0, 0x400000000000LL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v14) = v9;
          v16 = ((unsigned int)v28 >> 10) & 0xF;
          v67 = 4LL;
          v66 = &v16;
          v69 = 1LL;
          v68 = &v14;
          LOBYTE(Version) = tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_140C02BF0,
                              (unsigned __int8 *)byte_14002CEF8,
                              0LL,
                              0LL,
                              4u,
                              &v65);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)VersionInformation_4;
      v33 = 4LL;
      p_SystemTimePrecise = (LARGE_INTEGER *)&VersionInformation_4[1];
      v35 = 4LL;
      v34 = &VersionInformation_4[2];
      v37 = 4LL;
      v36 = &v17;
      v38 = &VersionInformation_4[68];
      v40 = &v18;
      v42 = &v25;
      v39 = 2LL;
      v41 = 4LL;
      v43 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      v4 = EtwKernelProvRegHandle;
      LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData);
      if ( (_BYTE)Version )
      {
        *(_QWORD *)&UserData.Size = 264LL;
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        LOBYTE(Version) = EtwWriteEx(v4, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      v5 = KeLoaderBlock_0;
      v6 = *(_QWORD *)(KeLoaderBlock_0 + 240);
      if ( (*(_DWORD *)(v6 + 132) & 0x100) != 0 || *(_QWORD *)(v6 + 224) )
      {
        v10 = EtwKernelProvRegHandle;
        LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &VsmPerformanceData);
        if ( (_BYTE)Version )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = v6 + 224;
          v11 = *(_QWORD *)(v5 + 240) + 3488LL;
          v33 = 64LL;
          p_SystemTimePrecise = (LARGE_INTEGER *)v11;
          LOBYTE(Version) = EtwWriteEx(v10, &VsmPerformanceData, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        }
      }
      if ( (qword_140C197B8 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v12 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2912LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v12;
        p_SystemTimePrecise = &SystemTimePrecise;
        v33 = 8LL;
        v34 = (_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2904LL);
        v35 = 4LL;
        LOBYTE(Version) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return Version;
}
