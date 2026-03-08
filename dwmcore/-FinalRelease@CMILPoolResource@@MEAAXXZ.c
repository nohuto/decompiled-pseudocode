/*
 * XREFs of ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x1800F91C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMILPoolResource::FinalRelease(CMILPoolResource *this)
{
  void (__fastcall ***v2)(_QWORD, CMILPoolResource *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, CMILPoolResource *))*((_QWORD *)this + 3);
  if ( v2 )
    (**v2)(v2, this);
}
