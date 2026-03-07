__int64 __fastcall sub_1400051B8(__int64 a1, int a2, __int64 *a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &off_1400D4838;
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
  if ( a1 + 32 != a4 )
    sub_1400011A8((_QWORD *)(a1 + 32), *(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24));
  if ( qword_1400DF6C0 )
    v11 = 1000000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / qword_1400DF6C0;
  else
    v11 = MEMORY[0xFFFFF78000000014] / 10LL;
  *(_DWORD *)(a1 + 80) = a6;
  *(_DWORD *)(a1 + 84) = a5;
  *(_DWORD *)(a1 + 88) = a7;
  *(_QWORD *)(a1 + 72) = v11;
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return a1;
}
