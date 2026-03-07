__int64 __fastcall sub_14000506C(__int64 a1, int a2, __int64 *a3, _QWORD *a4, int a5, int a6, int a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_1400D4838;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = a3[1];
  v9 = *a3;
  a3[1] = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v9;
  *a3 = v10;
  *(_QWORD *)(a1 + 32) = &off_1400D41D0;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 32) != a4 )
  {
    *(_QWORD *)(a1 + 48) = a4[2];
    v11 = a4[3];
    a4[2] = 0LL;
    *(_QWORD *)(a1 + 56) = v11;
    v12 = a4[4];
    a4[3] = 0LL;
    *(_QWORD *)(a1 + 64) = v12;
    a4[4] = 0LL;
  }
  if ( qword_1400DF6C0 )
    v13 = 1000000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / qword_1400DF6C0;
  else
    v13 = MEMORY[0xFFFFF78000000014] / 10LL;
  *(_DWORD *)(a1 + 80) = a6;
  *(_DWORD *)(a1 + 84) = a5;
  *(_DWORD *)(a1 + 88) = a7;
  *(_QWORD *)(a1 + 72) = v13;
  v14 = (volatile signed __int32 *)a3[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return a1;
}
