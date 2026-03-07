__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // r9
  int PathSourceFromTarget; // eax
  __int64 v9; // rdi
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbp

  v3 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  memset(a3, 0, 0x1F0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                           (DMMVIDPN *)((char *)this + 96),
                           (_QWORD *)(unsigned int)v3,
                           v6,
                           v7);
  if ( PathSourceFromTarget == -1 )
  {
    v9 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v9 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry3(7LL, v3, *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), this);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v12 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v13 = v12;
    if ( v12 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v14 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v14 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(3LL, v3, *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), this, v13);
      return (unsigned int)v13;
    }
  }
}
