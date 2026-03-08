/*
 * XREFs of ?SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C680
 * Callers:
 *     ?SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C620 (-SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplica.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetBufferProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 3 && a4 && a5 == 12 )
  {
    *((_QWORD *)this + 9) = *(_QWORD *)a4;
    v7 = a4[2];
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 20) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
