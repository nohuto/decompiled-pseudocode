/*
 * XREFs of ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x1800EEEB8
 * Callers:
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@@Z @ 0x1800EF064 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@_ea_1800EF064.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@0@V10@00@Z @ 0x1800E6E40 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@0@V10@00@Z @ 0x1800E6EFC (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@V12.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1800E88A8 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 */

_QWORD *__fastcall std::deque<unsigned __int64>::erase(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  _QWORD **v6; // r8
  __int64 v8; // r9
  _QWORD **v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rdi
  bool v14; // zf
  _QWORD **v15; // rax
  unsigned __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-20h]
  _QWORD v24[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  v6 = 0LL;
  if ( a1 )
    v6 = (_QWORD **)*a1;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = 0LL;
  if ( a1 )
    v9 = (_QWORD **)*a1;
  v10 = a1[3];
  v11 = v10 + a1[4];
  v12 = v4 - v10;
  v13 = v8 - v4;
  if ( v4 - v10 >= v11 - v8 )
  {
    v22 = 0LL;
    if ( v6 && *v6 )
      *(_QWORD *)&v22 = **v6;
    v15 = (_QWORD **)*a1;
    v23 = v4;
    v21 = v11;
    v20 = (unsigned __int64)v15;
    v18 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v18 = **v9;
    v19 = v8;
    std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
      v24,
      (__int64 **)&v18,
      (__int64 **)&v20,
      (__int64)&v22);
    for ( ; v13; --v13 )
    {
      v14 = a1[4]-- == 1;
      if ( v14 )
        a1[3] = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v18 = **v9;
    v19 = v8;
    v20 = 0LL;
    if ( v6 && *v6 )
      *(_QWORD *)&v20 = **v6;
    v22 = *a1;
    v21 = v4;
    v23 = v10;
    std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
      v24,
      (__int64 **)&v22,
      (__int64)&v20,
      (__int64)&v18);
    for ( ; v13; --v13 )
    {
      v14 = a1[4]-- == 1;
      if ( v14 )
        a1[3] = 0LL;
      else
        ++a1[3];
    }
  }
  v16 = a1[3];
  *((_QWORD *)&v22 + 1) = 0LL;
  v23 = v16;
  *(_QWORD *)&v22 = *a1;
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+((__int64)&v22, a2, v12);
  return a2;
}
