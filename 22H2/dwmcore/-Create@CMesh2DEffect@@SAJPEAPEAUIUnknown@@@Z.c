/*
 * XREFs of ?Create@CMesh2DEffect@@SAJPEAPEAUIUnknown@@@Z @ 0x18026C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??0CMesh2DEffect@@IEAA@XZ @ 0x18026C55C (--0CMesh2DEffect@@IEAA@XZ.c)
 */

__int64 __fastcall CMesh2DEffect::Create(struct IUnknown **a1)
{
  CMesh2DEffect *v2; // rax
  struct IUnknown *v3; // rcx

  v2 = (CMesh2DEffect *)operator new(0xC0uLL);
  if ( v2 )
    v3 = (struct IUnknown *)CMesh2DEffect::CMesh2DEffect(v2);
  else
    v3 = 0LL;
  *a1 = v3;
  if ( !v3 )
    return 2147942414LL;
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  return 0LL;
}
