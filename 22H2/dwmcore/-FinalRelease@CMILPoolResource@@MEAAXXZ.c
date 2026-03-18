/*
 * XREFs of ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x1800F9E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMILPoolResource::FinalRelease(CMILPoolResource *this)
{
  void (__fastcall ***v2)(_QWORD, CMILPoolResource *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, CMILPoolResource *))*((_QWORD *)this + 3);
  if ( v2 )
    (**v2)(v2, this);
}
