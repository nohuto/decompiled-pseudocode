/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006E540
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C006E02C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0072034 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C0012090 (DrvGetWDDMAdapterInfo.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C006DADC (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C006DE70 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006E774 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C006E7A4 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C006E934 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C006EA38 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C006EAA8 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C006EBA0 (RIMGetQDCActivePathsData.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C0072188 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00721E4 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  BOOL v6; // ecx
  __int16 v7; // ax
  __int64 v8; // rcx
  int v9; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v11; // rsi
  CInputConfig *v12; // rcx
  struct CInputSpaceRegion *v13; // rcx
  __int128 *v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  struct CInputSpaceRegion *v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+40h] [rbp-C8h]
  __int128 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v32; // [rsp+68h] [rbp-A0h]
  __int16 v33; // [rsp+6Ch] [rbp-9Ch]
  __int16 v34; // [rsp+6Eh] [rbp-9Ah]
  struct _LUID v35; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v36[168]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+318h] [rbp+210h] BYREF
  int v38; // [rsp+320h] [rbp+218h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 462LL);
  }
  v28 = 0LL;
  v29 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v37, (const struct INPUT_SPACE *)&v28, 1);
  v37 = 0xFFFFFFFE00000000uLL;
  v30 = 0LL;
  v38 = 0;
  v2 = RIMGetQDCActivePathsData(&v30);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v31);
        v4 = *(_QWORD *)(i + 40);
        v5 = *(_OWORD *)(v4 + 28);
        v6 = i == *(_QWORD *)(gpDispInfo + 96);
        v33 = *(_WORD *)(v4 + 64);
        v7 = *(_WORD *)(i + 224);
        v32 = v6;
        v8 = *(_QWORD *)(i + 240);
        v31 = v5;
        v34 = v7;
        DrvGetWDDMAdapterInfo(v8, 1, &v35, v36);
        v9 = CInputSpace::AddRegion((CInputSpace *)&v37, (const struct CInputSpaceRegion *)&v31, 0LL);
        if ( v9 < 0 )
          goto LABEL_17;
      }
    }
  }
  if ( v2 )
  {
    for ( j = 0; j < *(_DWORD *)v2; ++j )
    {
      v11 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v2 + 8) + 200LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v11);
      v28 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v12,
             v11,
             (const struct CInputSpace *)&v37,
             (const struct tagQDC_DATA *)v2,
             &v28) )
      {
        v13 = v28;
        if ( *((_BYTE *)v28 + 488) )
        {
          v15 = &v31;
          v16 = 5LL;
          do
          {
            v17 = *(_OWORD *)v13;
            v18 = *((_OWORD *)v13 + 1);
            v13 = (struct CInputSpaceRegion *)((char *)v13 + 128);
            *v15 = v17;
            v19 = *((_OWORD *)v13 - 6);
            v15[1] = v18;
            v20 = *((_OWORD *)v13 - 5);
            v15[2] = v19;
            v21 = *((_OWORD *)v13 - 4);
            v15[3] = v20;
            v22 = *((_OWORD *)v13 - 3);
            v15[4] = v21;
            v23 = *((_OWORD *)v13 - 2);
            v15[5] = v22;
            v24 = *((_OWORD *)v13 - 1);
            v15[6] = v23;
            v15 += 8;
            *(v15 - 1) = v24;
            --v16;
          }
          while ( v16 );
          v25 = *((_QWORD *)v13 + 6);
          v26 = *((_OWORD *)v13 + 1);
          *v15 = *(_OWORD *)v13;
          v27 = *((_OWORD *)v13 + 2);
          v15[1] = v26;
          v15[2] = v27;
          *((_QWORD *)v15 + 6) = v25;
          CInputSpace::AddRegion((CInputSpace *)&v37, (const struct CInputSpaceRegion *)&v31, &v28);
          v13 = v28;
        }
        if ( v13 )
          CInputSpaceRegion::MapToDisplayPath(v13, v11);
      }
    }
  }
  v9 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v37);
LABEL_17:
  RIMFreeQDCActivePathsData(v2);
  if ( v9 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v37);
  return 0LL;
}
