/*
 * XREFs of sub_180038450 @ 0x180038450
 * Callers:
 *     sub_180036E70 @ 0x180036E70 (sub_180036E70.c)
 *     sub_180037010 @ 0x180037010 (sub_180037010.c)
 * Callees:
 *     sub_18000EFA8 @ 0x18000EFA8 (sub_18000EFA8.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_1800328C8 @ 0x1800328C8 (sub_1800328C8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180038450(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r12
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rbx
  signed __int32 v14; // eax
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  void *v17; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = a4;
  v8 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(a1 + 144) + 112LL))(
         *(_QWORD *)(a1 + 144),
         a2,
         0LL,
         4LL,
         0,
         &v17);
  v16 = 0LL;
  v15 = 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v9 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v14 + 1, v14) )
      {
        *(_QWORD *)&v15 = *(_QWORD *)(a1 + 72);
        v10 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v15 + 1) = v10;
        goto LABEL_3;
      }
    }
  }
  v10 = *((_QWORD *)&v15 + 1);
LABEL_3:
  sub_1800328C8((__int64 *)&v16, &v15);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  sub_1800265A4(v16, v8);
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18000EFA8(v17, v4, a3, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(
             *(_QWORD *)(a1 + 144),
             a2,
             0LL);
  if ( *((_QWORD *)&v16 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v13 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  return result;
}
