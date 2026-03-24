/*
 * XREFs of ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00669D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0065B34 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066860 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066914 (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066978 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066AA4 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32f___ @ 0x1C00671F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___ @ 0x1C0067278 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64db.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // al
  char v5; // di
  int v6; // eax
  DirectComposition::CAnimationLoggingManagerMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 256);
  if ( (v2 & 2) == 0 )
  {
    v8 = this;
    v2 = *((_BYTE *)this + 256) & 0xFD | (2
                                        * DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___(
                                            this,
                                            a2,
                                            &v8));
    *((_BYTE *)this + 256) = v2;
  }
  v5 = 0;
  if ( (v2 & 2) != 0
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogAnimationEndedUpdates(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
         this,
         (struct DirectComposition::CBatch ***)a2)
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
