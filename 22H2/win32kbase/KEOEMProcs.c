/*
 * XREFs of KEOEMProcs @ 0x1C00AF534
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B8C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

char __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 (__fastcall *v1)(struct tagKE *); // rax
  __int64 v3; // rbx

  v1 = aKEProcOEM[0];
  v3 = 0LL;
  while ( (unsigned int)v1(a1) )
  {
    v1 = aKEProcOEM[++v3];
    if ( !v1 )
      return 1;
  }
  InputTraceLogging::Keyboard::DropInput(12LL);
  return 0;
}
