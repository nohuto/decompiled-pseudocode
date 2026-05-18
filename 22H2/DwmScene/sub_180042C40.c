/*
 * XREFs of sub_180042C40 @ 0x180042C40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800338FC @ 0x1800338FC (sub_1800338FC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180042C40(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF

  v4 = sub_180027DD0(&v9, a2);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 104), v4);
  v5 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v11 = 0LL;
  sub_1800338FC(*(_QWORD **)(a1 + 104), &v11);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 216LL))(v11, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
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
