/*
 * XREFs of sub_180091A2C @ 0x180091A2C
 * Callers:
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 * Callees:
 *     sub_18009265C @ 0x18009265C (sub_18009265C.c)
 *     sub_1800926BC @ 0x1800926BC (sub_1800926BC.c)
 *     sub_18010FFA0 @ 0x18010FFA0 (sub_18010FFA0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180091A2C(_DWORD *a1)
{
  __int64 result; // rax
  char v3; // bl
  BOOL v4; // r14d
  char v5; // r15
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  volatile signed __int32 *v15; // rbx
  char v16; // [rsp+50h] [rbp-B0h]
  char v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v19; // [rsp+60h] [rbp-A0h]
  char v20; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-70h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp-50h]
  __int128 *v26; // [rsp+B8h] [rbp-48h]
  _BYTE v27[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v28; // [rsp+C8h] [rbp-38h]
  _BYTE v29[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v30; // [rsp+D8h] [rbp-28h]
  _BYTE v31[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v32[8]; // [rsp+F0h] [rbp-10h] BYREF

  result = (unsigned int)a1[75];
  v3 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v4 = result == 3;
    v5 = a1[72] == 1;
    v22 = 0LL;
    if ( v5 )
    {
      v6 = (__int64 *)sub_18009265C(a1, v29, 0LL);
      v7 = *v6;
      v18 = *v6;
      v19 = (volatile signed __int32 *)v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      v8 = &v18;
    }
    else
    {
      v9 = (__int64 *)sub_18009265C(a1, v27, 0LL);
      v7 = *v9;
      v21 = (volatile signed __int32 *)v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v8 = (__int64 *)&v20;
      v3 = 12;
    }
    *(_QWORD *)&v22 = v7;
    *((_QWORD *)&v22 + 1) = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    if ( (v3 & 8) != 0 )
    {
      v3 &= ~8u;
      v16 = v3;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = v21;
          (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        }
        v3 = v16;
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      v11 = v28;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      v17 = v3;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          v12 = v19;
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
        v3 = v17;
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v13 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
    }
    v24 = 0LL;
    v25 = v32;
    v26 = &v23;
    v32[0] = &std::_Func_impl_no_alloc<_lambda_7ee8d24a2ce799da3d25c1093a020d44_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v32[1] = a1;
    v32[7] = v32;
    v23 = v22;
    v22 = 0LL;
    v14 = sub_1800926BC(a1, v31, 0LL);
    result = sub_18010FFA0(v14, a1[30], (unsigned int)&v23, a1[28], v5, v4, (__int64)v32, 0LL, (__int64)&v24);
    v15 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
    if ( *((_QWORD *)&v24 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        result = (unsigned int)_InterlockedDecrement(v15 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  return result;
}
