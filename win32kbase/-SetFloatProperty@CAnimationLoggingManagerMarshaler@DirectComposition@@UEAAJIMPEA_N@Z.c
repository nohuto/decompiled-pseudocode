/*
 * XREFs of ?SetFloatProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0262C10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetFloatProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 4 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( a3 != 0.0 && (a3 < 0.0625 || a3 > 16.0) )
    return 3221225485LL;
  if ( *((float *)this + 65) != a3 )
  {
    *((_DWORD *)this + 4) &= ~0x20u;
    *((float *)this + 65) = a3;
    *a4 = 1;
  }
  return result;
}
