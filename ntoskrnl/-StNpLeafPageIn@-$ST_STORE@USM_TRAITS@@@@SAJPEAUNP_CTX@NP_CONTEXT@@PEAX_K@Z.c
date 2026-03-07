__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafPageIn(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  v12 = a3 & 0xFFFFFFFC;
  while ( 1 )
  {
    result = ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(v5, &v12, a2, 0);
    if ( (int)result >= 0 )
      break;
    if ( (*(_DWORD *)(v5 + 776) & 0x2000) == 0 || (_DWORD)result != -2147483626 || v4 >= 0x1C9C380 )
      return result;
    v7 = *(_QWORD *)(v5 + 1000);
    PerformanceFrequency.QuadPart = 0LL;
    v4 += 500000LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v8 = *(_QWORD *)(v7 + 16);
    v9 = PerformanceFrequency.QuadPart * (unsigned int)(v4 / 0xA) / 1000000;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( v9 > v10 )
        v10 = v9;
      v11 = *(_DWORD *)v8 == -1;
      *(_QWORD *)(v8 + 8) = v10;
      if ( v11 )
        break;
      v8 += 32LL;
    }
    PerformanceFrequency.QuadPart = 500000LL;
    KeDelayExecutionThread(0, 0, &PerformanceFrequency);
  }
  return 0LL;
}
