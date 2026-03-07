__int64 __fastcall sub_140061900(int a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  char v9; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-10h]

  v6 = sub_1400AD944((unsigned int)&v9, a1 - 352, a3, a4, a5);
  sub_1400AD8A0(a2, v6);
  v7 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return a2;
}
