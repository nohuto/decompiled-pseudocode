/*
 * XREFs of ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1800FD6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DPixelShader::ReleaseD3DResources(CD3DPixelShader *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
}
