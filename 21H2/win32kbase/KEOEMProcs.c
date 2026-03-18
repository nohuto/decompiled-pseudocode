/*
 * XREFs of KEOEMProcs @ 0x1C00ADB84
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 (__fastcall *v1)(struct tagKE *); // rax
  __int64 v3; // rbx

  v1 = aKEProcOEM[0];
  v3 = 0LL;
  while ( (unsigned int)v1(a1) )
  {
    v1 = aKEProcOEM[++v3];
    if ( !v1 )
      return 1LL;
  }
  return 0LL;
}
