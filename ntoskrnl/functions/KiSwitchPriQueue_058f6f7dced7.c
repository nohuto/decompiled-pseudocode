__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD *v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, a1 + 520);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v6 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v6;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 536));
  result = a2 + 672;
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = *(_QWORD **)(a2 + 680);
  if ( *v8 != a2 + 672 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v8;
  *v8 = v3;
  *(_QWORD *)(a2 + 680) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
