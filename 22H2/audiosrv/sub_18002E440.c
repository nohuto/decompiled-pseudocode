/*
 * XREFs of sub_18002E440 @ 0x18002E440
 * Callers:
 *     sub_18002C970 @ 0x18002C970 (sub_18002C970.c)
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     sub_1800CAA70 @ 0x1800CAA70 (sub_1800CAA70.c)
 *     sub_1800CAC20 @ 0x1800CAC20 (sub_1800CAC20.c)
 * Callees:
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E440(LPCRITICAL_SECTION lpCriticalSection, void (__fastcall ***a2)(_QWORD, __int64 *))
{
  unsigned __int64 v3; // rsi
  const void *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned int i; // r13d
  WORD *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  void *v12; // rax
  __int64 v13; // rcx
  unsigned int j; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  WORD *v18; // [rsp+20h] [rbp-78h]
  const void *v19; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v21) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    v9 = &lpCriticalSection[1].DebugInfo->Type + 4 * i;
    v18 = v9;
    if ( v5 >= v6 )
    {
      v10 = v5 + 1;
      if ( v5 + 1 > v6 )
      {
        if ( v4 )
        {
          v11 = v6 >> 1;
          if ( v10 - v6 > v6 >> 1 )
            v11 = v10 - v6;
          v6 += v11;
          if ( v10 >= v6 )
            v6 = v5 + 1;
          v12 = (void *)o_calloc(v6, 8LL);
          v19 = v12;
          if ( !v12 )
LABEL_32:
            sub_1800B8610(2147942414LL);
          if ( 8 * v5 )
            memmove(v12, v4, 8 * v5);
          _o_free(v4);
          v4 = v19;
        }
        else
        {
          v6 = v5 + 1;
          v4 = (const void *)o_calloc(v5 + 1, 8LL);
          if ( !v4 )
            goto LABEL_32;
        }
        v9 = v18;
      }
    }
    v13 = *(_QWORD *)v9;
    *((_QWORD *)v4 + v5) = *(_QWORD *)v9;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    ++v5;
    v22 = ++v7;
  }
  LeaveCriticalSection(lpCriticalSection);
  for ( j = 0; j < v7; ++j )
  {
    if ( j >= v5 )
      sub_1800B8610(2147942487LL);
    v15 = *((_QWORD *)v4 + j);
    v21 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    (**a2)(a2, &v21);
  }
  if ( v4 )
  {
    if ( v5 )
    {
      do
      {
        v16 = *((_QWORD *)v4 + v3);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        ++v3;
      }
      while ( v3 < v5 );
    }
    _o_free(v4);
  }
  return 0LL;
}
