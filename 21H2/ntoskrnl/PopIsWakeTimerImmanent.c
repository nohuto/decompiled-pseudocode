/*
 * XREFs of PopIsWakeTimerImmanent @ 0x1408F0734
 * Callers:
 *     PopDeferDoze @ 0x1408F05A8 (PopDeferDoze.c)
 * Callees:
 *     ExGetNextWakeTime @ 0x1409B3D18 (ExGetNextWakeTime.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

bool __fastcall PopIsWakeTimerImmanent(int a1, int a2, int a3, unsigned __int64 *a4, _QWORD *a5)
{
  unsigned __int64 v6; // rsi
  void *v7; // rbx
  void *v8; // rdi
  int v9; // r11d
  bool v10; // r14
  unsigned __int64 v12; // r15
  int v13; // r10d
  char NextWakeTime; // al
  char v15; // al
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  void *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  void *v20; // [rsp+48h] [rbp-8h] BYREF
  int v22; // [rsp+A0h] [rbp+50h]
  int v23; // [rsp+B0h] [rbp+60h]

  v22 = a3;
  v6 = -1LL;
  v7 = 0LL;
  v17 = -1LL;
  v8 = 0LL;
  v19 = -1LL;
  v9 = a1;
  v18 = 0LL;
  *a5 = 0LL;
  v10 = 0;
  v20 = 0LL;
  v12 = -1LL;
  if ( qword_140C23B20 && PopDozeDeferralMaxSeconds )
  {
    v13 = qword_140C23B20 + 10000000 * PopDozeDeferralMaxSeconds;
    v23 = v13;
    if ( a2 )
    {
      LOBYTE(a3) = a2 == 2 && PopSimulate >= 0;
      NextWakeTime = ExGetNextWakeTime(a1, v13, a3, (unsigned int)&v17, (__int64)&v18);
      v6 = v17;
      v8 = v18;
      a3 = v22;
      v13 = v23;
      v9 = a1;
      v10 = NextWakeTime != 0;
    }
    if ( a3 )
    {
      LOBYTE(a3) = a3 == 2 && PopSimulate >= 0;
      v15 = ExGetNextWakeTime(v9, v13, a3, (unsigned int)&v19, (__int64)&v20);
      v12 = v19;
      v7 = v20;
      if ( v15 )
        v10 = 1;
    }
    if ( v10 )
    {
      if ( v6 > v12 )
      {
        if ( v8 )
          ExFreePoolWithTag(v8, 0x53577254u);
        *a4 = v12;
        *a5 = v7;
      }
      else
      {
        if ( v7 )
          ExFreePoolWithTag(v7, 0x53577254u);
        *a4 = v6;
        *a5 = v8;
      }
    }
  }
  return v10;
}
