/*
 * XREFs of ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180082EC0
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 * Callees:
 *     sub_18007E5D0 @ 0x18007E5D0 (sub_18007E5D0.c)
 *     sub_180080618 @ 0x180080618 (sub_180080618.c)
 *     sub_180080D34 @ 0x180080D34 (sub_180080D34.c)
 *     sub_1800829D0 @ 0x1800829D0 (sub_1800829D0.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall std::numpunct<wchar_t>::_Init(__int64 a1, __m128 *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __m128 *v9; // rax
  __int128 v11; // [rsp+28h] [rbp-41h]
  __int128 v12; // [rsp+38h] [rbp-31h]
  __int128 v13; // [rsp+48h] [rbp-21h] BYREF
  __m128 v14; // [rsp+60h] [rbp-9h] BYREF
  __m128 v15; // [rsp+70h] [rbp+7h] BYREF
  __m128 v16; // [rsp+80h] [rbp+17h] BYREF
  __m128 v17; // [rsp+90h] [rbp+27h] BYREF

  sub_180083A6C(a1);
  sub_1800839A4(a1);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v12 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v12 )
  {
    sub_1800839A4(a1);
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v11 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = sub_180080618(v11, &v15);
  }
  else
  {
    v13 = xmmword_18020DC50;
    v9 = (__m128 *)&v13;
  }
  v17 = *v9;
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_180080D34(&v17, &v17);
  v14 = *sub_18007E5D0(&v16, a2, &v17);
  return sub_1800829D0(a1, &v14);
}
