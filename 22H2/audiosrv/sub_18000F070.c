/*
 * XREFs of sub_18000F070 @ 0x18000F070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000F070(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  WINBOOL v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-58h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-50h] BYREF
  DWORD v19; // [rsp+58h] [rbp-40h]
  const wchar_t *v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+68h] [rbp-30h]
  char v22; // [rsp+70h] [rbp-28h]
  __int64 v23; // [rsp+74h] [rbp-24h]

  v9 = 0;
  v16 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &v15, (LPVOID *)&v16) && v15 )
  {
    v16 = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v10 = qword_18019E5F0;
  v11 = (unsigned int)dword_18019D9F4;
  pv[1] = v16[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v21 = v10;
  v19 = CurrentThreadId;
  v20 = L"s_pbmReportHostedAppStateChange";
  v22 = 0;
  v23 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v11 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
    v9 = PbmReportHostedAppStateChange(a1, a2, a3, a4, a5);
  sub_18000F690(pv);
  return v9;
}
