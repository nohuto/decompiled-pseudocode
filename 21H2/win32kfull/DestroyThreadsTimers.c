/*
 * XREFs of DestroyThreadsTimers @ 0x1C00E1B50
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 */

__int64 __fastcall DestroyThreadsTimers(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v4 = (_QWORD *)gtmrListHead[0];
  v11 = 0LL;
  v5 = gptiCurrent;
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v9;
  v10 = 0LL;
  while ( v4 != (_QWORD *)gtmrListHead[0] )
  {
    v6 = v10;
    v7 = v4 - 9;
    v10 = v4 - 9;
    if ( v4 != (_QWORD *)72 )
      HMLockObjectWorker(v4 - 9);
    if ( v6 )
      HMUnlockObject(v6);
    if ( v7[3] == a1 || v7[13] == a1 )
      FreeTimer((struct tagTIMER *)(v4 - 9));
    v4 = (_QWORD *)*v4;
  }
  return ThreadUnlockWorker1(a1, v5, a3);
}
