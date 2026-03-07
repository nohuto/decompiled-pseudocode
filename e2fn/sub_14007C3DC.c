__int64 __fastcall sub_14007C3DC(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi

  v3 = a1;
  if ( *a2 )
  {
    v6 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(v3 + 376) = a2[1];
    v7 = *a2;
    a2[1] = v6;
    v8 = *(_QWORD *)(v3 + 368);
    *(_QWORD *)(v3 + 368) = v7;
    *a2 = v8;
    v9 = (volatile signed __int32 *)a2[1];
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    return 0LL;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v3) = 2;
      sub_1400A3054(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        v3,
        10,
        10,
        (__int64)&unk_1400D9888,
        (__int64)L"mmioAccessor");
    }
    v4 = (volatile signed __int32 *)a2[1];
    if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 8LL))(v4, v3);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return 3221225485LL;
  }
}
