/*
 * XREFs of ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18004DA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::numpunct<unsigned short>::_Init(_QWORD *a1)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v7; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  HANDLE OwningThread; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  WINBOOL fPending; // [rsp+40h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-31h] BYREF
  _QWORD pv[2]; // [rsp+50h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-19h]
  const wchar_t *v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  char v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+7Ch] [rbp+3h]
  struct _FILETIME pftDueTime[2]; // [rsp+88h] [rbp+Fh] BYREF
  __int128 v24; // [rsp+98h] [rbp+1Fh]
  __int128 v25; // [rsp+A8h] [rbp+2Fh] BYREF

  if ( *a1 )
    v2 = *(_OWORD *)(*a1 + 280LL);
  else
    v2 = xmmword_18015B730;
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = v2;
  v24 = v2;
  v25 = v2;
  EtwEventActivityIdControl(4LL, &v25);
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
  v3 = *((_QWORD *)Context + 1);
  v4 = qword_18019E5F0;
  v5 = (unsigned int)dword_18019D9F4;
  pv[0] = 0LL;
  pv[1] = v3;
  CurrentThreadId = GetCurrentThreadId();
  v19 = L"AudioServerDisconnect";
  v20 = v4;
  v21 = 0;
  v22 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = 0LL;
  v7 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
  {
    v9 = qword_18019E640;
    if ( !v7[3].OwningThread )
      v7[3].OwningThread = (HANDLE)(*(__int64 (__fastcall **)(__int64, void (__fastcall *)(__int64, __int64), LPCRITICAL_SECTION))(*(_QWORD *)qword_18019E640 + 8LL))(
                                     qword_18019E640,
                                     sub_180003E50,
                                     v7);
    LODWORD(Context) = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
           L"AudioDGInactiveTimeout",
           0x18u,
           0LL,
           &fPending,
           (LPDWORD)&Context) )
    {
      v10 = 300LL;
      fPending = 300;
    }
    else
    {
      v10 = (unsigned int)fPending;
    }
    OwningThread = v7[3].OwningThread;
    if ( OwningThread )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000000 * v10);
      (*(void (__fastcall **)(__int64, HANDLE, struct _FILETIME *, _QWORD, _DWORD))(*(_QWORD *)v9 + 24LL))(
        v9,
        OwningThread,
        pftDueTime,
        0LL,
        0);
    }
  }
  LeaveCriticalSection(v7);
  sub_18000F690((__int64)pv, v12, v13);
  EtwEventActivityIdControl(4LL, &v25);
  return 0LL;
}
