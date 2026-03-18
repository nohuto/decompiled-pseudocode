/*
 * XREFs of ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213B34
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CCaptureControllerMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DirectComposition::CCaptureControllerMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 12) = 16;
  *((_WORD *)this + 40) = 257;
  return result;
}
