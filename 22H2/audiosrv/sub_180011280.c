/*
 * XREFs of sub_180011280 @ 0x180011280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011280(__int64 a1, __int64 a2, unsigned int a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rdi
  __int64 v8; // rsi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned int v14; // edi
  WINBOOL fPending; // [rsp+20h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-49h] BYREF
  DWORD v19; // [rsp+40h] [rbp-39h]
  const wchar_t *v20; // [rsp+48h] [rbp-31h]
  __int64 v21; // [rsp+50h] [rbp-29h]
  char v22; // [rsp+58h] [rbp-21h]
  __int64 v23; // [rsp+5Ch] [rbp-1Dh]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v25; // [rsp+78h] [rbp-1h]
  __int128 v26; // [rsp+88h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a1 )
    v6 = *(_OWORD *)(a1 + 280);
  else
    v6 = xmmword_18015B730;
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = v6;
  v25 = v6;
  v26 = v6;
  EtwEventActivityIdControl(4LL, &v26);
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
  v7 = qword_18019E5F0;
  v8 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v21 = v7;
  v19 = CurrentThreadId;
  v20 = L"AudioServerStopStream";
  v22 = 0;
  v23 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  v14 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -2005139336 && v11 != -2004287484 )
      sub_18004BD84(retaddr, 3324LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v11);
  }
  else
  {
    *(_DWORD *)(a1 + 272) = 0;
    v14 = 0;
  }
  sub_18000F690((__int64)pv, v12, v13);
  EtwEventActivityIdControl(4LL, &v26);
  return v14;
}
