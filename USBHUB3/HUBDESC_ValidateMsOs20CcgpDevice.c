char __fastcall HUBDESC_ValidateMsOs20CcgpDevice(__int64 a1, int *a2, _WORD *a3)
{
  int v3; // eax
  char v6; // si
  __int64 v7; // rdx
  int v9; // [rsp+28h] [rbp-10h]

  v3 = *a2;
  v6 = 1;
  if ( (*a2 & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v7 = 201LL;
  }
  else
  {
    if ( *a3 == 4 )
    {
      *((_QWORD *)a2 + 7) = a3;
      *a2 = v3 | 0x200;
      return v6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (unsigned __int16)*a3;
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x15Du,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v9);
    }
    v7 = 202LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Eu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v6;
}
