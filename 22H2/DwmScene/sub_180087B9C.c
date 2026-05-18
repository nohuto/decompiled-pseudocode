/*
 * XREFs of sub_180087B9C @ 0x180087B9C
 * Callers:
 *     sub_180086610 @ 0x180086610 (sub_180086610.c)
 *     sub_1800866F0 @ 0x1800866F0 (sub_1800866F0.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180087B9C(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9[4]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v10[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v13[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v14[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v16; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v24; // [rsp+130h] [rbp+30h]
  __int64 v25; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v26; // [rsp+140h] [rbp+40h]

  v9[2] = 0LL;
  v9[3] = 0LL;
  sub_18001269C(v9, (__int64)&unk_180208648);
  sub_1800867D4(a1, &v15, v9);
  v2 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v10[2] = 0LL;
  v10[3] = 0LL;
  sub_18001269C(v10, (__int64)&unk_180208688);
  sub_1800867D4(a1, &v17, v10);
  v3 = v18;
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001269C(v11, (__int64)&qword_1802086C8);
  sub_1800867D4(a1, &v19, v11);
  v4 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_18001269C(v12, (__int64)&qword_1802086E8);
  sub_1800867D4(a1, &v21, v12);
  v5 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001269C(v13, (__int64)&unk_180208668);
  sub_1800867D4(a1, &v23, v13);
  v6 = v24;
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v14[2] = 0LL;
  v14[3] = 0LL;
  sub_18001269C(v14, (__int64)&unk_1802086A8);
  result = (__int64)sub_1800867D4(a1, &v25, v14);
  v8 = v26;
  if ( v26 )
  {
    result = (unsigned int)_InterlockedDecrement(v26 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
