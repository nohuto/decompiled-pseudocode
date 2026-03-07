__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(_QWORD *a1, unsigned __int64 UnbiasedInterruptTime)
{
  __int64 v2; // r11
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *i; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = 0LL;
  if ( !UnbiasedInterruptTime )
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v4 = -1LL;
  v5 = a1 + 21;
  v6 = -1LL;
  for ( i = a1; i < v5; i += 3 )
  {
    v8 = i[1];
    if ( v8 != -1LL )
    {
      v9 = i[2];
      if ( v9 < UnbiasedInterruptTime - a1[23] )
        v9 = UnbiasedInterruptTime - a1[23];
      v10 = *i + v9;
      if ( v10 >= v4 )
        v10 = v4;
      v4 = v10;
      if ( v8 < v6 )
        v6 = i[1];
    }
  }
  v11 = UnbiasedInterruptTime;
  v12 = UnbiasedInterruptTime;
  if ( v4 >= UnbiasedInterruptTime )
    v11 = v4;
  if ( v6 >= UnbiasedInterruptTime )
    v12 = v6;
  *v5 = v12;
  if ( v12 == -1LL )
  {
    a1[22] = v2;
  }
  else
  {
    v13 = v12 - UnbiasedInterruptTime;
    if ( v12 >= v11 )
      v13 = v11 - UnbiasedInterruptTime;
    a1[22] = v13;
    if ( v13 )
    {
      v2 = v13;
    }
    else
    {
      a1[22] = 1LL;
      v2 = 1LL;
    }
  }
  result = *(a1 - 715);
  *(_QWORD *)(result + 6600) = -v2;
  return result;
}
