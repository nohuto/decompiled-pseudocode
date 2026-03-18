/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C009F378 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A0990 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C0071FB0 (DrvGetWDDMAdapterInfo.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C009F1F0 (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C009F928 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C009F998 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C009FFF0 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D30 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A0DCC (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A0DFC (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 i; // rbx
  __int64 v10; // rdx
  __int128 v11; // xmm0
  BOOL v12; // ecx
  __int16 v13; // ax
  __int64 v14; // rcx
  int v15; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v17; // rsi
  CInputConfig *v18; // rcx
  struct CInputSpaceRegion *v19; // rcx
  __int128 *v21; // r8
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  struct CInputSpaceRegion *v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+38h] [rbp-C8h]
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v38; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v39; // [rsp+60h] [rbp-A0h]
  __int16 v40; // [rsp+64h] [rbp-9Ch]
  __int16 v41; // [rsp+66h] [rbp-9Ah]
  struct _LUID v42; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v43[172]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+320h] [rbp+220h] BYREF
  int v45; // [rsp+328h] [rbp+228h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v35 = 0LL;
  v36 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v44, (const struct INPUT_SPACE *)&v35, 1);
  v45 = 0;
  v44 = 0xFFFFFFFE00000000uLL;
  v37 = 0LL;
  v8 = RIMGetQDCActivePathsData(&v37, v5, v6, v7);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *((_QWORD *)gpDispInfo + 13); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v38);
        v10 = *(_QWORD *)(i + 40);
        v11 = *(_OWORD *)(v10 + 28);
        v12 = i == *((_QWORD *)gpDispInfo + 12);
        v40 = *(_WORD *)(v10 + 60);
        v13 = *(_WORD *)(i + 72);
        v39 = v12;
        v14 = *(_QWORD *)(i + 88);
        v38 = v11;
        v41 = v13;
        DrvGetWDDMAdapterInfo(v14, 1, &v42, v43);
        v15 = CInputSpace::AddRegion((CInputSpace *)&v44, (const struct CInputSpaceRegion *)&v38, 0LL);
        if ( v15 < 0 )
          goto LABEL_17;
      }
    }
  }
  if ( v8 )
  {
    for ( j = 0; j < *(_DWORD *)v8; ++j )
    {
      v17 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v8 + 8) + 216LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v17);
      v35 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v18,
             v17,
             (const struct CInputSpace *)&v44,
             (const struct tagQDC_DATA *)v8,
             &v35) )
      {
        v19 = v35;
        if ( *((_BYTE *)v35 + 488) )
        {
          v21 = &v38;
          v22 = 5LL;
          do
          {
            v23 = *(_OWORD *)v19;
            v24 = *((_OWORD *)v19 + 1);
            v19 = (struct CInputSpaceRegion *)((char *)v19 + 128);
            *v21 = v23;
            v25 = *((_OWORD *)v19 - 6);
            v21[1] = v24;
            v26 = *((_OWORD *)v19 - 5);
            v21[2] = v25;
            v27 = *((_OWORD *)v19 - 4);
            v21[3] = v26;
            v28 = *((_OWORD *)v19 - 3);
            v21[4] = v27;
            v29 = *((_OWORD *)v19 - 2);
            v21[5] = v28;
            v30 = *((_OWORD *)v19 - 1);
            v21[6] = v29;
            v21 += 8;
            *(v21 - 1) = v30;
            --v22;
          }
          while ( v22 );
          v31 = *((_QWORD *)v19 + 8);
          v32 = *((_OWORD *)v19 + 1);
          *v21 = *(_OWORD *)v19;
          v33 = *((_OWORD *)v19 + 2);
          v21[1] = v32;
          v34 = *((_OWORD *)v19 + 3);
          v21[2] = v33;
          v21[3] = v34;
          *((_QWORD *)v21 + 8) = v31;
          CInputSpace::AddRegion((CInputSpace *)&v44, (const struct CInputSpaceRegion *)&v38, &v35);
          v19 = v35;
        }
        if ( v19 )
          CInputSpaceRegion::MapToDisplayPath(v19, v17);
      }
    }
  }
  v15 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v44);
LABEL_17:
  RIMFreeQDCActivePathsData(v8);
  if ( v15 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v44);
  return 0LL;
}
