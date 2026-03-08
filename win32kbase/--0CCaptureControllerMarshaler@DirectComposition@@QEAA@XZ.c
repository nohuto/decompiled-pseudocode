/*
 * XREFs of ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0249F44
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CCaptureControllerMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CCaptureControllerMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 9) = 19;
  *((_WORD *)this + 36) = 257;
  *((_DWORD *)this + 22) = 0x40000000;
  return result;
}
