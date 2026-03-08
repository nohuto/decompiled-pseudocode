/*
 * XREFs of ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A02C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicViewerMarshaler *__fastcall DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(
        DirectComposition::CHolographicViewerMarshaler *this)
{
  DirectComposition::CHolographicViewerMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &DirectComposition::CHolographicViewerMarshaler::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 9) = 81;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
