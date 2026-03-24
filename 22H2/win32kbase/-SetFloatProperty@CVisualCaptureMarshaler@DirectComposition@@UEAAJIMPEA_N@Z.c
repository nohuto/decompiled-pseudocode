/*
 * XREFs of ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01F3280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetFloatProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  bool v5; // cl

  result = 0LL;
  if ( a2 != 5 )
    return 3221225485LL;
  if ( *((float *)this + 26) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *((float *)this + 26) = a3;
    v5 = 1;
  }
  *a4 = v5;
  return result;
}
