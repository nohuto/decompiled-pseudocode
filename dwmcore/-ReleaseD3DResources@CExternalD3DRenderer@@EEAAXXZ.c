/*
 * XREFs of ?ReleaseD3DResources@CExternalD3DRenderer@@EEAAXXZ @ 0x1802849B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CExternalD3DRenderer::ReleaseD3DResources(CExternalD3DRenderer *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
