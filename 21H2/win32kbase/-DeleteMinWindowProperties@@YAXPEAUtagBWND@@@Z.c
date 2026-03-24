/*
 * XREFs of ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0138BE8
 * Callers:
 *     DestroyBaseWindow @ 0x1C0138D20 (DestroyBaseWindow.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteMinWindowProperties(struct tagBWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = v2 + 8;
    if ( *(_DWORD *)(v2 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v4 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
        else
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 247);
        v4 += 16LL;
        --v3;
      }
      while ( v3 );
      v2 = *((_QWORD *)a1 + 10);
    }
    Win32FreePool(v2);
    *((_QWORD *)a1 + 10) = 0LL;
  }
}
