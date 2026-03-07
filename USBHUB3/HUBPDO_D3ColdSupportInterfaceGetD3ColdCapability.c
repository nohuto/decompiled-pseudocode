__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability(_QWORD *a1, _BYTE *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  int v5; // esi

  v2 = (__int64 (__fastcall *)(_QWORD))a1[45];
  if ( v2 )
  {
    v5 = v2(a1[40]);
    if ( v5 >= 0
      && *a2
      && (*(_DWORD *)(*(_QWORD *)(a1[3] + 8LL) + 204LL) & 1) != 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[2] + 2520LL),
        2u,
        6u,
        0x68u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    }
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return (unsigned int)v5;
}
