/*
 * XREFs of ?SetFloatProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00C76C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 3 )
    return 3221225485LL;
  *((_DWORD *)this + 4) &= ~0x400u;
  *((float *)this + 24) = a3;
  *a4 = 1;
  return result;
}
