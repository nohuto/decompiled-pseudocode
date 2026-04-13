/*
 * XREFs of ??A?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180055EC0
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x180053F3C (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 *     _lambda_ade65b3910699df78508c17998720da4_::operator() @ 0x1800543F0 (_lambda_ade65b3910699df78508c17998720da4_--operator().c)
 *     _lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator() @ 0x180054814 (_lambda_fb6889284f8c6875beea5ab05f2a2ddf_--operator().c)
 *     _lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator() @ 0x180054C34 (_lambda_5733d5035a874d27ce3bcb89134ebdd6_--operator().c)
 *     _lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator() @ 0x1800550E0 (_lambda_c3bf47982beeb92429b0310f4e2c5f50_--operator().c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180037A0C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x1800494E0 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@@-$_.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180056600 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::map<std::wstring,std::wstring>::operator[](__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _WORD *v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  bool i; // zf
  int v12; // edx
  int v13; // eax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r9
  _WORD *v17; // rdx
  __int64 v18; // rcx
  bool j; // zf
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  _QWORD v24[2]; // [rsp+38h] [rbp-49h] BYREF
  void *v25[3]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-21h]
  void *v27[3]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-1h]
  void *v29[3]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+1Fh]

  v24[1] = -2LL;
  v4 = *(_QWORD **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    v7 = v5 + 4;
    if ( a2[3] < 8uLL )
      v8 = a2;
    else
      v8 = (_WORD *)*a2;
    v9 = v5[6];
    if ( (unsigned __int64)v5[7] >= 8 )
      v7 = (_QWORD *)*v7;
    v10 = a2[2];
    if ( v9 < v10 )
      v10 = v5[6];
    for ( i = v10 == 0; ; i = v10 == 0 )
    {
      if ( i )
      {
        v12 = 0;
        goto LABEL_14;
      }
      if ( *(_WORD *)v7 != *v8 )
        break;
      v7 = (_QWORD *)((char *)v7 + 2);
      ++v8;
      --v10;
    }
    v12 = *(_WORD *)v7 < *v8 ? -1 : 1;
LABEL_14:
    v13 = v9 != a2[2];
    if ( v9 < a2[2] )
      v13 = -1;
    if ( v12 )
      v13 = v12;
    if ( v13 >= 0 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v4 == v6 )
    goto LABEL_41;
  v14 = v4 + 4;
  v15 = v4[6];
  if ( v4[7] >= 8uLL )
    v14 = (_QWORD *)*v14;
  v16 = a2[2];
  if ( a2[3] < 8uLL )
    v17 = a2;
  else
    v17 = (_WORD *)*a2;
  v18 = v4[6];
  if ( v16 < v15 )
    v18 = a2[2];
  for ( j = v18 == 0; ; j = --v18 == 0 )
  {
    if ( j )
    {
      v20 = 0;
      goto LABEL_36;
    }
    if ( *v17 != *(_WORD *)v14 )
      break;
    ++v17;
    v14 = (_QWORD *)((char *)v14 + 2);
  }
  v20 = *v17 < *(_WORD *)v14 ? -1 : 1;
LABEL_36:
  v21 = v16 != v4[6];
  if ( v16 < v15 )
    v21 = -1;
  if ( v20 )
    v21 = v20;
  if ( v21 < 0 )
  {
LABEL_41:
    v30 = 7LL;
    v29[2] = 0LL;
    LOWORD(v29[0]) = 0;
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
    std::wstring::_Assign_rv(v25, a2);
    v28 = 7LL;
    v27[2] = 0LL;
    LOWORD(v27[0]) = 0;
    std::wstring::_Assign_rv(v27, v29);
    v22 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
            a1,
            v25);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_hint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      a1,
      (unsigned int)v24,
      (_DWORD)v4,
      v22 + 32,
      v22);
    v4 = (_QWORD *)v24[0];
    if ( v28 >= 8 )
      operator delete(v27[0]);
    if ( v26 >= 8 )
      operator delete(v25[0]);
    if ( v30 >= 8 )
      operator delete(v29[0]);
  }
  return v4 + 8;
}
