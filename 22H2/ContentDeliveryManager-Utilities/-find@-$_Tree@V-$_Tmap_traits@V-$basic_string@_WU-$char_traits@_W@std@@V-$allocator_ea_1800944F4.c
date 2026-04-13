/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800944F4
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800938AC (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800940F4 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009CE10 (-InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009D88C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?lower_bound@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180094940 (-lower_bound@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$al_ea_180094940.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  bool i; // zf
  int v12; // ecx
  int v13; // eax
  _QWORD *result; // rax
  _QWORD *v15; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
    a1,
    &v15);
  v6 = v15;
  if ( v15 == (_QWORD *)*a1 )
    goto LABEL_18;
  v7 = v15 + 4;
  v8 = v15[6];
  if ( v15[7] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v9 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v10 = v15[6];
  if ( v9 < v8 )
    v10 = v9;
  for ( i = v10 == 0; ; i = --v10 == 0 )
  {
    if ( i )
    {
      v12 = 0;
      goto LABEL_13;
    }
    if ( *(_WORD *)a3 != *(_WORD *)v7 )
      break;
    a3 = (_QWORD *)((char *)a3 + 2);
    v7 = (_QWORD *)((char *)v7 + 2);
  }
  v12 = *(_WORD *)a3 < *(_WORD *)v7 ? -1 : 1;
LABEL_13:
  v13 = v9 != v8;
  if ( v9 < v8 )
    v13 = -1;
  if ( v12 )
    v13 = v12;
  if ( v13 < 0 )
LABEL_18:
    v6 = (_QWORD *)*a1;
  result = a2;
  *a2 = v6;
  return result;
}
