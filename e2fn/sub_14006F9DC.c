_QWORD *__fastcall sub_14006F9DC(_QWORD *a1, int a2, __int64 *a3, __int64 *a4, __int64 a5, int a6)
{
  __int64 v6; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-18h] BYREF

  v6 = a4[1];
  a4[1] = 0LL;
  v16[1] = v6;
  v10 = *a4;
  *a4 = 0LL;
  v16[0] = v10;
  v11 = a3[1];
  a3[1] = 0LL;
  v17[1] = v11;
  v12 = *a3;
  *a3 = 0LL;
  v17[0] = v12;
  sub_14006FB0C((_DWORD)a1, a2, (unsigned int)v17, (unsigned int)v16, 0, 0, a5, a6);
  *a1 = &off_1400D9010;
  a1[52] = 0xA5A5A5A5A500008CuLL;
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a4[1];
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
