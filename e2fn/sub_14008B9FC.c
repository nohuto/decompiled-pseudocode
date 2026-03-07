__int64 sub_14008B9FC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // rbx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r14
  _QWORD *v12; // rdx
  volatile signed __int32 *v13; // rdi
  _BYTE v15[8]; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v18; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall **v19)(PVOID); // [rsp+50h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+D0h] [rbp+50h] BYREF
  va_list va; // [rsp+D0h] [rbp+50h]
  va_list va1; // [rsp+D8h] [rbp+58h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v24 = va_arg(va1, _QWORD);
  v4 = a1[7];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v8 = sub_140046AD8((__int64)a1, &v17, a2);
  v9 = v18;
  v10 = 0;
  v11 = *v8;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( v11 )
  {
    v10 = -1073741525;
  }
  else
  {
    v19 = off_1400D4D58;
    v21 = 0LL;
    v22 = 0LL;
    *(_OWORD *)P = 0LL;
    sub_14008BC70(&v19, a3, a4);
    sub_1400B303C((unsigned int)v15, 808464435, (unsigned int)&v19, a2, (__int64)va, (__int64)va1);
    if ( a1[14] )
      v12 = a1 + 9;
    else
      v12 = (_QWORD *)a1[10];
    sub_1400A440C(a1 + 9, v12, v15);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = v16;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    if ( P[0] )
      ExFreePool(P[0]);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  return v10;
}
