/*
 * XREFs of ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x180401390
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180400D40 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180401190 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SwitchItemCollection::_AddViews(SwitchItemCollection *this, struct IObjectArray *a2)
{
  char v4; // di
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v12);
  if ( v5 < 0 )
  {
    v6 = 169LL;
    goto LABEL_3;
  }
  v8 = 0;
  if ( !v12 )
    return 0LL;
  do
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v9 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))a2->lpVtbl->GetAt)(
           a2,
           v8,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v13);
    if ( v9 < 0 )
    {
      v10 = 173LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_11;
    }
    v9 = SwitchItemCollection::_AddViewItem(this, v13);
    if ( v9 < 0 )
    {
      v10 = 174LL;
      goto LABEL_7;
    }
    v4 = 1;
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    ++v8;
  }
  while ( v8 < v12 );
  if ( v4 || !v12 )
    return 0LL;
  v5 = -2147019873;
  v6 = 181LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
