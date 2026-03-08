/*
 * XREFs of ?Create@CMesh2DEffect@@SAJPEAPEAUIUnknown@@@Z @ 0x1802BB4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMesh2DEffect@@IEAA@XZ @ 0x1802BB2EC (--0CMesh2DEffect@@IEAA@XZ.c)
 */

__int64 __fastcall CMesh2DEffect::Create(struct IUnknown **a1)
{
  CMesh2DEffect *v2; // rax
  struct IUnknown *v3; // rax

  v2 = (CMesh2DEffect *)operator new(0xC0uLL);
  if ( v2 )
  {
    v3 = (struct IUnknown *)CMesh2DEffect::CMesh2DEffect(v2);
    *a1 = v3;
    if ( v3 )
    {
      ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
      return 0LL;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return 2147942414LL;
}
