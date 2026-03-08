/*
 * XREFs of ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0048198
 * Callers:
 *     FxDestroy @ 0x1C0043AD0 (FxDestroy.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxMdlDump(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rbx
  char v3; // r14
  FxAllocatedMdls *p_AllocatedMdls; // rbx
  const void **p_Owner; // rdi
  __int64 v6; // rbp
  const void *_a1; // rcx

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( DebugExtension )
  {
    v3 = 0;
    p_AllocatedMdls = &DebugExtension->AllocatedMdls;
    if ( p_AllocatedMdls )
    {
      do
      {
        p_Owner = (const void **)&p_AllocatedMdls->Info[0].Owner;
        v6 = 16LL;
        do
        {
          _a1 = *(p_Owner - 1);
          if ( _a1 )
          {
            v3 = 1;
            WPP_IFR_SF_qqq(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_WdfpoolKm_cpp_Traceguids, _a1, *p_Owner, p_Owner[1]);
          }
          p_Owner += 3;
          --v6;
        }
        while ( v6 );
        p_AllocatedMdls = p_AllocatedMdls->Next;
      }
      while ( p_AllocatedMdls );
      if ( v3 )
        FxVerifierDbgBreakPoint(FxDriverGlobals);
    }
  }
}
