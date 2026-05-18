/*
 * XREFs of sub_1800B49EC @ 0x1800B49EC
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 *     sub_180071E44 @ 0x180071E44 (sub_180071E44.c)
 *     sub_18007BB2C @ 0x18007BB2C (sub_18007BB2C.c)
 *     sub_1800B7840 @ 0x1800B7840 (sub_1800B7840.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B49EC(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbx
  __int64 v4; // r9
  __int64 v5; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v8; // [rsp+90h] [rbp+37h] BYREF
  void *v9; // [rsp+A0h] [rbp+47h] BYREF

  v9 = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v1 = (_QWORD *)(a1 + 200);
  if ( sub_18007BB2C((__int64 *)(a1 + 200), &v9) )
  {
    sub_18000FD48(v6);
    sub_180071E44(pExceptionObject, (__int64)v6, 0, v4);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v8 = 0LL;
  sub_1800B7840(&v8);
  sub_180070500(v1, (__int64)&v5, &v9);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 40), &v8);
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v2 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  return v8;
}
