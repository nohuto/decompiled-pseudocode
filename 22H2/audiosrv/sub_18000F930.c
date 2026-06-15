/*
 * XREFs of sub_18000F930 @ 0x18000F930
 * Callers:
 *     sub_18000BD90 @ 0x18000BD90 (sub_18000BD90.c)
 *     sub_1800F1A50 @ 0x1800F1A50 (sub_1800F1A50.c)
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 *     sub_180010CB0 @ 0x180010CB0 (sub_180010CB0.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB314 @ 0x1800CB314 (sub_1800CB314.c)
 *     sub_18012D91C @ 0x18012D91C (sub_18012D91C.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18000F930(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v16; // rbx
  __int64 v17; // rdi
  HANDLE OwningThread; // rdx
  int v19; // ebx
  DWORD v20; // eax
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdi
  LPCRITICAL_SECTION v24; // rbx
  LPCRITICAL_SECTION v25; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h]
  unsigned int v33; // [rsp+70h] [rbp-90h]
  LPVOID Context; // [rsp+78h] [rbp-88h] BYREF
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  _QWORD pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+C0h] [rbp-40h]
  const wchar_t *v43; // [rsp+C8h] [rbp-38h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  char v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+DCh] [rbp-24h]
  LPCRITICAL_SECTION v47; // [rsp+E8h] [rbp-18h]
  __int128 v48; // [rsp+F0h] [rbp-10h]
  __int128 v49; // [rsp+100h] [rbp+0h] BYREF

  v32 = a4;
  v33 = a3;
  v40 = a5;
  v39 = a6;
  v38 = a8;
  v48 = *a7;
  v49 = v48;
  EtwEventActivityIdControl(4LL, &v49);
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
  v12 = *((_QWORD *)Context + 1);
  v13 = qword_18019E5F0;
  v14 = (unsigned int)dword_18019D9F4;
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v43 = L"AudioServerInitialize_Internal";
  v44 = v13;
  v45 = 0;
  v46 = 0LL;
  if ( (unsigned int)v14 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v14 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v14 / 3, 0);
    }
  }
  v30 = 0LL;
  v36 = 0LL;
  *a10 = 0LL;
  v16 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v47 = v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    v17 = qword_18019E640;
    EnterCriticalSection(v16);
    v37 = v16;
    OwningThread = v16[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(__int64, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v17 + 24LL))(
        v17,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(__int64, HANDLE, __int64))(*(_QWORD *)v17 + 32LL))(v17, v16[3].OwningThread, 1LL);
    }
    LeaveCriticalSection(v16);
    sub_180010A50(v16);
  }
  LeaveCriticalSection(v16);
  v19 = sub_18004C840();
  if ( v19 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
            qword_18019E618,
            a1,
            &v30);
    if ( v19 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
      if ( (unsigned int)sub_180011010(v20) )
      {
        if ( !a9
          || (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30),
              (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a9 + 176LL))(a9) == v22) )
        {
          v19 = sub_180010CB0(&v36);
          v23 = v36;
          if ( !v19 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
            v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int128 *, __int64, __int64))(*(_QWORD *)v23 + 48LL))(
                    v23,
                    v30,
                    a2,
                    v33,
                    v32,
                    v40,
                    v39,
                    a7,
                    v38,
                    a9);
            if ( v19 >= 0 )
            {
              v24 = lpCriticalSection;
              EnterCriticalSection(lpCriticalSection);
              v37 = v24;
              if ( ++LODWORD(v24[1].DebugInfo) == 1 )
              {
                sub_18012D91C(v24);
                sub_180010A50(v24);
              }
              LeaveCriticalSection(v24);
              *a10 = v23;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
              v19 = 0;
            }
          }
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        else
        {
          v19 = -2147024891;
        }
      }
      else
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 5u )
        {
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
          sub_1800CB314(*((_QWORD *)off_18019C348 + 2), 43, (unsigned int)&unk_18015E3E8, v21, a2);
        }
        v19 = -2147024891;
      }
    }
  }
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v30 = 0LL;
  }
  v25 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v37 = v25;
  if ( LODWORD(v25[1].DebugInfo)-- == 1 )
    sub_1800103D4(v25);
  LeaveCriticalSection(v25);
  if ( v19 < 0 )
    sub_18005E8F8("AudioServerInitialize_Internal", 2934LL, (unsigned int)v19);
  sub_18000F690((__int64)pv, v27, v28);
  EtwEventActivityIdControl(4LL, &v49);
  return (unsigned int)v19;
}
