/*
 * XREFs of sub_180140C80 @ 0x180140C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_180140B5C @ 0x180140B5C (sub_180140B5C.c)
 */

void __fastcall sub_180140C80(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( Context )
  {
    v6 = CoInitializeEx(0LL, 0) >= 0;
    sub_180140B5C((__int64)Context);
    if ( v6 )
      CoUninitialize();
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(Context + 48));
    if ( !*((_DWORD *)Context + 44) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 5), 0LL);
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
