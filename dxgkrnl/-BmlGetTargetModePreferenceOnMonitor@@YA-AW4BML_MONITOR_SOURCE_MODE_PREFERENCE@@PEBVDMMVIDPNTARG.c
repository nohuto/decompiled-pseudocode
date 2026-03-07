__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // r12d
  char v9; // r13
  __int64 v10; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // r14d
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[8]; // [rsp+28h] [rbp-40h] BYREF
  char v17; // [rsp+80h] [rbp+18h]
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 0xFFFFFFFFLL;
  v6 = 0LL;
  v14 = 0LL;
  v18 = 0;
  v7 = -1;
  v8 = 0;
  v15[0] = 0LL;
  v17 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a3 + 112);
    if ( !v10 )
    {
      NextMonitorSourceMode = -1071774920;
      goto LABEL_32;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v10, v6, &v14, &v18);
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v14;
LABEL_32:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), NextMonitorSourceMode);
      return 0xFFFFFFFFLL;
    }
    v6 = v14;
    if ( *(_DWORD *)(v14 + 88) == 1 && *(_DWORD *)(v14 + 84) == 5 )
      ++v8;
    MonitorModePreference = BmlGetMonitorModePreference(v14, v18, a3);
    if ( MonitorModePreference == 8 )
      v9 = 1;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(a1 + 84)
      && *(_DWORD *)(v6 + 24) == *(_DWORD *)(a1 + 88)
      && (a2
       || DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 8),
            0)) )
    {
      if ( *(_DWORD *)(v6 + 88) == 1 && *(_DWORD *)(v6 + 84) == 5 )
        v15[0] = *(_QWORD *)(v6 + 20);
      if ( MonitorModePreference == 11 )
      {
        v17 = 1;
        MonitorModePreference = 0;
      }
      if ( MonitorModePreference > v7 )
        v7 = MonitorModePreference;
    }
  }
  if ( v8 == 1
    && (v17
     || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3)
     && v9
     && !(unsigned int)BmlCompareModeExtents(a1 + 84, v15)) )
  {
    return 11;
  }
  return (unsigned int)v7;
}
