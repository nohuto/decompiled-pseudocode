void __fastcall HUBCONNECTOR_MapHubPorts(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm0
  __int64 v7; // rcx
  int v8; // [rsp+28h] [rbp-10h]

  if ( (*(_DWORD *)(a1 + 40) & 0x40000) == 0 )
  {
LABEL_10:
    if ( *(_BYTE *)(a1 + 240) )
    {
      if ( *(_WORD *)(a1 + 288) )
        HUBCONNECTOR_MapIntegratedHubPorts(a1);
      else
        HUBCONNECTOR_MapExternalHubPorts(a1);
    }
    else
    {
      HUBCONNECTOR_MapRootHubPorts(a1);
    }
    return;
  }
  v2 = a1 + 2360;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 2360);
  v5 = v4 - 248;
  if ( a1 + 2360 != v4 )
  {
    do
    {
      if ( (*(_BYTE *)(v5 + 204) & 5) == 5 )
      {
        v6 = *(_OWORD *)(v5 + 1352);
        *(_DWORD *)(v5 + 1368) = 2;
        *(_OWORD *)(v5 + 1372) = v6;
        *(_QWORD *)(v5 + 1416) = (*(_DWORD *)(v5 + 1380) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(v5 + 1380)) & 0x7F80)) >> 7;
        v3 = HUBCONNECTOR_RegisterPort(v5);
        if ( v3 < 0 )
          break;
      }
      v7 = *(_QWORD *)(v5 + 248);
      v5 = v7 - 248;
    }
    while ( v2 != v7 );
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          2u,
          6u,
          0x1Bu,
          (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
          v8);
      }
      HUBCONNECTOR_UnMapHubPorts(a1);
      _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFBFFFF);
      goto LABEL_10;
    }
  }
}
