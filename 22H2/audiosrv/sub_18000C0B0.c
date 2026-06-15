/*
 * XREFs of sub_18000C0B0 @ 0x18000C0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000C0B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v8; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]
  int v17; // [rsp+58h] [rbp-8h]
  WINBOOL fPending; // [rsp+90h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+38h] BYREF

  if ( !(unsigned int)IsTSUnregisterAudioProtocolNotificationSupported() )
    return 1LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v4 = qword_18019E5F0;
  v5 = (unsigned int)dword_18019D9F4;
  v6 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  v16 = 0;
  v17 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"s_tsUnregisterAudioProtocolNotification";
  v14 = v4;
  v15 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v8 = TS_UnregisterAudioProtocolNotification(a1, a2);
  sub_18000F690(pv);
  return v8;
}
