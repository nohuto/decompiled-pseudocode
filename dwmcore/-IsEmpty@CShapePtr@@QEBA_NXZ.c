/*
 * XREFs of ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x1800D90E8
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1800D8EBC (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CShapePtr::IsEmpty(CShapePtr *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    return 1;
  return v2;
}
