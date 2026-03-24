/*
 * XREFs of ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01A47D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C004A824 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  bool v3; // zf
  bool v4; // sf
  unsigned int v5; // edx
  unsigned int v6; // ecx

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1416);
  result = KeWaitForMultipleObjects(
             *((_DWORD *)this + 12),
             *((PVOID **)this + 2),
             WaitAny,
             WrUserRequest,
             *((_BYTE *)this + 56),
             *((_BYTE *)this + 57),
             0LL,
             *((PKWAIT_BLOCK *)this + 3));
  v3 = result == 0;
  v4 = result < 0;
  if ( result >= 0 )
  {
    do
    {
      if ( v3 )
        break;
      v5 = *((_DWORD *)this + 10);
      v6 = *((_DWORD *)this + 13);
      if ( v5 >= v6 )
      {
LABEL_8:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2941);
        v5 = 0;
      }
      else
      {
        while ( *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v5) != *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * result) )
        {
          if ( ++v5 >= v6 )
            goto LABEL_8;
        }
      }
      LegacyInputDispatcher::Dispatch(this, v5);
      result = KeWaitForMultipleObjects(
                 *((_DWORD *)this + 12),
                 *((PVOID **)this + 2),
                 WaitAny,
                 WrUserRequest,
                 *((_BYTE *)this + 56),
                 *((_BYTE *)this + 57),
                 0LL,
                 *((PKWAIT_BLOCK *)this + 3));
      v3 = result == 0;
      v4 = result < 0;
    }
    while ( result >= 0 );
    if ( !v4 )
      result = *((_DWORD *)this + 15);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
