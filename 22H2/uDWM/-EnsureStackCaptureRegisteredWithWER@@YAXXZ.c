/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180004588
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x180004454 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v2)(volatile int *, __int64); // rbx

  if ( !_InterlockedCompareExchange(&dword_1800E4168, 1, 0) )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
      v2 = (void (__fastcall *)(volatile int *, __int64))ProcAddress;
      if ( ProcAddress )
      {
        ((void (__fastcall *)(_DWORD *, __int64))ProcAddress)(g_StackCaptureFrames, 10240LL);
        v2(&g_nCurrentStackCaptureIndex, 4LL);
      }
    }
  }
}
