/*
 * XREFs of sub_180014E00 @ 0x180014E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_18008833C @ 0x18008833C (sub_18008833C.c)
 *     sub_180098FF0 @ 0x180098FF0 (sub_180098FF0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180014E00(_QWORD *a1)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  signed __int32 v14; // eax
  __int128 v15; // [rsp+20h] [rbp-A8h]
  __int128 v16; // [rsp+30h] [rbp-98h]
  __int128 v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-78h] BYREF
  __int128 v19; // [rsp+58h] [rbp-70h]
  _QWORD v20[4]; // [rsp+68h] [rbp-60h] BYREF
  __int64 *v21; // [rsp+88h] [rbp-40h]
  __int64 *v22; // [rsp+90h] [rbp-38h]
  __int128 v23; // [rsp+98h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v19 = 0LL;
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v3 = *(volatile signed __int32 **)(v2 + 40);
    }
    v4 = *(_QWORD *)(v2 + 32);
    *(_QWORD *)&v19 = v4;
    *((_QWORD *)&v19 + 1) = v3;
    v23 = 0LL;
    v5 = (_QWORD *)(v4 + 72);
    v16 = 0LL;
    v6 = *(_QWORD *)(v4 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          *(_QWORD *)&v16 = *v5;
          *((_QWORD *)&v16 + 1) = *(_QWORD *)(v4 + 80);
          break;
        }
      }
    }
    sub_1800615B4(v16 + 16, &v23);
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
    v17 = 0LL;
    v8 = v19;
    sub_1800839A4(v19);
    v18 = 0LL;
    v21 = *(__int64 **)(v19 + 384);
    v22 = *(__int64 **)(v19 + 376);
    sub_180013F64(&v18, v22, v21, 0);
    if ( v18 == *(__int64 **)(v8 + 384) )
      v17 = 0LL;
    else
      sub_180013E28((__int64 *)&v17, v18);
    v9 = a1[1];
    if ( v9 )
      sub_180098FF0(v17, v9 + 32);
    else
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(v17);
    v20[2] = 0LL;
    v20[3] = 0LL;
    sub_18001269C(v20, (__int64)&unk_180208688);
    v15 = 0LL;
    v10 = v5[1];
    if ( v10 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v10 + 8);
        if ( !v14 )
          break;
        if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v14 + 1, v14) )
        {
          *(_QWORD *)&v15 = *v5;
          v11 = v5[1];
          *((_QWORD *)&v15 + 1) = v11;
          goto LABEL_22;
        }
      }
    }
    v11 = 0LL;
LABEL_22:
    sub_18008833C(v15, v20);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
    }
    if ( BYTE8(v23) )
      sub_180061A34(v23);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 118, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
