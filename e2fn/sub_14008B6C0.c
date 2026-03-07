__int64 __fastcall sub_14008B6C0(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // esi
  __int64 v12; // rax
  _QWORD *v13; // rdx
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-30h]
  char v19; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = a4;
  v5 = a1[7];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  sub_140040C5C((__int64)a1, &v17, a2);
  if ( !v17 )
  {
    v12 = sub_1400B2F3C((unsigned int)&v19, 808464434, a3, a2, (__int64)&v21, (__int64)&a5);
    if ( a1[14] )
      v13 = a1 + 9;
    else
      v13 = (_QWORD *)a1[10];
    sub_1400A440C(a1 + 9, v13, v12);
    v14 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    goto LABEL_16;
  }
  v9 = *(_DWORD *)(v17 + 64);
  if ( !v9 )
    goto LABEL_8;
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *(_QWORD *)(v17 + 72) == a5 )
      goto LABEL_6;
LABEL_8:
    v11 = -1073741790;
    goto LABEL_17;
  }
  if ( v10 == 1 )
  {
LABEL_6:
    *(_BYTE *)(v17 + 16) = *(_BYTE *)(a3 + 8);
LABEL_16:
    v11 = 0;
    goto LABEL_17;
  }
  v11 = -1073741811;
LABEL_17:
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      v15 = v18;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  return v11;
}
