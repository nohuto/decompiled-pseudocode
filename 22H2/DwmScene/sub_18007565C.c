/*
 * XREFs of sub_18007565C @ 0x18007565C
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_18006AAD4 @ 0x18006AAD4 (sub_18006AAD4.c)
 *     sub_18006AB0C @ 0x18006AB0C (sub_18006AB0C.c)
 *     sub_18006AB4C @ 0x18006AB4C (sub_18006AB4C.c)
 *     sub_18006BE7C @ 0x18006BE7C (sub_18006BE7C.c)
 *     sub_18006CA6C @ 0x18006CA6C (sub_18006CA6C.c)
 *     sub_18006FF20 @ 0x18006FF20 (sub_18006FF20.c)
 *     sub_180071320 @ 0x180071320 (sub_180071320.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ_0 @ 0x1800720D0 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ_0.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_18007C550 @ 0x18007C550 (sub_18007C550.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007565C(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  unsigned __int64 v18; // r8
  char *v19; // rdx
  __int128 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v28[256]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&v21 = a2;
  memset(v28, 0, 0xF8uLL);
  sub_180071320((__int64)v28, 3, 1);
  v27 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v27);
  for ( i = 0; i < (unsigned int)sub_180075490(a1); ++i )
  {
    v21 = 0LL;
    sub_1800753CC(a1, &v21, i);
    if ( !_RTDynamicCast(
            v21,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = sub_18006AB0C(v21, v24);
      v6 = sub_18006AB4C(v21, v23);
      v7 = sub_18006AAD4(v21, v22);
      v8 = v7[2];
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      v9 = sub_18006FF20((__int64)&v28[16], (__int64)v7, v8);
      v10 = sub_18006BE7C(v9, ": Hardware Feature Level ");
      v11 = v6[2];
      if ( v6[3] >= 8uLL )
        v6 = (_QWORD *)*v6;
      v12 = sub_18006FF20(v10, (__int64)v6, v11);
      v13 = sub_18006BE7C(v12, ", Engine Feature Level ");
      v14 = v5[2];
      if ( v5[3] >= 8uLL )
        v5 = (_QWORD *)*v5;
      v15 = sub_18006FF20(v13, (__int64)v5, v14);
      sub_18006BE7C(v15, byte_1801C5BA0);
      unknown_libname_101(v22);
      unknown_libname_101(v23);
      unknown_libname_101(v24);
    }
    if ( *((_QWORD *)&v21 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v21 + 1);
        (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
      }
    }
  }
  sub_18007C550(&v28[24], v25);
  v17 = v25;
  if ( v26 >= 8 )
    v17 = (__int64 *)v25[0];
  v18 = (unsigned __int64)v17 + 2 * v25[2];
  v19 = (char *)v25;
  if ( v26 >= 8 )
    v19 = (char *)v25[0];
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_18006CA6C((const void **)a2, v19, v18);
  unknown_libname_101(v25);
  if ( BYTE8(v27) )
    sub_180061A3C(v27);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v28[152]);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(&v28[152]);
  return a2;
}
