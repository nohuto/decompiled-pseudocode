/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C00B02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00269C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C00B0364 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(unsigned int a1, int a2)
{
  int v3; // edi
  DirectComposition::CApplicationChannel *v4; // rbx
  DirectComposition::CApplicationChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( *((int *)v6 + 57) > 0
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v6, a2 != 0) )
    {
      v3 = -1073741823;
    }
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
