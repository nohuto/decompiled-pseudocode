__int64 xxxCancelTracking()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v5; // r15
  int v6; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD v12[84]; // [rsp+20h] [rbp-2C8h] BYREF

  memset_0(v12, 0, 0x60uLL);
  v2 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v5 = i - 93;
    if ( *(i - 9) )
    {
      if ( (unsigned int)v2 < 0xC )
      {
        LockW32Thread((__int64)(i - 93), &v12[3 * v2 + 48]);
        v7 = &v12[3 * v2 + 12];
        v8 = *(_QWORD *)(v5[84] + 16LL);
        *v7 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v7;
        v12[3 * v2 + 13] = v8;
        result = HMLockObject(v8);
        v12[v2] = v5;
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  v6 = v2 - 1;
  if ( (int)v2 - 1 >= 0 )
  {
    v9 = &v12[v6];
    v10 = &v12[3 * v6 + 48];
    do
    {
      v11 = *v9;
      if ( (*(_DWORD *)(*v9 + 488LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v11, v0, v1);
      result = PopAndFreeW32ThreadLock((__int64)v10);
      v10 -= 3;
      --v9;
      --v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}
