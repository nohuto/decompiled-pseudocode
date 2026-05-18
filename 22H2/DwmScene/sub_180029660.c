/*
 * XREFs of sub_180029660 @ 0x180029660
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001792C @ 0x18001792C (sub_18001792C.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_180066010 @ 0x180066010 (sub_180066010.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180029660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  ULONG_PTR v14; // rbx
  int v15; // eax
  ULONG_PTR v16; // rbx
  int v17; // eax
  ULONG_PTR v18; // rbx
  __int64 (__fastcall *v19)(_QWORD, __int64); // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  signed __int32 v23; // eax
  bool v24; // zf
  __int64 v25; // rbx
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[32]; // [rsp+50h] [rbp-B0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD v29; // [rsp+110h] [rbp+10h] BYREF
  EXCEPTION_RECORD v30; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v31; // [rsp+250h] [rbp+150h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, void *, __int64 *); // [rsp+258h] [rbp+158h] BYREF
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v26 = 0LL;
  result = sub_180029ED0(a1, &v26);
  if ( (_QWORD)v26 )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
    v32 = 0LL;
    v11 = *v10;
    v12 = sub_18001792C((__int64 *)&v32);
    v13 = (*(__int64 (__fastcall **)(__int64 *, void *, __int64 *))(v11 + 24))(v10, &unk_18013C128, v12);
    v14 = v13;
    if ( v13 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v31 = 0LL;
    v15 = (**v32)(v32, &unk_18013A080, &v31);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(&v29, 0, sizeof(v29));
      v29.ExceptionCode = -532265403;
      v29.ExceptionAddress = retaddr;
      v29.NumberParameters = 1;
      v29.ExceptionInformation[0] = v16;
      RaiseFailFastException(&v29, 0LL, 0);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            v31,
            a4,
            0LL,
            a5);
    v18 = v17;
    if ( v17 < 0 )
    {
      memset(&v30, 0, sizeof(v30));
      v30.ExceptionCode = -532265403;
      v30.ExceptionAddress = retaddr;
      v30.NumberParameters = 1;
      v30.ExceptionInformation[0] = v18;
      RaiseFailFastException(&v30, 0LL, 0);
    }
    result = sub_180066010(a1, v27);
    v19 = *(__int64 (__fastcall **)(_QWORD, __int64))(result + 16);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      result = v19(*a5, v20);
    }
    v21 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = (__int64)v32;
    if ( v32 )
    {
      v32 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  if ( *((_QWORD *)&v26 + 1) )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF);
    v24 = v23 == 1;
    result = (unsigned int)(v23 - 1);
    if ( v24 )
    {
      v25 = *((_QWORD *)&v26 + 1);
      (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  return result;
}
