/*
 * XREFs of sub_1800148E0 @ 0x1800148E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180013E8C @ 0x180013E8C (sub_180013E8C.c)
 *     sub_180013EF0 @ 0x180013EF0 (sub_180013EF0.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800148E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-98h]
  __int64 *v16; // [rsp+30h] [rbp-88h] BYREF
  __int128 v17; // [rsp+38h] [rbp-80h] BYREF
  __int128 v18; // [rsp+48h] [rbp-70h]
  _QWORD v19[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-50h]
  __int64 *v21; // [rsp+70h] [rbp-48h]
  __int128 v22; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    if ( v4 )
    {
      v18 = 0LL;
      v5 = *(volatile signed __int32 **)(v4 + 40);
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 2);
        v5 = *(volatile signed __int32 **)(v4 + 40);
      }
      v6 = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v18 = v6;
      *((_QWORD *)&v18 + 1) = v5;
      v22 = 0LL;
      v15 = 0LL;
      v7 = *(_QWORD *)(v6 + 80);
      if ( v7 )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v7 + 8);
          if ( !v8 )
            break;
          if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
          {
            v15 = *(_OWORD *)(v6 + 72);
            break;
          }
        }
      }
      sub_1800615B4(v15 + 16, &v22);
      if ( *((_QWORD *)&v15 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
        }
      }
      v17 = 0LL;
      v9 = v18;
      sub_1800839A4(v18);
      v16 = 0LL;
      v20 = *(__int64 **)(v18 + 384);
      v21 = *(__int64 **)(v18 + 376);
      sub_180013EF0(&v16, v21, v20, 0);
      if ( v16 != *(__int64 **)(v9 + 384) )
        sub_180013E8C((__int64 *)&v17, v16);
      if ( a2 )
        v10 = a2 + 2;
      else
        v10 = (_QWORD *)(qword_180218700 + 96);
      v11 = (volatile signed __int32 *)v10[1];
      if ( v11 )
      {
        _InterlockedIncrement(v11 + 2);
        v11 = (volatile signed __int32 *)v10[1];
      }
      v19[0] = *v10;
      v19[1] = v11;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v17 + 88), v19);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      v12 = (_QWORD *)a1[1];
      if ( v12 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
          v12 = (_QWORD *)a1[1];
        }
        a1[1] = a2;
        if ( v12 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      }
      if ( *((_QWORD *)&v17 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v13 = *((_QWORD *)&v17 + 1);
          (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
        }
      }
      if ( BYTE8(v22) )
        sub_180061A34(v22);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
          if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 64, (__int64)"SpectreMeshComponent.cpp", 0x80004005);
    return 2147500037LL;
  }
  return result;
}
