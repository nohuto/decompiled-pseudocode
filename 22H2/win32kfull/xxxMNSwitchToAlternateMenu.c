/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C023B334
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02372E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C025046C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp+7h] BYREF
  __int128 v14; // [rsp+58h] [rbp+17h]
  __int128 v15; // [rsp+68h] [rbp+27h] BYREF
  _QWORD v16[4]; // [rsp+78h] [rbp+37h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+67h] BYREF

  v17 = 0LL;
  v16[2] = 0LL;
  if ( (*(_DWORD *)**a1 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v4 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v16;
  v16[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxMNSelectItem(a1, a2, -1);
  v6 = **a1;
  if ( !*(_QWORD *)(v6 + 48) )
  {
    ThreadUnlock1(v6);
    return 0LL;
  }
  v8 = *a1;
  v12[0] = &v17;
  v12[1] = *(_QWORD *)(*v8 + 48);
  HMAssignmentLock(v12);
  v9 = *(_QWORD *)(**a1 + 40);
  v13[0] = **a1 + 48;
  v13[1] = v9;
  HMAssignmentLock(v13);
  *(_QWORD *)&v14 = **a1 + 40;
  *((_QWORD *)&v14 + 1) = v17;
  v15 = v14;
  HMAssignmentLock(&v15);
  HMAssignmentUnlock(&v17);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v10 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v10 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v10;
    }
    else
    {
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) >> 6)) & 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v11);
  return 1LL;
}
