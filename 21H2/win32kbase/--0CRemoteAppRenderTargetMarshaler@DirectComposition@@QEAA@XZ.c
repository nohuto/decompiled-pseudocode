/*
 * XREFs of ??0CRemoteAppRenderTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213DF4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::CRemoteAppRenderTargetMarshaler(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  DirectComposition::CRemoteAppRenderTargetMarshaler *result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DirectComposition::CRemoteAppRenderTargetMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 12) = 141;
  *((_DWORD *)this + 16) = 3;
  return result;
}
