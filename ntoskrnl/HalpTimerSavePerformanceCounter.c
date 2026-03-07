__int64 HalpTimerSavePerformanceCounter()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r11
  signed __int64 v6; // rax
  int v7; // r9d
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  signed __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 InternalData; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  signed __int64 v21; // rax
  int v22; // r8d
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  signed __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  signed __int32 v30[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = HalpPerformanceCounter;
  v1 = -1LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
    v14 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(InternalData);
    v2 = *(_QWORD *)(v0 + 208);
    v11 = v14;
  }
  else
  {
    do
    {
      v2 = *(_QWORD *)(v0 + 208);
      do
      {
        v3 = *(_QWORD *)(v0 + 200);
        v4 = HalpTimerGetInternalData(v0);
        v5 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(v4);
        _InterlockedOr(v30, 0);
        v6 = *(_QWORD *)(v0 + 200);
      }
      while ( v3 != v6 );
    }
    while ( v2 != *(_QWORD *)(v0 + 208) );
    v7 = *(_DWORD *)(v0 + 220);
    v8 = v3 ^ v5;
    if ( _bittest64((const __int64 *)&v8, (unsigned __int8)(v7 - 1)) )
    {
      v9 = -1LL;
      if ( v7 != 64 )
        v9 = (1LL << v7) - 1;
      v10 = v3 & v9;
      v11 = v5 | v3 ^ v10;
      if ( v5 < v10 )
        v11 += 1LL << v7;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v11, v6);
    }
    else
    {
      if ( v7 == 64 )
        v12 = -1LL;
      else
        v12 = (1LL << v7) - 1;
      v11 = v5 | v3 & ~v12;
    }
  }
  result = v2 + v11;
  *(_QWORD *)(v0 + 16) = v2 + v11;
  v16 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      v28 = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v29 = (*(__int64 (__fastcall **)(__int64))(v16 + 112))(v28);
      v17 = *(_QWORD *)(v16 + 208);
      v26 = v29;
    }
    else
    {
      do
      {
        v17 = *(_QWORD *)(v16 + 208);
        do
        {
          v18 = *(_QWORD *)(v16 + 200);
          v19 = HalpTimerGetInternalData(v16);
          v20 = (*(__int64 (__fastcall **)(__int64))(v16 + 112))(v19);
          _InterlockedOr(v30, 0);
          v21 = *(_QWORD *)(v16 + 200);
        }
        while ( v18 != v21 );
      }
      while ( v17 != *(_QWORD *)(v16 + 208) );
      v22 = *(_DWORD *)(v16 + 220);
      v23 = v18 ^ v20;
      if ( _bittest64((const __int64 *)&v23, (unsigned __int8)(v22 - 1)) )
      {
        v24 = 1LL << v22;
        if ( v22 != 64 )
          v1 = v24 - 1;
        v25 = v18 & v1;
        v26 = v20 | v18 ^ v25;
        if ( v20 < v25 )
          v26 += v24;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 200), v26, v21);
      }
      else
      {
        if ( v22 == 64 )
          v27 = -1LL;
        else
          v27 = (1LL << v22) - 1;
        v26 = v20 | v18 & ~v27;
      }
    }
    result = v17 + v26;
    *(_QWORD *)(v16 + 16) = v17 + v26;
  }
  return result;
}
