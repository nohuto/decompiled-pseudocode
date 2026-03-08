/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x1800D4BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 32);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 56LL))(v1, 129LL) != 0;
  return v2;
}
