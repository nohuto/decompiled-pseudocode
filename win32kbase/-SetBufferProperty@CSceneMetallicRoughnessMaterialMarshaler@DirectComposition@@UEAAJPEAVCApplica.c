/*
 * XREFs of ?SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C680 (-SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetBufferProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 != 10 )
    return DirectComposition::CScenePbrMaterialMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  if ( !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *((_DWORD *)this + 4) |= 0x8000u;
  *((_OWORD *)this + 8) = v7;
  *a6 = 1;
  return result;
}
