/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1800C1AC4
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800C1910 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x1801B1720 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B1904 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18022A8E0 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
