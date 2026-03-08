/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00CD620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 4 )
    return 3221225485LL;
  *((_DWORD *)this + 4) &= ~0x800u;
  *((float *)this + 33) = a3;
  *a4 = 1;
  return result;
}
