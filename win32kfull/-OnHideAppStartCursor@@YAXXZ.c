void OnHideAppStartCursor(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  struct _W32PROCESS **v5; // r10
  struct _W32PROCESS *v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int *v10; // rbx
  int v11; // edx
  unsigned int v12; // r8d
  struct _W32PROCESS **v13; // r11

  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
  {
    v0 = gptiRit;
    if ( gptiCurrent != gptiRit )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2552LL);
    if ( !*(_QWORD *)(SGDGetUserSessionState(v0) + 8)
      || (v2 = SGDGetUserSessionState(v1), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8))) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v5 = &gpwpCalcFirst;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    v6 = gpwpCalcFirst;
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gpwpCalcFirst )
      goto LABEL_7;
    while ( 1 )
    {
      v10 = (unsigned int *)((char *)v6 + 12);
      v11 = *((_DWORD *)v6 + 3);
      if ( (v11 & 6) == 4 )
      {
        v12 = *((_DWORD *)v6 + 6);
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) < v12 )
          HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = *((_DWORD *)v6 + 6);
        v13 = (struct _W32PROCESS **)((char *)v6 + 32);
        v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
        if ( (int)(v7 - v12) <= 0 )
        {
          v5 = v13;
          goto LABEL_16;
        }
        *v10 = v11 & 0xFFFFFFFB;
      }
      else
      {
        v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      }
      *v5 = v6;
LABEL_16:
      if ( !v6 )
      {
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) > (unsigned int)v7 )
        {
LABEL_8:
          zzzUpdateCursorImage();
          v9 = PsGetCurrentThreadWin32Thread(v8);
          --*(_DWORD *)(v9 + 48);
          return;
        }
LABEL_7:
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
        goto LABEL_8;
      }
    }
  }
}
