__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 UnbiasedInterruptTime; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v9 = UnbiasedInterruptTime;
  if ( (_DWORD)v5 == -1 )
  {
    v10 = -1LL;
    v11 = -1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24 * v8 + 16) = UnbiasedInterruptTime;
    v10 = UnbiasedInterruptTime + 10000 * v5;
    v11 = 10000 * v6;
  }
  *(_QWORD *)(a1 + 24 * v8) = v11;
  *(_QWORD *)(a1 + 24 * v8 + 8) = v10;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 1) == 0 )
    return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, v9);
  return result;
}
