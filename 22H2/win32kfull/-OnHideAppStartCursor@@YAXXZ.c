/*
 * XREFs of ?OnHideAppStartCursor@@YAXXZ @ 0x1C0118E70
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void OnHideAppStartCursor(void)
{
  AtomicExecutionCheck *v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentThreadWin32Thread; // rax
  struct _W32PROCESS **v5; // r10
  struct _W32PROCESS *v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int *v12; // rbx
  int v13; // edx
  unsigned int v14; // r8d
  struct _W32PROCESS **v15; // r11

  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
  {
    v0 = (AtomicExecutionCheck *)gptiRit;
    if ( gptiCurrent != gptiRit )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2552LL);
    AtomicExecutionCheck::EnforceConsistency(v0);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2, v1, v3);
    v5 = &gpwpCalcFirst;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    v6 = gpwpCalcFirst;
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gpwpCalcFirst )
      goto LABEL_5;
    while ( 1 )
    {
      v12 = (unsigned int *)((char *)v6 + 12);
      v13 = *((_DWORD *)v6 + 3);
      if ( (v13 & 6) == 4 )
      {
        v14 = *((_DWORD *)v6 + 6);
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) < v14 )
          HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = *((_DWORD *)v6 + 6);
        v15 = (struct _W32PROCESS **)((char *)v6 + 32);
        v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
        if ( (int)(v7 - v14) <= 0 )
        {
          v5 = v15;
          goto LABEL_14;
        }
        *v12 = v13 & 0xFFFFFFFB;
      }
      else
      {
        v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      }
      *v5 = v6;
LABEL_14:
      if ( !v6 )
      {
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) > (unsigned int)v7 )
        {
LABEL_6:
          zzzUpdateCursorImage();
          v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
          --*(_DWORD *)(v11 + 48);
          return;
        }
LABEL_5:
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
        goto LABEL_6;
      }
    }
  }
}
