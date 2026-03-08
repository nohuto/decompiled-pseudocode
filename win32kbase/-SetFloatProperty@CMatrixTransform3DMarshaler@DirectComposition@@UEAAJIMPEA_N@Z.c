/*
 * XREFs of ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0251480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  bool v5; // al

  v4 = 0;
  if ( a2 < 0x10 )
  {
    if ( *((float *)this + a2 + 18) == a3 )
    {
      v5 = 0;
    }
    else
    {
      *((float *)this + a2 + 18) = a3;
      v5 = 1;
    }
    *a4 = v5;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
