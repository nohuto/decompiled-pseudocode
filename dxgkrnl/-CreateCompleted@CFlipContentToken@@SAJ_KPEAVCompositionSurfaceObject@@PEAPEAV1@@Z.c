/*
 * XREFs of ?CreateCompleted@CFlipContentToken@@SAJ_KPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00891B4
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0087A84 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C0089044 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CFlipContentToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *a2,
        struct CFlipContentToken **a3)
{
  CFlipContentToken *v6; // rax
  CFlipContentToken *v7; // rax
  struct CFlipContentToken *v8; // rbx
  int v9; // edi

  *a3 = 0LL;
  v6 = (CFlipContentToken *)operator new[](0x140uLL, 0x6F744D54u, 256LL);
  if ( v6 && (v7 = CFlipContentToken::CFlipContentToken(v6, a1, a2), (v8 = v7) != 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(CFlipContentToken *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 2LL);
    if ( v9 < 0 )
      (**(void (__fastcall ***)(struct CFlipContentToken *, __int64))v8)(v8, 1LL);
    else
      *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
