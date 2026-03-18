/*
 * XREFs of ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00A7EC4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0CScalarMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B7CC (--0CScalarMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(_QWORD *a1, __int64 a2)
{
  *a1 = &DirectComposition::CBaseAnimation::`vftable';
  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1 + 2, a2);
  *a1 = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  a1[2] = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  return a1;
}
