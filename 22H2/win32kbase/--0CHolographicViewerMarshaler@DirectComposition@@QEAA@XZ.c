/*
 * XREFs of ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D3D5C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0029A24 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CHolographicViewerMarshaler *__fastcall DirectComposition::CHolographicViewerMarshaler::CHolographicViewerMarshaler(
        DirectComposition::CHolographicViewerMarshaler *this)
{
  DirectComposition::CHolographicViewerMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CHolographicViewerMarshaler::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 76;
  *(_OWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
