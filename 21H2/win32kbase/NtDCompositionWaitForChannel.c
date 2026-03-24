/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C009EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005DB28 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C009EE78 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(unsigned int a1, int a2, int a3)
{
  int v5; // edi
  DirectComposition::CApplicationChannel *v6; // rbx
  DirectComposition::CApplicationChannel *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
  if ( v5 >= 0 )
  {
    v6 = v8;
    if ( *((int *)v8 + 57) > 0
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v8, a2 != 0, a3 != 0) )
    {
      v5 = -1073741823;
    }
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v6)(v6);
  }
  return (unsigned int)v5;
}
