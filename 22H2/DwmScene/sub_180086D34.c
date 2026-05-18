/*
 * XREFs of sub_180086D34 @ 0x180086D34
 * Callers:
 *     sub_1800862F4 @ 0x1800862F4 (sub_1800862F4.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_18007DBDC @ 0x18007DBDC (sub_18007DBDC.c)
 *     sub_18008559C @ 0x18008559C (sub_18008559C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_180086D34(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rsi
  void *v10; // rax
  __int64 v11; // r14
  __int128 v13; // [rsp+20h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  sub_18006187C((__int64)(a1 + 2), (__int64)a2);
  v6 = a1[1];
  if ( !v6 )
  {
LABEL_15:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_15;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  *(_QWORD *)&v13 = *a1;
  v8 = (volatile signed __int32 *)a1[1];
  v9 = v8;
  *((_QWORD *)&v13 + 1) = v8;
  v10 = operator new(0x250uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset(v10, 0, 0x250uLL);
    v14 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v9 = v8;
    }
    v14 = v13;
    v10 = (void *)sub_18007DBDC(v11, &v14, *a3);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18008559C(a2, (__int64)v10);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
