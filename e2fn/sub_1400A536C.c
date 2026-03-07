__int64 *__fastcall sub_1400A536C(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1400A5180(v9, a2);
  v4 = v3[1];
  v3[1] = a1[1];
  v5 = *a1;
  a1[1] = v4;
  v6 = *v3;
  *v3 = v5;
  v7 = (volatile signed __int32 *)v9[1];
  *a1 = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return a1;
}
