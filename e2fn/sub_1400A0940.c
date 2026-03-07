__int64 __fastcall sub_1400A0940(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbp
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1LL;
  if ( a2 )
    v4 = a2;
  sub_1400A27D4(&v10, a1[2] + 96LL);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v12 = v6;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      v7 = v11;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( a1[7] )
    v8 = a1 + 3;
  else
    v8 = (_QWORD *)a1[4];
  sub_1400AF968(a1 + 3, v8, &v12);
  *a3 = v6 * v4;
  return a1[7];
}
