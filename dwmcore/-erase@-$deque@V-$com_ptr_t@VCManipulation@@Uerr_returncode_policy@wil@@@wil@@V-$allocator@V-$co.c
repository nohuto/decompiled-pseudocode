/*
 * XREFs of ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802724BC
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180272620 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_180272620.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?pop_back@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180232BC8 (-pop_back@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1802708D8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipulation@@Uer.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x180270988 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 */

__int64 **__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(
        __int64 *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *v8; // r9
  __int64 v9; // r10
  char *v10; // r14
  signed __int64 v11; // rsi
  __int64 v12; // r11
  __int64 *v13; // r11
  __int64 *v14; // r15
  __int64 *v16; // rax
  __int64 *v18[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v19[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-38h]
  __int64 *v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-20h]
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  v6 = a1;
  if ( a1 )
    a1 = (__int64 *)*a1;
  v7 = *(__int64 **)(a4 + 16);
  if ( v6 )
    v8 = (__int64 *)*v6;
  else
    v8 = 0LL;
  v9 = v6[3];
  v10 = (char *)v5 - v9;
  v11 = (char *)v7 - (char *)v5;
  if ( v7 == v5 )
  {
    a2[1] = (__int64 *)(v11 & (unsigned __int64)a2[1]);
    *a2 = a1;
    a2[2] = v5;
  }
  else
  {
    v12 = v6[4];
    v18[1] = 0LL;
    v13 = (__int64 *)(v9 + v12);
    v19[1] = 0LL;
    v21[1] = 0LL;
    v14 = (__int64 *)*v6;
    v18[2] = v7;
    v18[0] = v8;
    if ( (unsigned __int64)v10 >= (char *)v13 - (char *)v7 )
    {
      v21[0] = a1;
      v22 = v5;
      v20 = v13;
      v19[0] = v14;
      std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        v23,
        v18,
        v19,
        (__int64)v21);
      do
      {
        std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::pop_back(v6);
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v19[0] = a1;
      v20 = v5;
      v22 = (__int64 *)v9;
      v21[0] = v14;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        v23,
        v21,
        (__int64)v19,
        (__int64)v18);
      do
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(v6[1] + 8 * ((v6[2] - 1) & ((unsigned __int64)v6[3] >> 1))) + 8 * (v6[3] & 1)));
        if ( v6[4]-- == 1 )
          v6[3] = 0LL;
        else
          ++v6[3];
        --v11;
      }
      while ( v11 );
    }
    a2[1] = 0LL;
    v16 = (__int64 *)*v6;
    a2[2] = (__int64 *)&v10[v6[3]];
    *a2 = v16;
  }
  return a2;
}
