/*
 * XREFs of sub_1800F54D0 @ 0x1800F54D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_1800F53AC @ 0x1800F53AC (sub_1800F53AC.c)
 */

void __fastcall sub_1800F54D0(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v6 = CoInitializeEx(0LL, 0) >= 0;
  sub_1800F53AC((__int64)Context);
  if ( v6 )
    CoUninitialize();
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(Context + 232));
  if ( !*((_DWORD *)Context + 80) )
    SetThreadpoolWait(Wait, *((HANDLE *)Context + 28), 0LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
