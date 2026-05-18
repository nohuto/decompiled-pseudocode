/*
 * XREFs of sub_1800EAFF0 @ 0x1800EAFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180075900 @ 0x180075900 (sub_180075900.c)
 *     sub_1800848D4 @ 0x1800848D4 (sub_1800848D4.c)
 *     sub_180094344 @ 0x180094344 (sub_180094344.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __RTtypeid @ 0x18011E0C4 (__RTtypeid.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800EAFF0(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  volatile signed __int32 *v6; // rbx
  _QWORD *v8; // rax
  const void **v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD v16[4]; // [rsp+40h] [rbp-F8h] BYREF
  const void *Src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v19[32]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v20[32]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+E0h] [rbp-58h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    v8 = (_QWORD *)sub_180075900(a1);
    v9 = sub_18009BCB8(&Src, "Component::Clone() -- component '", v8);
    v10 = (_QWORD *)sub_18002C218((__int64)v18, v9, "' of type ");
    v11 = _RTtypeid(a1);
    v12 = (_BYTE *)sub_1800848D4(v11);
    v13 = (_QWORD *)sub_18002C218((__int64)v19, v10, v12);
    v14 = sub_18002C218((__int64)v20, v13, " does not support cloning.");
    v15 = sub_18000FD48(v16);
    sub_180094344(pExceptionObject, v15, 43, v14, 0);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a4 + 8);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
