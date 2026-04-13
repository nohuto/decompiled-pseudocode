/*
 * XREFs of ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800842D0
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180053514 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800064C4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x1800487FC (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180084934 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits.c)
 *     ??$_Buynode@U?$pair@PEA_WPEA_W@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEA_WPEA_W@1@@Z @ 0x180084980 (--$_Buynode@U-$pair@PEA_WPEA_W@std@@@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180084A44 (--$_Insert_nohint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca_ea_180084A44.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180084CA0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CreativeFramework::Actions::GetActionService(__int64 *a1, int a2, __int64 a3, __int64 **a4)
{
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 **v14; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  void **v17; // rbx
  unsigned __int8 (*v18)(void); // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rbx
  unsigned int v23; // eax
  char *v24; // [rsp+28h] [rbp-58h]
  __int64 **v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  _QWORD v27[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-18h]
  char v30; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26 = 0LL;
  v25 = (__int64 **)std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::wstring>>>::_Buyheadnode();
  v8 = *a4;
  v9 = (__int64 *)*v8;
  while ( v9 != v8 )
  {
    v10 = v9 + 4;
    v11 = v9 + 8;
    if ( (unsigned __int64)v9[11] >= 8 )
      v11 = (_QWORD *)*v11;
    if ( (unsigned __int64)v9[7] >= 8 )
      v10 = (_QWORD *)*v10;
    v27[0] = v10;
    v27[1] = v11;
    v12 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<wchar_t *,wchar_t *>>(
            &v25,
            v27);
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
      (unsigned int)&v25,
      (unsigned int)&v30,
      v13,
      v12 + 32,
      v12);
    if ( !*((_BYTE *)v9 + 25) )
    {
      v14 = (__int64 **)v9[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v9 = i;
        v9 = i;
      }
      else
      {
        v9 = (__int64 *)v9[2];
        for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v9 = j;
      }
    }
  }
  v17 = (void **)&unk_1800EB4E0;
  while ( 1 )
  {
    if ( *(_DWORD *)v17 == a2 )
    {
      v18 = (unsigned __int8 (*)(void))v17[2];
      if ( !v18 || v18() )
        break;
    }
    v17 += 3;
    if ( v17 == &CreativeFramework::Actions::IActionService::`vftable' )
    {
      v23 = wil::verify_hresult<long>(0x80070490);
      LODWORD(v24) = a2;
      wil::details::in1diag3::Throw_HrMsg(
        retaddr,
        (void *)0x47,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\actionfactory.cpp",
        (const char *)v23,
        (int)"Requested action service: %d",
        v24,
        0,
        -2LL);
      JUMPOUT(0x180084507LL);
    }
  }
  v19 = (__int64 *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64 ***))v17[1])(v28, a3, &v25);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a1 != v19 )
  {
    a1[1] = v19[1];
    v19[1] = 0LL;
    v20 = *a1;
    *a1 = *v19;
    *v19 = v20;
  }
  v21 = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    (__int64)&v25,
    v25[1]);
  v25[1] = (__int64 *)v25;
  *v25 = (__int64 *)v25;
  v25[2] = (__int64 *)v25;
  v26 = 0LL;
  operator delete(v25);
  return a1;
}
