/*
 * XREFs of ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x1802D1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801CB638 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x1802CD1CC (--0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::SubscribeToViewChangeNotifications(
        PeoplePaneViewManager *this,
        struct IPeoplePaneViewUpdateSink *a2,
        unsigned int *a3)
{
  struct IPeoplePaneViewUpdateSink *v6; // rsi
  unsigned int v7; // ecx
  _QWORD *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  PeoplePaneViewManager::ViewChangeListener *v11; // rcx
  int v13[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IPeoplePaneViewUpdateSink *v16; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)v13 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v16 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    *(_QWORD *)v13 = a2;
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 106);
  v14 = v7;
  *((_DWORD *)this + 106) = v7 + 1;
  *a3 = v7;
  v8 = (_QWORD *)((char *)this + 392);
  v9 = 0;
  v10 = v8[1];
  if ( v10 == v8[3]
    && (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               (__int64)v8,
               v10 + 1,
               a3),
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    ++v8[1];
    v11 = (PeoplePaneViewManager::ViewChangeListener *)(16LL * v8[1] + *v8 - 16LL);
    if ( v11 )
      PeoplePaneViewManager::ViewChangeListener::ViewChangeListener(
        v11,
        (const struct PeoplePaneViewManager::ViewChangeListener *)v13);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IPeoplePaneViewUpdateSink *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v9;
}
