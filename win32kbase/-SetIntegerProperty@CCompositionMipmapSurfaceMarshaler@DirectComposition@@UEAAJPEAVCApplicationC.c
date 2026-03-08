/*
 * XREFs of ?SetIntegerProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C026E4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 16) != a4 )
    *((_DWORD *)this + 16) = a4;
  return result;
}
