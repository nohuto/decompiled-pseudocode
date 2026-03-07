__int64 __fastcall HUBDSM_SettingSpeedFlagFor20Devices(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // edi
  __int16 v4; // dx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_DWORD *)(v1 + 1456) & 0xFF00;
  v4 = *(_WORD *)(*(_QWORD *)(v1 + 8) + 184LL);
  if ( (v4 & 0x400) != 0 )
  {
    v5 = 256;
    _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 0x2000u);
  }
  else
  {
    v5 = (v4 & 0x200) != 0 ? 1024 : 512;
  }
  *(_BYTE *)(v1 + 1457) = 0;
  *(_DWORD *)(v1 + 1456) |= v5;
  if ( v3 && v5 != v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x26u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        v3,
        v5);
    if ( v3 == 256 )
      return 4065;
  }
  return v2;
}
