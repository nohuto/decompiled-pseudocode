/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C026F750
 * Callers:
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C026F804 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C026FFC0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this)
{
  HANDLE *v1; // rdi
  void *v3; // rcx
  char *v4; // rdx
  char *v5; // rdx

  v1 = (HANDLE *)((char *)this + 16);
  if ( qword_1C02D7270 )
    qword_1C02D7270((char *)this + 16);
  if ( *v1 )
  {
    ZwClose(*v1);
    *v1 = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  v4 = (char *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( !*((_DWORD *)this + 16) )
    *((_QWORD *)this + 1) = 0LL;
}
