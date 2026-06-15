/*
 * XREFs of sub_180032F30 @ 0x180032F30
 * Callers:
 *     sub_180032C50 @ 0x180032C50 (sub_180032C50.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D910 @ 0x18006D910 (sub_18006D910.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 *     sub_1800C646C @ 0x1800C646C (sub_1800C646C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180032F30(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // r14
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *i; // rdi
  _QWORD *j; // rbx
  _QWORD *v11; // rdi
  __int128 *v12; // rdi
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int128 *v19; // [rsp+80h] [rbp+8h] BYREF
  __int128 *v20; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+90h] [rbp+18h]

  v16 = 0LL;
  v17 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  v21 = v2;
  v3 = *(__int64 **)(a1 + 784);
  v20 = &v16;
  v19 = &v16;
  v4 = *(__int64 **)(a1 + 776);
  try
  {
    while ( v4 != v3 && !(unsigned __int8)sub_18006D910(&v19, v4) )
      ++v4;
    v5 = v4;
    if ( v4 != v3 )
    {
      while ( ++v4 != v3 )
      {
        if ( !(unsigned __int8)sub_18006D910(&v20, v4) )
          sub_1800C646C(v5++, v4);
      }
    }
    v6 = *(__int64 **)(a1 + 784);
    if ( v3 != v6 )
    {
      do
      {
        v7 = *v3;
        *v3 = 0LL;
        v8 = *v5;
        *v5 = v7;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        ++v5;
        ++v3;
      }
      while ( v3 != v6 );
      v6 = *(__int64 **)(a1 + 784);
    }
    for ( i = v5; i != v6; ++i )
    {
      if ( *i )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*i + 16LL))(*i);
    }
    *(_QWORD *)(a1 + 784) = v5;
    if ( v2 )
      LeaveCriticalSection(v2);
    v11 = (_QWORD *)*((_QWORD *)&v16 + 1);
    for ( j = (_QWORD *)v16; j != v11; ++j )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*j + 32LL))(*j, a1);
    v12 = (__int128 *)v16;
    if ( (_QWORD)v16 )
    {
      v13 = (_QWORD *)*((_QWORD *)&v16 + 1);
      if ( (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
      {
        v14 = (_QWORD *)v16;
        do
        {
          if ( *v14 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 16LL))(*v14);
          ++v14;
        }
        while ( v14 != v13 );
      }
      v15 = 8 * ((v17 - (__int64)v12) >> 3);
      v19 = (__int128 *)v15;
      v20 = v12;
      if ( v15 >= 0x1000 )
      {
        sub_1800BB290(&v20, &v19);
        v15 = (unsigned __int64)v19;
        v12 = v20;
      }
      sub_18006A148(v12, v15);
    }
  }
  catch ( ... )
  {
    sub_1800C8F54(retaddr, 2012LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  }
}
