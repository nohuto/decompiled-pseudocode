/*
 * XREFs of ?EmitAlphaMode@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264500
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e0847bf149581c1678fb005c039fc07___ @ 0x1C0264480 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6e0847bf149581c1678fb005c039fc0.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitAlphaMode(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CRemoteAppRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e0847bf149581c1678fb005c039fc07___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v5;
}
