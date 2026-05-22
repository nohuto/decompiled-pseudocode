/*
 * XREFs of ?UpdateCurrentStart@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAX_J@Z @ 0x18016FF00
 * Callers:
 *     ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x18016A8B4 (-AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z.c)
 *     ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x18016C440 (-EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::UpdateCurrentStart(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 < a2 )
    {
      v3 = *((_QWORD *)this + 8);
      if ( v3 )
      {
        v4 = v3 + v2;
        if ( v4 <= a2 )
        {
          *((_BYTE *)this + 48) = 0;
        }
        else
        {
          *((_QWORD *)this + 7) = a2;
          *((_QWORD *)this + 8) = v4 - a2;
        }
      }
      else
      {
        *((_QWORD *)this + 7) = a2;
      }
    }
  }
}
