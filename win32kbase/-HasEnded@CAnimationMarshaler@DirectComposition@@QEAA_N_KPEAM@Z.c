/*
 * XREFs of ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C005E234
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C00617B8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CAnimationMarshaler::HasEnded(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2,
        float *a3)
{
  int v4; // r9d
  __int64 v5; // rcx

  v4 = *((_DWORD *)this + 8);
  if ( (v4 & 0x120) == 0x20 && (*((_BYTE *)this + 200) & 2) == 0 )
  {
    v5 = *((_QWORD *)this + 14);
    if ( v5 )
    {
      if ( a2 >= *((_QWORD *)this + 15) + v5 )
      {
        v4 |= 0x100u;
        *((_DWORD *)this + 8) = v4;
      }
    }
  }
  if ( (v4 & 0x100) == 0 )
    return 0;
  *a3 = *((float *)this + 38);
  return 1;
}
