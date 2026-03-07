void __fastcall ShellWindowPos::FreePositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 8) < 2u )
  {
    v2 = (void *)*((_QWORD *)this + 5);
    if ( v2 )
      Win32FreePool(v2);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1009);
  }
}
