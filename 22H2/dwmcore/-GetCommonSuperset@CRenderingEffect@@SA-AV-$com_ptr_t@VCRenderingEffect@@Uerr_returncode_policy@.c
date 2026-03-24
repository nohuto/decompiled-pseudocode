/*
 * XREFs of ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x1800183BC
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800C058C (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001C49C (-reset@-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C0490 (--1-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CRenderingEffect::GetCommonSuperset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *, __int64, char *))(*(_QWORD *)a2 + 80LL))(a2, &v7, a3, &v6);
  if ( !v6 )
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::reset(&v7);
  v4 = v7;
  v7 = 0LL;
  *a1 = v4;
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(&v7);
  return a1;
}
