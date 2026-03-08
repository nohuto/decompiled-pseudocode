/*
 * XREFs of ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x1800507E0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18004E7F8 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180050EE0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Copy @ 0x180105B00 (std--_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsi_ea_180105B00.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x18012ABD6 (McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer.c)
 */

void __fastcall CProcessAttributionReporter::Report(CProcessAttributionReporter *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  int v5; // [rsp+20h] [rbp-C8h]
  int v6; // [rsp+30h] [rbp-B8h]
  _QWORD v7[7]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v8; // [rsp+98h] [rbp-50h]
  _BYTE v9[56]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+D8h] [rbp-10h]

  v1 = *((_QWORD *)this + 15);
  v10 = 0LL;
  v7[0] = off_1802CB1D0;
  v8 = v7;
  v3 = *(_QWORD *)(v1 + 8);
  v10 = std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Copy(
          v7,
          v9);
  CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, v1, this, v9);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
  {
    v6 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 2;
    v5 = (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 2;
    McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer(
      v5,
      v6,
      (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2,
      *(_QWORD *)this,
      v5,
      *((_QWORD *)this + 3),
      v6,
      *((_QWORD *)this + 6),
      (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 2,
      *((_QWORD *)this + 9),
      (__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 2,
      *((_QWORD *)this + 12));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    {
      *((_QWORD *)this + 1) = *(_QWORD *)this;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
      *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
      *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
      *((_QWORD *)this + 13) = *((_QWORD *)this + 12);
    }
  }
}
