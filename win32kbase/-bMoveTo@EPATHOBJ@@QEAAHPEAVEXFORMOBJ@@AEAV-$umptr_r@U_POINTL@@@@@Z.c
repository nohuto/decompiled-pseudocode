__int64 __fastcall EPATHOBJ::bMoveTo(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return 0LL;
  if ( a2 )
    EXFORMOBJ::bXformRound(a2, (__int64 *)a3, v3 + 64, 1uLL);
  else
    umptr_r<_POINTL>::read<_POINTFIX>(a3, (void *)(v3 + 64), 1LL);
  if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL) |= 5u;
  return result;
}
