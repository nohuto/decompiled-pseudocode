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
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // rsi
  CInputConfig *v13; // rcx
  struct CInputSpaceRegion *v14; // rcx
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
  __int128 v28; // xmm1
  struct CInputSpaceRegion *v29; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v33; // [rsp+68h] [rbp-A0h]
  __int16 v34; // [rsp+6Ch] [rbp-9Ch]
  __int16 v35; // [rsp+6Eh] [rbp-9Ah]
  _BYTE v36[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v37[688]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v38; // [rsp+328h] [rbp+220h] BYREF
  int v39; // [rsp+330h] [rbp+228h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
  {
    LODWORD(v29) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 480LL);
  }
  v29 = 0LL;
  v30 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v38, (const struct INPUT_SPACE *)&v29, 1);
  v38 = 0xFFFFFFFE00000000uLL;
  v31 = 0LL;
  v39 = 0;
  v2 = RIMGetQDCActivePathsData(&v31);
  if ( **(_DWORD **)gpDispInfo )
  {
    for ( i = *((_QWORD *)gpDispInfo + 13); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v32);
        v4 = *(_QWORD *)(i + 40);
        v5 = *(_OWORD *)(v4 + 28);
        v6 = i == *((_QWORD *)gpDispInfo + 12);
        v34 = *(_WORD *)(v4 + 60);
        v7 = *(_WORD *)(i + 72);
        v33 = v6;
        v8 = *(_QWORD *)(i + 88);
        v32 = v5;
        v35 = v7;
        DrvGetWDDMAdapterInfo(v8, 1LL, v36, v37);
        v9 = CInputSpace::AddRegion((CInputSpace *)&v38, (const struct CInputSpaceRegion *)&v32, 0LL);
        if ( v9 < 0 )
          goto LABEL_11;
      }
    }
  }
  if ( v2 )
  {
    for ( j = 0; j < *(_DWORD *)v2; ++j )
    {
      v12 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*(_QWORD *)(v2 + 8) + 216LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v12);
      v29 = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v13,
             v12,
             (const struct CInputSpace *)&v38,
             (const struct tagQDC_DATA *)v2,
             &v29) )
      {
        v14 = v29;
        if ( *((_BYTE *)v29 + 488) )
        {
          v15 = &v32;
          v16 = 5LL;
          do
          {
            v17 = *(_OWORD *)v14;
            v18 = *((_OWORD *)v14 + 1);
            v14 = (struct CInputSpaceRegion *)((char *)v14 + 128);
            *v15 = v17;
            v19 = *((_OWORD *)v14 - 6);
            v15[1] = v18;
            v20 = *((_OWORD *)v14 - 5);
            v15[2] = v19;
            v21 = *((_OWORD *)v14 - 4);
            v15[3] = v20;
            v22 = *((_OWORD *)v14 - 3);
            v15[4] = v21;
            v23 = *((_OWORD *)v14 - 2);
            v15[5] = v22;
            v24 = *((_OWORD *)v14 - 1);
            v15[6] = v23;
            v15 += 8;
            *(v15 - 1) = v24;
            --v16;
          }
          while ( v16 );
          v25 = *((_QWORD *)v14 + 8);
          v26 = *((_OWORD *)v14 + 1);
          *v15 = *(_OWORD *)v14;
          v27 = *((_OWORD *)v14 + 2);
          v15[1] = v26;
          v28 = *((_OWORD *)v14 + 3);
          v15[2] = v27;
          v15[3] = v28;
          *((_QWORD *)v15 + 8) = v25;
          CInputSpace::AddRegion((CInputSpace *)&v38, (const struct CInputSpaceRegion *)&v32, &v29);
          v14 = v29;
        }
        if ( v14 )
          CInputSpaceRegion::MapToDisplayPath(v14, v12);
      }
    }
  }
  v9 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v38);
LABEL_11:
  RIMFreeQDCActivePathsData(v2);
  if ( v9 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v38);
  return 0LL;
}
