_QWORD *__fastcall sub_140071D2C(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *result; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-40h]
  char v19[48]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2[4];
  if ( !v3 )
  {
LABEL_46:
    result = 0LL;
    goto LABEL_47;
  }
  v5 = (_QWORD *)a2[1];
  if ( v5[2] != a1[4] )
  {
    do
    {
      v6 = (_QWORD *)a2[1];
      if ( v3 == 1 )
      {
        a2[1] = 0LL;
        *a2 = 0LL;
      }
      else if ( v6 == (_QWORD *)*a2 )
      {
        *(_QWORD *)(*v6 + 8LL) = a2;
        *a2 = *v6;
      }
      else
      {
        a2[1] = v6[1];
        *(_QWORD *)v6[1] = a2;
      }
      *v6 = 0LL;
      v6[1] = 0LL;
      ExFreePool(v6);
      v3 = --a2[4];
    }
    while ( v3 );
    goto LABEL_46;
  }
  if ( v3 == 1 )
  {
    do
    {
      v7 = (_QWORD *)a2[1];
      if ( v3 == 1 )
      {
        a2[1] = 0LL;
        *a2 = 0LL;
      }
      else if ( v7 == (_QWORD *)*a2 )
      {
        *(_QWORD *)(*v7 + 8LL) = a2;
        *a2 = *v7;
      }
      else
      {
        a2[1] = v7[1];
        *(_QWORD *)v7[1] = a2;
      }
      *v7 = 0LL;
      v7[1] = 0LL;
      ExFreePool(v7);
      v3 = --a2[4];
    }
    while ( v3 );
  }
  else
  {
    v9 = v5 + 1;
    if ( v5 == (_QWORD *)*a2 )
    {
      *(_QWORD *)(*v5 + 8LL) = a2;
      *a2 = *v5;
    }
    else
    {
      a2[1] = *v9;
      *(_QWORD *)*v9 = a2;
    }
    *v5 = 0LL;
    *v9 = 0LL;
    ExFreePool(v5);
    --a2[4];
    v10 = (_QWORD *)a1[11];
    v11 = v10;
    if ( a1[15] )
      v11 = a1 + 10;
    while ( 1 )
    {
      if ( v10 == v11 )
      {
        while ( a2[4] )
          sub_1400A4398(a2, a2[1]);
        goto LABEL_46;
      }
      sub_1400A27D4(&v17, v10 + 2);
      v12 = sub_1400AF780(v19, a2);
      a1 = (_QWORD *)sub_140071D2C(v17, v12);
      if ( a1 )
        break;
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          v13 = v18;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      v10 = (_QWORD *)v10[1];
    }
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v18;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    while ( 1 )
    {
      v16 = a2[4];
      if ( !v16 )
        break;
      v15 = (_QWORD *)a2[1];
      if ( v16 == 1 )
      {
        a2[1] = 0LL;
        *a2 = 0LL;
      }
      else if ( v15 == (_QWORD *)*a2 )
      {
        *(_QWORD *)(*v15 + 8LL) = a2;
        *a2 = *v15;
      }
      else
      {
        a2[1] = v15[1];
        *(_QWORD *)v15[1] = a2;
      }
      *v15 = 0LL;
      v15[1] = 0LL;
      ExFreePool(v15);
      --a2[4];
    }
  }
  result = a1;
LABEL_47:
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
