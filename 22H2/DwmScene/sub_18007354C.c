/*
 * XREFs of sub_18007354C @ 0x18007354C
 * Callers:
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_18006ABFC @ 0x18006ABFC (sub_18006ABFC.c)
 *     sub_18006B2E8 @ 0x18006B2E8 (sub_18006B2E8.c)
 *     sub_18006C4C0 @ 0x18006C4C0 (sub_18006C4C0.c)
 *     sub_18007079C @ 0x18007079C (sub_18007079C.c)
 *     sub_180073BBC @ 0x180073BBC (sub_180073BBC.c)
 *     sub_180074F40 @ 0x180074F40 (sub_180074F40.c)
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_1800776F0 @ 0x1800776F0 (sub_1800776F0.c)
 *     sub_18009FC8C @ 0x18009FC8C (sub_18009FC8C.c)
 *     sub_1800AEEF0 @ 0x1800AEEF0 (sub_1800AEEF0.c)
 *     sub_1800AF398 @ 0x1800AF398 (sub_1800AF398.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18007354C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  const char *v7; // rax
  const char *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  _QWORD *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 i; // r14
  __int64 v21; // rbx
  __int64 v22; // rbx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rax
  void ***v25; // rcx
  __int64 *v26; // rbx
  __int64 *v27; // r14
  void ***v28; // rdx
  __int64 result; // rax
  unsigned int v30; // eax
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v37[3]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-60h]
  _QWORD v39[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v40[5]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v42; // [rsp+140h] [rbp+40h] BYREF
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  __int128 v44; // [rsp+160h] [rbp+60h] BYREF
  __int128 v45; // [rsp+170h] [rbp+70h] BYREF
  __int128 v46; // [rsp+180h] [rbp+80h] BYREF
  __int128 v47; // [rsp+190h] [rbp+90h] BYREF
  __int128 v48; // [rsp+1A0h] [rbp+A0h] BYREF
  void **v49; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v50; // [rsp+1B8h] [rbp+B8h]
  volatile signed __int32 *v51; // [rsp+1C0h] [rbp+C0h]
  void ***v52; // [rsp+1E8h] [rbp+E8h]

  v48 = 0LL;
  sub_18006156C(a1 + 8, (__int64)&v48);
  v47 = 0LL;
  sub_18006156C(a1 + 1104, (__int64)&v47);
  sub_18006187C(*a2 + 24, v4);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_18000FD48(v40);
        v30 = (unsigned int)sub_18000FD48(v39);
        sub_1800CB940((unsigned int)pExceptionObject, v30, 1202, (unsigned int)v40, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_1801163DC(
    &unk_1802085C8,
    3LL,
    "-----------------------------------------------------------------------------------");
  v7 = (const char *)sub_18001EF80(v37);
  v8 = v7;
  if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
    v8 = *(const char **)v7;
  v9 = sub_18006AB3C(*a2);
  sub_1801163DC(&unk_1802085C8, 3LL, "Engine::CreateDevice() -- attaching device id %u -- %s", v9, v8);
  if ( v38 >= 0x10 )
  {
    v10 = v37[0];
    if ( v38 + 1 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v37[0] - 8LL);
      if ( (unsigned __int64)(v37[0] - v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v38 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v10);
  }
  if ( (unsigned int)sub_18006ABFC(*a2) )
  {
    v42 = 0LL;
    sub_180073BBC(a1, &v42, 1LL, 0LL);
    v44 = 0LL;
    v33 = 0LL;
    sub_180074F40(a1, &v44, 0LL, &v33);
    if ( (_QWORD)v44 )
      sub_1800AEEF0(v42, &v44);
    v11 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v12 = sub_18006AB7C(*a2, &v34, 0);
    sub_1800AF398(v42, v12);
    v13 = v35;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v31 = 0LL;
    v14 = a2[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      v14 = a2[1];
    }
    *(_QWORD *)&v31 = *a2;
    *((_QWORD *)&v31 + 1) = v14;
    sub_18007079C((__int64 **)(a1 + 184), (__int64)&v36, (__int64)&v31);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v36 + 48), &v42);
    v15 = *((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    v16 = (volatile signed __int32 *)*((_QWORD *)&v42 + 1);
    if ( *((_QWORD *)&v42 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v42 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v45 = 0LL;
  sub_1800615B4(a1 + 112, (__int64)&v45);
  v17 = *(__int64 **)(a1 + 96);
  if ( *(__int64 **)(a1 + 104) == v17 )
  {
    sub_180010F3C((_QWORD *)(a1 + 88), v17, a2);
  }
  else
  {
    *v17 = 0LL;
    v17[1] = 0LL;
    v18 = a2[1];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *v17 = *a2;
    v17[1] = a2[1];
    *(_QWORD *)(a1 + 96) += 16LL;
  }
  if ( BYTE8(v45) )
    sub_180061A34(v45);
  sub_1800776F0(a1);
  v32 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a2[1];
  }
  *(_QWORD *)&v32 = *a2;
  *((_QWORD *)&v32 + 1) = v19;
  sub_18009FC8C(*(_QWORD *)(a1 + 512), &v32);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    v43 = 0LL;
    sub_180075918(a1, &v43, i);
    v21 = v43;
    if ( (_QWORD)v43 && sub_1800626B8(v43, 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, a2);
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v22 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  v23 = (volatile signed __int32 *)a2[1];
  if ( v23 )
  {
    _InterlockedIncrement(v23 + 2);
    v23 = (volatile signed __int32 *)a2[1];
  }
  v24 = *a2;
  v52 = 0LL;
  v49 = &std::_Func_impl_no_alloc<_lambda_87405cc2c55410793a5c9c24c44d1dd2_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v50 = 0LL;
  v51 = 0LL;
  if ( v23 )
    _InterlockedIncrement(v23 + 2);
  v50 = v24;
  v51 = v23;
  v25 = &v49;
  v52 = &v49;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
    v25 = v52;
  }
  v26 = *(__int64 **)(a1 + 704);
  v27 = *(__int64 **)(a1 + 712);
  if ( v26 != v27 )
  {
    do
    {
      v46 = 0LL;
      sub_1800615B4(*v26 + 16, (__int64)&v46);
      sub_18006C4C0(*v26, (__int64)&v49);
      if ( BYTE8(v46) )
        sub_180061A34(v46);
      v26 += 2;
    }
    while ( v26 != v27 );
    v25 = v52;
  }
  if ( v25 )
  {
    v28 = &v49;
    LOBYTE(v28) = v25 != &v49;
    ((void (__fastcall *)(void ***, void ***))(*v25)[4])(v25, v28);
  }
  sub_18006B2E8(*a2);
  result = sub_1800773B4(a1);
  if ( BYTE8(v47) )
    result = sub_180061A34(v47);
  if ( BYTE8(v48) )
    return sub_180061A34(v48);
  return result;
}
