__int64 *__fastcall CmpVolumeManagerGetContextForGuidUnsafe(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r10
  __int64 *v3; // r9
  __int64 *i; // r8
  __int64 v5; // rcx

  v2 = (__int64 *)(a1 + 8);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 8); i != v2; i = (__int64 *)*i )
  {
    v5 = i[4] - *a2;
    if ( !v5 )
      v5 = i[5] - a2[1];
    if ( !v5 )
    {
      v3 = i;
      if ( i && _InterlockedIncrement64(i + 3) <= 1 )
        __fastfail(0xEu);
      return v3;
    }
  }
  return v3;
}
