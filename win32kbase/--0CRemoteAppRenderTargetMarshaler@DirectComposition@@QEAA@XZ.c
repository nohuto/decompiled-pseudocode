/*
 * XREFs of ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C024A188
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00673F4 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  DirectComposition::CRemoteAppRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 9) = 143;
  *((_DWORD *)this + 14) = 3;
  return result;
}
