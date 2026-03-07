__int64 __fastcall sub_14009E470(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  _QWORD *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx

  *(_QWORD *)a1 = &off_1400DA530;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = off_1400DA548;
  v6 = (_QWORD *)(a1 + 16);
  v6[2] = 0LL;
  *v6 = &off_1400D41D0;
  v6[3] = 0LL;
  v6[4] = 0LL;
  if ( v6 != a2 )
    sub_1400011A8(v6, a2[2], a2[3]);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 72) = a4[1];
  v8 = *a4;
  a4[1] = 0LL;
  v9 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v8;
  *a4 = v9;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return a1;
}
