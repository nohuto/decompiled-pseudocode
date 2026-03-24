/*
 * XREFs of ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ @ 0x18001A790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CNineGridBrush::ShouldSnapToPixels(CNineGridBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 312LL))(v1) != 0;
  return v2;
}
