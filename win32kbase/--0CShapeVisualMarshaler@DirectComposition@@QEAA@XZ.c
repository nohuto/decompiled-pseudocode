/*
 * XREFs of ??0CShapeVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C006B2A4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CShapeVisualMarshaler *__fastcall DirectComposition::CShapeVisualMarshaler::CShapeVisualMarshaler(
        DirectComposition::CShapeVisualMarshaler *this)
{
  DirectComposition::CShapeVisualMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 9) = 168;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *(_QWORD *)this = &DirectComposition::CShapeVisualMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 100) = 0;
  return result;
}
