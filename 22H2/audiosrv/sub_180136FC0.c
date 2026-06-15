/*
 * XREFs of sub_180136FC0 @ 0x180136FC0
 * Callers:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_1801349C4 @ 0x1801349C4 (sub_1801349C4.c)
 */

void __fastcall sub_180136FC0(char *pv, struct _FILETIME a2)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  signed int v6; // [rsp+30h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-48h] BYREF
  signed int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  sub_1801349C4((__int64)pv);
  pftDueTime = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_1800364B0, pv, 0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x7530u);
    *((struct _FILETIME *)pv + 29) = a2;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)dword_18019C4F0 > 5 )
    {
      v11 = 0;
      v6 = LastError;
      v10 = 4;
      v9 = &v6;
      sub_180109634((__int64)&dword_18019C4F0, (unsigned __int8 *)dword_18016C51D, 0LL, 0LL, 3u, &v8);
    }
  }
  if ( pv != (char *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(pv + 56));
}
