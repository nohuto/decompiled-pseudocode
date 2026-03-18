/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0078B68
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0077110 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C00788A8 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  CToken *v5; // rax
  struct CToken *v6; // rbx
  int v7; // edi

  *a2 = 0LL;
  v4 = (CToken *)operator new[](0x58uLL, 0x6F744D54u, 256LL);
  if ( v4 && (v5 = CToken::CToken(v4, 0LL, a1), (v6 = v5) != 0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(CToken *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 2LL);
    if ( v7 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
