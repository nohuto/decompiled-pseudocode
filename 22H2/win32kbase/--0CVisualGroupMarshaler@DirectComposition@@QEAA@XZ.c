/*
 * XREFs of ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D9F0
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C0031DE4 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CVisualGroupMarshaler *__fastcall DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(
        DirectComposition::CVisualGroupMarshaler *this)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)this, 199);
  *(_QWORD *)this = &DirectComposition::CVisualGroupMarshaler::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
