/*
 * XREFs of ?ReplaceSourceWorker@CVirtualSurfaceDrawListBrush@@IEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAV23@@Z @ 0x1802B5320
 * Callers:
 *     ?ReplaceSource@CNineGridDrawListBrush@@UEAAX$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1802B5310 (-ReplaceSource@CNineGridDrawListBrush@@UEAAX$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualSurfaceDrawListBrush::ReplaceSourceWorker(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *a3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a3 + 8LL))(*a3, 3LL) )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a3 + 40LL))(*a3, a2);
  result = *a3;
  v6 = *a2;
  *a2 = *a3;
  *a3 = v6;
  return result;
}
