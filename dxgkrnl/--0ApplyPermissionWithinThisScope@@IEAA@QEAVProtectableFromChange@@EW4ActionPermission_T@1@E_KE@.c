__int64 __fastcall ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  int v9; // eax

  v6 = a3;
  *(_BYTE *)(a1 + 8) = a3;
  v7 = a2;
  *(_BYTE *)(a1 + 10) = 1;
  *(_QWORD *)a1 = a2;
  if ( a3 >= *(_BYTE *)(a2 + 20) )
    WdLogSingleEntry0(1LL);
  v9 = *(unsigned __int16 *)(v7 + 22);
  *(_BYTE *)(a1 + 9) = _bittest(&v9, v6);
  if ( v6 >= *(_QWORD *)(v7 + 40) )
    WdLogSingleEntry0(1LL);
  *(_BYTE *)(a1 + 11) = *(_BYTE *)(v6 + *(_QWORD *)(v7 + 48));
  if ( v6 >= *(_QWORD *)(v7 + 80) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v6);
  if ( !*(_BYTE *)(a1 + 9) )
  {
    if ( (*(_BYTE *)(a1 + 11) & 0xF) != 0 )
      WdLogSingleEntry0(1LL);
    if ( *(_QWORD *)(a1 + 16) )
      WdLogSingleEntry0(1LL);
    if ( !*(_BYTE *)(a1 + 9) )
    {
      if ( (unsigned __int8)v6 >= *(_BYTE *)(v7 + 20) && (_BYTE)v6 != 0xFF )
        WdLogSingleEntry0(1LL);
      LOBYTE(a2) = v6;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, char))(*(_QWORD *)v7 + 24LL))(v7, a2, 1LL, a6, -1);
      if ( (_BYTE)v6 == 0xFF )
      {
        if ( a6 != 255 )
          WdLogSingleEntry0(1LL);
        *(_WORD *)(v7 + 22) |= (2 << *(_BYTE *)(v7 + 20)) - 1;
        memset(*(void **)(v7 + 48), 0, *(_QWORD *)(v7 + 40));
      }
      else
      {
        *(_WORD *)(v7 + 22) |= 1 << v6;
        if ( v6 >= *(_QWORD *)(v7 + 40) )
          WdLogSingleEntry0(1LL);
        *(_BYTE *)(*(_QWORD *)(v7 + 48) + v6) &= 0xF0u;
        if ( v6 >= *(_QWORD *)(v7 + 80) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v6) = a6;
      }
    }
  }
  return a1;
}
