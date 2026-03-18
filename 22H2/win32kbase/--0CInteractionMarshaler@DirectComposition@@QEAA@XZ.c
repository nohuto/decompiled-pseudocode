/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00944BC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x1C0092E6C (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  DirectComposition::CInteractionMarshaler *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 89LL);
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 7) = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = this;
  *((_DWORD *)this + 42) = 1;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  result = this;
  *((_BYTE *)this + 332) |= 0xC0u;
  *((_DWORD *)this + 82) = 4;
  return result;
}
