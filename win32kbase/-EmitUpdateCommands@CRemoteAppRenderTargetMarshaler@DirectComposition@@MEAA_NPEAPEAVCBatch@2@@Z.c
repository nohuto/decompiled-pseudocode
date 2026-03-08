/*
 * XREFs of ?EmitUpdateCommands@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02646A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *))(*(_QWORD *)this + 288LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 296LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 304LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 312LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemoteAppRenderTargetMarshaler *, struct DirectComposition::CBatch ***))(*(_QWORD *)this + 320LL))(
         this,
         a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
      return 1;
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 12;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 327;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
