__int64 __fastcall sub_14000C860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 32LL, 808465250LL);
  if ( Pool2
    && (v6 = sub_1400A5110(Pool2, a3), (v7 = (volatile signed __int32 *)v6) != 0LL)
    && (v8 = *(_QWORD *)(v6 + 16)) != 0 )
  {
    *((_QWORD *)&v10 + 1) = v7;
    *(_QWORD *)&v10 = v8;
  }
  else
  {
    v7 = 0LL;
    v10 = 0LL;
  }
  sub_1400A5180(a2, &v10);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return a2;
}
