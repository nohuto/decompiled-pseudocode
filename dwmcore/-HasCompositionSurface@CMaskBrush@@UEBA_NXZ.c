/*
 * XREFs of ?HasCompositionSurface@CMaskBrush@@UEBA_NXZ @ 0x180237F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::HasCompositionSurface(CMaskBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 12);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) )
    return 1;
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 248LL))(v4) )
      return 1;
  }
  return v2;
}
