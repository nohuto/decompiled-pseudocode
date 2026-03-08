/*
 * XREFs of ?HasCompositionSurface@CDropShadow@@UEBA_NXZ @ 0x180226FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::HasCompositionSurface(CDropShadow *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v2 = *((_QWORD *)this + 22);
    if ( v2 )
      return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 248LL))(v2) != 0;
  }
  return v1;
}
