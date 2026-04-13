/*
 * XREFs of ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x18006BA14
 * Callers:
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18006B848 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800C8DEC (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B2658 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800CFDA8 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::_Copy(const void **Src, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // r14
  const void *v10; // rdx
  _QWORD *result; // rax
  void *v12; // rax
  unsigned __int64 v13; // rcx
  void *v21; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  v5 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL - v7 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v5 = a2;
  }
  try
  {
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v5 != -1LL && (v8 > 0x7FFFFFFFFFFFFFFFLL || (v9 = operator new(2 * v8)) == 0LL) )
      std::_Xbad_alloc();
  }
  catch ( ... )
  {
    try
    {
      v12 = 0LL;
      v13 = a2 + 1;
      if ( a2 != -1LL && (v13 > 0x7FFFFFFFFFFFFFFFLL || (v12 = operator new(2 * v13)) == 0LL) )
        std::_Xbad_alloc();
      v21 = v12;
    }
    catch ( ... )
    {
      std::wstring::_Tidy((void **)Src, 1, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v9 = v21;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 8 )
      v10 = v4;
    else
      v10 = *v4;
    memcpy_0(v9, v10, 2 * v3);
  }
  if ( (unsigned __int64)v4[3] >= 8 )
    operator delete((void *)*v4);
  result = v4 + 2;
  *v4 = v9;
  v4[3] = (const void *)v5;
  if ( v5 >= 8 )
    v4 = (const void **)v9;
  *result = v3;
  *((_WORD *)v4 + v3) = 0;
  return result;
}
