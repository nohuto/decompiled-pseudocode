/*
 * XREFs of ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C8E0
 * Callers:
 *     ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026D0F0 (-EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAV.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___ @ 0x1C026C494 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ccd8af630c07cb465808c0d50cd17ed3___ @ 0x1C026C508 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ccd8af630c07cb465808c0d50cd17ed.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_db3a9a0bc6c40d3efa1a6011c34c0237___ @ 0x1C026C57C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_db3a9a0bc6c40d3efa1a6011c34c023.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___ @ 0x1C026C5F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12.c)
 *     ?EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C668 (-EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C6D8 (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026C844 (-EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  _DWORD *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  _DWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v10) )
      return v2;
    v5 = v10;
    *v10 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 39;
    v5[2] = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 15);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 32);
    else
      v7 = 0;
    v5[3] = v7;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitFlipManager(this, a2)
    && DirectComposition::CCaptureRenderTargetMarshaler::EmitAdapterLUID(this, a2)
    && DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(this, a2) )
  {
    v8 = *((_DWORD *)this + 4);
    v10 = this;
    if ( (v8 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ccd8af630c07cb465808c0d50cd17ed3___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x200u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x400) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_db3a9a0bc6c40d3efa1a6011c34c0237___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x400u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_586f7d666185bfabb4d1f720c8bdca68___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) &= ~0x800u;
      v8 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v8 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee857a2675ec8f1e621a8e3bf5b6d12e___(
           (__int64)this,
           a2,
           (__int64)&v10) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v2;
}
