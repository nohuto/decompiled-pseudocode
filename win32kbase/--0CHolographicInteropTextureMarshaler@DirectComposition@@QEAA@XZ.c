/*
 * XREFs of ??0CHolographicInteropTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0249FF8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicInteropTextureMarshaler *__fastcall DirectComposition::CHolographicInteropTextureMarshaler::CHolographicInteropTextureMarshaler(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  DirectComposition::CHolographicInteropTextureMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CHolographicInteropTextureMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 9) = 80;
  return result;
}
