/*
 * XREFs of _guard_dispatch_icall_nop @ 0x180006350
 * Callers:
 *     _tlgEnableCallback @ 0x180001010 (_tlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002808 (-FallBackToBDD@@YA_NXZ.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x180003DB4 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040BC (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004154 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000446C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     __scrt_dllmain_exception_filter @ 0x180004F6C (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_process_attach @ 0x180005DB8 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x180005F60 (dllmain_dispatch.c)
 *     _RTC_Initialize @ 0x1800061F0 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x180006234 (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
