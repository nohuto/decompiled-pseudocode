/*
 * XREFs of ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B804
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C0031DE4 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D8D4 (--0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(_QWORD *a1, int a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)a1, a2);
  *a1 = &DirectComposition::CSceneObjectMarshaler::`vftable';
  return a1;
}
