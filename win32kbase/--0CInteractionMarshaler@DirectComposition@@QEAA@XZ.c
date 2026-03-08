/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A2E8C
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0?$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1C00A1D94 (--0-$CSharedResourceMarshaler@VCInteractionMarshaler@DirectComposition@@$01@DirectComposition@@Q.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  DirectComposition::CInteractionMarshaler *result; // rax

  *((_DWORD *)this + 9) = 89;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = 1LL;
  *((_QWORD *)this + 7) = this;
  *((_DWORD *)this + 16) = 0;
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
  *((_BYTE *)this + 332) |= 0xC0u;
  *((_DWORD *)this + 82) = 4;
  return result;
}
