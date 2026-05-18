/*
 * XREFs of sub_180028F70 @ 0x180028F70
 * Callers:
 *     sub_1800100A0 @ 0x1800100A0 (sub_1800100A0.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_180026F5C @ 0x180026F5C (sub_180026F5C.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     _setlocale_set_cat @ 0x18003A1F0 (_setlocale_set_cat.c)
 *     sub_180066CA8 @ 0x180066CA8 (sub_180066CA8.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800CB4FC @ 0x1800CB4FC (sub_1800CB4FC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180028F70(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+38h] [rbp-29h] BYREF
  __int128 v10; // [rsp+48h] [rbp-19h] BYREF
  __int64 v11[4]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v12; // [rsp+78h] [rbp+17h] BYREF
  __int128 v13; // [rsp+88h] [rbp+27h] BYREF
  __int128 v14; // [rsp+98h] [rbp+37h] BYREF

  v13 = 0LL;
  result = sub_180029ED0(a1, &v13);
  if ( (_QWORD)v13 )
  {
    v14 = 0LL;
    *(_QWORD *)&v9 = v11;
    v11[2] = 0LL;
    v11[3] = 15LL;
    LOBYTE(v11[0]) = 0;
    sub_18000FB34(v11, 0x18uLL, 0LL, "RenderOutput DepthBuffer");
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    setlocale_set_cat((unsigned int)&v14, (unsigned int)&v13, v4, v3, (__int64)v11);
    v5 = (_QWORD *)sub_18006AB04(v13);
    v12 = 0LL;
    sub_180026F5C(v5, &v12, 1u);
    v10 = 0LL;
    if ( *((_QWORD *)&v14 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    v10 = v14;
    sub_1800CB4FC(v12, &v10, 0LL);
    v9 = v12;
    v12 = 0uLL;
    result = sub_180066CA8(a1, &v9);
    v6 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedDecrement(v6 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
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
