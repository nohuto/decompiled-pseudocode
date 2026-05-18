/*
 * XREFs of sub_180085E34 @ 0x180085E34
 * Callers:
 *     sub_180085FEC @ 0x180085FEC (sub_180085FEC.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800862F4 @ 0x1800862F4 (sub_1800862F4.c)
 *     sub_180087160 @ 0x180087160 (sub_180087160.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180085E34(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  __int128 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  _QWORD v17[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v18[5]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v20; // [rsp+E0h] [rbp-20h] BYREF

  v16 = a5;
  v20 = 0LL;
  v15 = 0LL;
  v8 = a5[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a5[1];
  }
  *(_QWORD *)&v15 = *a5;
  *((_QWORD *)&v15 + 1) = v8;
  sub_180087160(a1, &v20, &v15);
  if ( !(_QWORD)v20 )
  {
    sub_18000FD48(v18);
    v13 = sub_18000FD48(v17);
    sub_180027FF4(pExceptionObject, v13, 269, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = 0LL;
  v9 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    v9 = *((_QWORD *)&v20 + 1);
  }
  v14 = v20;
  sub_1800862F4(a1, a2, a3, (unsigned int)&v14, (__int64)a5);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  v11 = (volatile signed __int32 *)a5[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
