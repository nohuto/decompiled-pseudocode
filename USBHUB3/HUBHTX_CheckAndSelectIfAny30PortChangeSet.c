__int64 __fastcall HUBHTX_CheckAndSelectIfAny30PortChangeSet(__int64 a1)
{
  __int16 v2; // cx
  unsigned __int16 v3; // ax
  int v4; // edx
  __int16 v5; // ax
  __int16 v6; // cx
  unsigned int v7; // edi

  v2 = *(_WORD *)(a1 + 194);
  v3 = *(_WORD *)(a1 + 186) & ~v2;
  *(_WORD *)(a1 + 186) = v3;
  if ( (v3 & 1) != 0 )
  {
    v4 = 16;
    v5 = v3 & 0xFFFE;
    v6 = v2 | 1;
LABEL_13:
    *(_WORD *)(a1 + 186) = v5;
    *(_WORD *)(a1 + 194) = v6;
    goto LABEL_14;
  }
  if ( (v3 & 8) != 0 )
  {
    v4 = 19;
    *(_WORD *)(a1 + 186) = v3 & 0xFFF7;
    *(_WORD *)(a1 + 194) = v2 | 8;
    *(_DWORD *)(a1 + 1424) = 4;
LABEL_14:
    *(_DWORD *)(a1 + 12) = v4;
    return 3089;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v4 = 20;
    v5 = v3 & 0xFFEF;
    v6 = v2 | 0x10;
    goto LABEL_13;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v4 = 25;
    v5 = v3 & 0xFFBF;
    v6 = v2 | 0x40;
    goto LABEL_13;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v4 = 29;
    v5 = v3 & 0xFFDF;
    v6 = v2 | 0x20;
    goto LABEL_13;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v4 = 26;
    v5 = v3 & 0xFF7F;
    v6 = v2 | 0x80;
    goto LABEL_13;
  }
  if ( v3 )
  {
    v7 = 3041;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x53u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v3);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2592LL) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", *(_QWORD *)a1 + 1264LL);
  }
  else
  {
    return 3005;
  }
  return v7;
}
