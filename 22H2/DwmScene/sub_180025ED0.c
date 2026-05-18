/*
 * XREFs of sub_180025ED0 @ 0x180025ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BD90 (_guard_check_icall_nop.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180063A98 @ 0x180063A98 (sub_180063A98.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_18006ABFC @ 0x18006ABFC (sub_18006ABFC.c)
 *     sub_18009AD5C @ 0x18009AD5C (sub_18009AD5C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180025ED0(__int64 a1, int a2)
{
  int v3; // r14d
  __int64 result; // rax
  unsigned int i; // r12d
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rcx
  __int64 *v10; // r15
  volatile signed __int32 *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  unsigned int v20; // [rsp+38h] [rbp-99h]
  __int64 v21; // [rsp+40h] [rbp-91h]
  volatile signed __int32 *v22; // [rsp+50h] [rbp-81h]
  _DWORD v23[2]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-69h]
  __int128 v26; // [rsp+70h] [rbp-61h] BYREF
  __int128 v27; // [rsp+80h] [rbp-51h]
  _BYTE v28[8]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v29; // [rsp+98h] [rbp-39h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-29h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 416) = a2;
  result = sub_18006ABFC(a1);
  v20 = result;
  for ( i = 0; i < v20; ++i )
  {
    v29 = 0LL;
    sub_18006AB7C(a1, &v29, i);
    v30 = 0LL;
    sub_1800615B4(v29 + 8, &v30);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 112LL))(v29);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 120LL))(v29);
    v27 = 0LL;
    v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 152LL))(v29);
    v7 = (volatile signed __int32 *)v6[1];
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v7 = (volatile signed __int32 *)v6[1];
    }
    v8 = *v6;
    *(_QWORD *)&v27 = v8;
    *((_QWORD *)&v27 + 1) = v7;
    if ( v8 )
    {
      v9 = *(volatile signed __int32 **)(v8 + 464);
      if ( v9 )
      {
        _InterlockedIncrement(v9 + 2);
        v9 = *(volatile signed __int32 **)(v8 + 464);
      }
      v24 = *(_QWORD *)(v8 + 456);
      v25 = v9;
      v10 = &v24;
      v3 |= 1u;
    }
    else
    {
      v26 = 0LL;
      v10 = (__int64 *)&v26;
      v3 |= 2u;
    }
    v11 = (volatile signed __int32 *)v10[1];
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    v12 = *v10;
    v22 = v11;
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      if ( *((_QWORD *)&v26 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v13 = *((_QWORD *)&v26 + 1);
          (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v25;
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    v21 = 0LL;
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 136);
      if ( v15 )
      {
        v16 = (__int64 *)sub_18009AD5C(v15, v28);
      }
      else
      {
        v23[0] = 0;
        v23[1] = 0;
        v16 = (__int64 *)v23;
      }
      v21 = *v16;
    }
    v17 = v29;
    v18 = *(_QWORD *)v29;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 104LL))(v29);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
    result = (*(__int64 (__fastcall **)(__int64))(v18 + 56))(v17);
    if ( v12 )
      result = sub_180063A98(v12, v21);
    if ( v22 )
    {
      result = (unsigned int)_InterlockedDecrement(v22 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        result = (unsigned int)_InterlockedDecrement(v22 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    if ( BYTE8(v30) )
      result = sub_180061A34(v30);
    v19 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        result = (unsigned int)_InterlockedDecrement(v19 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  return result;
}
