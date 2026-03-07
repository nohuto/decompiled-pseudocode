__int64 __fastcall sub_140071FCC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // [rsp+20h] [rbp-78h] BYREF
  volatile signed __int32 *v28; // [rsp+28h] [rbp-70h]
  _BYTE v29[40]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v30[40]; // [rsp+58h] [rbp-40h] BYREF

  v3 = a2[4];
  if ( !v3 )
  {
LABEL_68:
    result = 0LL;
    goto LABEL_69;
  }
  v5 = (_QWORD *)a2[1];
  if ( v5[2] != *(_QWORD *)(a1 + 72) )
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
    goto LABEL_68;
  }
  if ( v3 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 344) )
    {
      do
      {
        v9 = (_QWORD *)a2[1];
        if ( v3 == 1 )
        {
          a2[1] = 0LL;
          *a2 = 0LL;
        }
        else if ( v9 == (_QWORD *)*a2 )
        {
          *(_QWORD *)(*v9 + 8LL) = a2;
          *a2 = *v9;
        }
        else
        {
          a2[1] = v9[1];
          *(_QWORD *)v9[1] = a2;
        }
        *v9 = 0LL;
        v9[1] = 0LL;
        ExFreePool(v9);
        v3 = --a2[4];
      }
      while ( v3 );
      goto LABEL_68;
    }
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
    result = (a1 + 200) & -(__int64)(a1 != 0);
  }
  else
  {
    v10 = v5 + 1;
    if ( v5 == (_QWORD *)*a2 )
    {
      *(_QWORD *)(*v5 + 8LL) = a2;
      *a2 = *v5;
    }
    else
    {
      a2[1] = *v10;
      *(_QWORD *)*v10 = a2;
    }
    *v5 = 0LL;
    *v10 = 0LL;
    ExFreePool(v5);
    --a2[4];
    v11 = *(_QWORD *)(a1 + 248);
    v12 = v11;
    if ( *(_QWORD *)(a1 + 272) )
      v12 = a1 + 240;
    while ( v11 != v12 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = sub_1400AF780(v29, a2);
      v15 = (_QWORD *)sub_140071FCC(v13, v14);
      if ( v15 )
      {
        while ( 1 )
        {
          v21 = a2[4];
          if ( !v21 )
            break;
          v20 = (_QWORD *)a2[1];
          if ( v21 == 1 )
          {
            a2[1] = 0LL;
            *a2 = 0LL;
          }
          else if ( v20 == (_QWORD *)*a2 )
          {
            *(_QWORD *)(*v20 + 8LL) = a2;
            *a2 = *v20;
          }
          else
          {
            a2[1] = v20[1];
            *(_QWORD *)v20[1] = a2;
          }
          *v20 = 0LL;
          v20[1] = 0LL;
          ExFreePool(v20);
          --a2[4];
        }
        goto LABEL_45;
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    v16 = *(_QWORD *)(a1 + 320);
    v17 = a1 + 280;
    v18 = *(_QWORD *)(a1 + 288);
    v19 = v18;
    if ( v16 )
      v19 = v17;
    while ( 1 )
    {
      if ( v18 == v19 )
      {
        while ( a2[4] )
          sub_1400A4398(a2, a2[1]);
        goto LABEL_68;
      }
      sub_1400A27D4(&v27, v18 + 16);
      v22 = (_QWORD *)sub_1400AF780(v30, a2);
      v15 = sub_140071D2C(v27, v22);
      if ( v15 )
        break;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          v23 = v28;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      v18 = *(_QWORD *)(v18 + 8);
    }
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        v24 = v28;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    while ( 1 )
    {
      v26 = a2[4];
      if ( !v26 )
        break;
      v25 = (_QWORD *)a2[1];
      if ( v26 == 1 )
      {
        a2[1] = 0LL;
        *a2 = 0LL;
      }
      else if ( v25 == (_QWORD *)*a2 )
      {
        *(_QWORD *)(*v25 + 8LL) = a2;
        *a2 = *v25;
      }
      else
      {
        a2[1] = v25[1];
        *(_QWORD *)v25[1] = a2;
      }
      *v25 = 0LL;
      v25[1] = 0LL;
      ExFreePool(v25);
      --a2[4];
    }
LABEL_45:
    result = (__int64)v15;
  }
LABEL_69:
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
