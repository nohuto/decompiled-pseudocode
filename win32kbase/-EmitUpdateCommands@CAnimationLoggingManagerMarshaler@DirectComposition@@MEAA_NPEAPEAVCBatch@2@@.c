/*
 * XREFs of ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C074 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C278 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C2EC (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C368 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005D6A0 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32f___ @ 0x1C00BFCB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___ @ 0x1C00C13EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64db.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // cl
  char v5; // di
  int v6; // eax
  DirectComposition::CAnimationLoggingManagerMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_BYTE *)this + 256);
  if ( (v4 & 2) == 0 )
  {
    v8 = this;
    v4 = (2
        * DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___(
            this,
            a2,
            &v8)) | *((_BYTE *)this + 256) & 0xFD;
    *((_BYTE *)this + 256) = v4;
  }
  v5 = 0;
  if ( (v4 & 2) != 0
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogAnimationEndedUpdates(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(this, a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetCompositorComment(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v6 & 0x20) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32f___(
                               this,
                               a2,
                               &v8) )
        return v5;
      *((_DWORD *)this + 4) |= 0x20u;
    }
    if ( DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetDiagnosticItemId(this, a2) )
      return 1;
  }
  return v5;
}
