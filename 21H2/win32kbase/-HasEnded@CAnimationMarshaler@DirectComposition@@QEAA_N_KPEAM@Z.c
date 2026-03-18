/*
 * XREFs of ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C00B5244
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0013C68 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
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
  if ( (v4 & 0x120) == 0x20 && (*((_BYTE *)this + 216) & 2) == 0 )
  {
    v5 = *((_QWORD *)this + 15);
    if ( v5 )
    {
      if ( a2 >= *((_QWORD *)this + 16) + v5 )
      {
        v4 |= 0x100u;
        *((_DWORD *)this + 8) = v4;
      }
    }
  }
  if ( (v4 & 0x100) == 0 )
    return 0;
  *a3 = *((float *)this + 42);
  return 1;
}
