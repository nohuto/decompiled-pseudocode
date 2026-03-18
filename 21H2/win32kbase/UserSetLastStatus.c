/*
 * XREFs of UserSetLastStatus @ 0x1C00D5824
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C002FE40 (NtUserGetDpiForMonitor.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C015A740 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  ULONG v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process() )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v4 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v4, v5, v6, v7);
  }
  return result;
}
