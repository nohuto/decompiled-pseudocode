_UNKNOWN **__fastcall HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v4; // r10
  _QWORD *i; // rax
  unsigned int j; // r9d
  int v7; // ecx
  _QWORD *v8; // r8

  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  if ( !*(_DWORD *)(a1 + 96) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x37u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  }
  v4 = (_QWORD *)(v1 + 16);
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  for ( i = *(_QWORD **)(v1 + 16); ; i = (_QWORD *)*i )
  {
    v8 = i - 1;
    if ( v4 == i )
      break;
    for ( j = 0; j < *((_DWORD *)v8 + 6); ++j )
    {
      v7 = v8[9 * j + 6];
      if ( v7 == 4 )
      {
        LODWORD(v8[9 * j + 6]) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v8[9 * j + 5];
      }
      else if ( v7 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v8[9 * j + 5];
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 128) )
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  return HUBUCX_EnableDisableEndpointsUsingUCXIoctl((__int64 *)a1);
}
