/*
 * XREFs of ?SetFloatProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0265770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::SetFloatProperty(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 1 )
    return 3221225485LL;
  *((_DWORD *)this + 4) |= 0x40u;
  *((float *)this + 15) = a3;
  *a4 = 1;
  return result;
}
