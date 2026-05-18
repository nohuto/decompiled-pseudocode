/*
 * XREFs of sub_180104F70 @ 0x180104F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 *     sub_1800AA078 @ 0x1800AA078 (sub_1800AA078.c)
 *     sub_1800F394C @ 0x1800F394C (sub_1800F394C.c)
 *     sub_1800F3AC8 @ 0x1800F3AC8 (sub_1800F3AC8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_180104F70(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4, unsigned __int64 *a5)
{
  const void **v9; // rax
  const void *v10; // rdx
  _QWORD *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rsi
  __int64 i; // rdi
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-B1h] BYREF
  __int128 v24; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+40h] [rbp-91h]
  char *Src; // [rsp+48h] [rbp-89h] BYREF
  __m128i si128; // [rsp+58h] [rbp-79h]
  char v28[8]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v29; // [rsp+70h] [rbp-61h]
  _BYTE pExceptionObject[24]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v31; // [rsp+90h] [rbp-41h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-11h]
  __int128 v35; // [rsp+D0h] [rbp-1h] BYREF

  v9 = sub_18002C274((const void **)&Src, (_QWORD *)(a1 + 24), " ");
  v10 = a5;
  if ( a5[3] >= 0x10 )
    v10 = (const void *)*a5;
  v11 = std::string::append(v9, v10, a5[2]);
  v34 = 0LL;
  v33 = *(_OWORD *)v11;
  v34 = *((_OWORD *)v11 + 1);
  v11[2] = 0LL;
  v11[3] = 15LL;
  *(_BYTE *)v11 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = Src;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = (char *)*((_QWORD *)Src - 1);
      if ( (unsigned __int64)(Src - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(Src) = 0;
  v31 = 0LL;
  sub_1800AA078(a1, &v31, a2);
  sub_18006AA58(*a2, v13);
  v35 = 0LL;
  sub_1800F394C((__int64 *)&v35, &v31, (__int64)&v33);
  v24 = 0LL;
  v25 = 0LL;
  v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 200LL))(*a3, v28);
  sub_1800715C8(&v24, v14, (__int64)&v33);
  v15 = v29;
  if ( v29 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, a2, a3);
  v32 = 0LL;
  v23 = 0LL;
  v16 = *(_QWORD *)(a1 + 16);
  if ( !v16 )
  {
LABEL_33:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
      goto LABEL_33;
  }
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) );
  v23 = *(_OWORD *)(a1 + 8);
  sub_1800186E0(&v32, (__int64 *)&v23);
  v18 = *(_QWORD *)(a1 + 112);
  for ( i = *(_QWORD *)(a1 + 104); i != v18; i += 48LL )
    sub_180096B80(*a4, (__int64 *)&v31, 0LL, (__int64 *)&v32);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  v20 = (volatile signed __int32 *)*((_QWORD *)&v32 + 1);
  if ( *((_QWORD *)&v32 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  sub_18007235C((__int64 *)&v24);
  sub_1800F3AC8((__int64)&v35);
  v21 = (volatile signed __int32 *)*((_QWORD *)&v31 + 1);
  if ( *((_QWORD *)&v31 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( !_InterlockedDecrement(v21 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  if ( *((_QWORD *)&v34 + 1) >= 0x10uLL )
  {
    v22 = v33;
    if ( (unsigned __int64)(*((_QWORD *)&v34 + 1) + 1LL) >= 0x1000 )
    {
      v22 = *(_QWORD *)(v33 - 8);
      if ( (unsigned __int64)(v33 - v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, *((_QWORD *)&v34 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
}
