/*
 * XREFs of PnpDiagnosticTraceElamStatus @ 0x14038950C
 * Callers:
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140B594E8 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v2; // rdi
  unsigned int v3; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v2 = PnpEtwHandle;
  v3 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v7;
    return (unsigned int)EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return v3;
}
