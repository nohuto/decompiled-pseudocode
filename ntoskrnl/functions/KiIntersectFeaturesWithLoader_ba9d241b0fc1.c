__int64 __fastcall KiIntersectFeaturesWithLoader(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // rcx

  result = *(_QWORD *)(a1 + 240);
  v3 = *a2;
  v4 = *(_DWORD *)(result + 2872);
  if ( *a2 )
  {
    result = *(_QWORD *)(result + 2864);
    a2[67] &= result;
    *a2 = result & v3;
    v5 = (_DWORD *)a2 + 5;
    if ( (v4 & 0x10) == 0 )
      *v5 &= ~2u;
    if ( (v4 & 8) == 0 )
      *v5 &= ~1u;
    if ( (v4 & 0x40) == 0 )
      *v5 &= ~4u;
  }
  return result;
}
