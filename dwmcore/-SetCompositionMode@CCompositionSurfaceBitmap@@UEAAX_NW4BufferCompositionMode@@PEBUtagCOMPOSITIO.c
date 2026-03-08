/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800DA550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 216LL))(v1);
  return result;
}
