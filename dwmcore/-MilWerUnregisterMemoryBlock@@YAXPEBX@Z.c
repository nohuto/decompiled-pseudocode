/*
 * XREFs of ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x180278C80
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MilWerUnregisterMemoryBlock(const void *a1)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerUnregisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *))ProcAddress)(a1);
  }
}
