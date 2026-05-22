/*
 * XREFs of ??A?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAAEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@_K@Z @ 0x18016A1D8
 * Callers:
 *     ?OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z @ 0x18016D470 (-OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::operator[](
        __int64 a1,
        __int64 a2)
{
  __int64 *****v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 ***v5; // rcx
  __int64 ****v6; // r8
  __int64 v7; // rdx
  __int64 **v8; // rcx
  __int64 *v9; // rcx

  v2 = *(__int64 ******)a1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  if ( v2 )
  {
    v6 = *v2;
    if ( v6 )
      v5 = *v6;
  }
  v7 = v4 + a2;
  if ( v5 )
  {
    v8 = *v5;
    if ( v8 )
    {
      v9 = *v8;
      if ( v9 )
        v3 = *v9;
    }
  }
  return *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * (v7 & (*(_QWORD *)(v3 + 16) - 1LL)));
}
