/*
 * XREFs of UserSetLastStatus @ 0x1C00CDAF4
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C005DE70 (NtUserGetDpiForMonitor.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0145720 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA50 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  ULONG v4; // eax

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
    return UserSetLastError(v4);
  }
  return result;
}
