/*
 * XREFs of ?EmitDisplayRect@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264620
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_02fe0a3e43afac2f6dacd23f77efb3f1___ @ 0x1C026428C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_02fe0a3e43afac2f6dacd23f77efb3f.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDisplayRect(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CRemoteAppRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x80u) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_02fe0a3e43afac2f6dacd23f77efb3f1___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return v5;
}
