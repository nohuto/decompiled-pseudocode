/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180475C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801CB638 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CBF70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F63BC (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x180475A70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 *     ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x180475DC0 (-GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IApplicationView *a2)
{
  void *v4; // r8
  ULONGLONG TickCount64; // r12
  unsigned int v6; // edi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 *v9; // rsi
  wil::details::in1diag3 *v10; // rcx
  unsigned int EntryCountForView; // eax
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  volatile int *v15; // [rsp+60h] [rbp+8h] BYREF
  volatile int *v16; // [rsp+68h] [rbp+10h] BYREF

  v13[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
  TickCount64 = GetTickCount64();
  v13[1] = TickCount64;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 != *(_QWORD *)(a1 + 48)
    || (v7 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               a1 + 24,
               v8 + 1,
               v4),
        v7 >= 0) )
  {
    v9 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16 * (*(_QWORD *)(a1 + 32))++);
    if ( v9 )
    {
      *v9 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      v9[1] = TickCount64;
    }
  }
  v10 = retaddr;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v7);
  v16 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(a1);
  v15 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(a1);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    (__int64)v10,
    *(_DWORD *)(a1 + 56),
    (__int64)v4,
    &v15);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v15);
  EntryCountForView = PositionAdjustmentHistory::GetEntryCountForView((PositionAdjustmentHistory *)a1, a2);
  if ( EntryCountForView >= 3 )
    v6 = 2 - (EntryCountForView < 4);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return v6;
}
