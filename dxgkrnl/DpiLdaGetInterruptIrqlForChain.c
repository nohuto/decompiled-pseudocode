__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // bp
  int InterruptIrql; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // dl
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v15 = 0;
  InterruptIrql = -1073741823;
  if ( *(_BYTE *)(v2 + 508) == 1 )
  {
    v6 = v2;
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 2728);
    if ( !v7 )
    {
LABEL_15:
      InterruptIrql = -1071774666;
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
      goto LABEL_16;
    }
    v6 = *(_QWORD *)(v7 + 64);
  }
  v8 = *(_DWORD *)(v6 + 2736);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v6 + 2728);
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v9) + 64LL);
      if ( (unsigned int)(*(_DWORD *)(v11 + 236) - 1) > 1 )
        goto LABEL_15;
      v12 = *(_QWORD *)(v11 + 1288);
      if ( !v12 && !*(_BYTE *)(v2 + 2692) )
        goto LABEL_15;
      InterruptIrql = DpiFdoGetInterruptIrql(v12, &v15);
      if ( InterruptIrql >= 0 )
      {
        v13 = v3;
        if ( v3 < v15 )
          v13 = v15;
        v9 = (unsigned int)(v9 + 1);
        v3 = v13;
        if ( (unsigned int)v9 < v8 )
          continue;
      }
      break;
    }
  }
LABEL_16:
  *a2 = v3;
  return (unsigned int)InterruptIrql;
}
