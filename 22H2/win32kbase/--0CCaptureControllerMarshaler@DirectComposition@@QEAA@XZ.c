/*
 * XREFs of ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020B2D4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CCaptureControllerMarshaler::CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CCaptureControllerMarshaler *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 19LL);
  *((_WORD *)this + 36) = 257;
  *(_QWORD *)this = &DirectComposition::CCaptureControllerMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 22) = 0x40000000;
  return result;
}
