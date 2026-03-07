void __fastcall RemoveSemiMaximizedState(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && !HasMaximizedState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 540LL);
  *((_DWORD *)a1 + 80) &= 0xF3FFFFFF;
  SetOrClrWF(0, (__int64 *)a1, 0xD910u, 1);
}
