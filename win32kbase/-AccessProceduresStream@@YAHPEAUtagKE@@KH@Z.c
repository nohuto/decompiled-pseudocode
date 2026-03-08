/*
 * XREFs of ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00F1F00
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E49D0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4A90 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01E5C10 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E6040 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E62D0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01E3DAC (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, signed int a3)
{
  unsigned int v3; // edi
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rbx

  v3 = a3;
  if ( (unsigned __int64)a3 >= 5 )
    return 1LL;
  for ( i = &off_1C0281D00[a3]; ; ++i )
  {
    ++v3;
    if ( !((unsigned int (__fastcall *)(struct tagKE *, _QWORD))*i)(a1, a2) )
      break;
    if ( v3 >= 5 )
      return 1LL;
  }
  InputTraceLogging::Keyboard::DropInput(11LL);
  return 0LL;
}
