/*
 * XREFs of sub_18007DF60 @ 0x18007DF60
 * Callers:
 *     sub_18007EA90 @ 0x18007EA90 (sub_18007EA90.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_18006CF10 @ 0x18006CF10 (sub_18006CF10.c)
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 *     sub_180083800 @ 0x180083800 (sub_180083800.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007DF60(_QWORD *a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  _QWORD *v4; // rsi
  _QWORD *j; // rdi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rcx
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rcx
  __int64 result; // rax
  volatile signed __int32 *v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-28h] BYREF

  *a1 = &Spectre::Engine::SceneNode::`vftable';
  sub_180083800();
  v2 = (_QWORD *)a1[5];
  for ( i = (_QWORD *)a1[4]; i != v2; i += 2 )
  {
    v31 = 0LL;
    sub_1800821F4(*i, &v31);
  }
  v4 = (_QWORD *)a1[48];
  for ( j = (_QWORD *)a1[47]; j != v4; j += 2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 112LL))(*j);
  v6 = a1[73];
  if ( v6 )
  {
    a1[73] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (volatile signed __int32 *)a1[72];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[70];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a1[68];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a1[66];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a1[64];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a1[62];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = (volatile signed __int32 *)a1[60];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a1[58];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_18006CF10(a1 + 54, (__int64)(a1 + 54));
  v15 = a1[53];
  if ( v15 >= 0x10 )
  {
    v16 = v15 + 1;
    v17 = a1[50];
    if ( v16 >= 0x1000 )
    {
      v18 = v16 + 39;
      v19 = *(_QWORD *)(v17 - 8);
      v20 = v17 - v19;
      if ( (unsigned __int64)(v20 - 8) > 0x1F )
        goto LABEL_70;
      v17 = v19;
    }
    j_j__o_free(v17);
  }
  a1[52] = 0LL;
  a1[53] = 15LL;
  *((_BYTE *)a1 + 400) = 0;
  sub_180012938(a1 + 47);
  v21 = a1[23];
  if ( !v21 )
    goto LABEL_51;
  v22 = (a1[25] - v21) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v22 >= 0x1000 )
  {
    v18 = v22 + 39;
    v23 = *(_QWORD *)(v21 - 8);
    v20 = v21 - v23;
    if ( (unsigned __int64)(v20 - 8) <= 0x1F )
    {
      v21 = v23;
      goto LABEL_50;
    }
LABEL_70:
    o__invalid_parameter_noinfo_noreturn(v20, v18);
    return sub_18007E3E4();
  }
LABEL_50:
  j_j__o_free(v21);
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
LABEL_51:
  v24 = (volatile signed __int32 *)a1[17];
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = (volatile signed __int32 *)a1[15];
  if ( v25 && _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
  v26 = (volatile signed __int32 *)a1[12];
  if ( v26 && _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
  v27 = (volatile signed __int32 *)a1[10];
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = (volatile signed __int32 *)a1[8];
  if ( v28 && _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  sub_180012938(a1 + 4);
  result = (__int64)&Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v30 = (volatile signed __int32 *)a1[2];
  if ( v30 )
  {
    result = (unsigned int)_InterlockedDecrement(v30 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  }
  return result;
}
