/*
 * XREFs of ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18047D018
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18047CC90 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18047E4F0 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18047F5C0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18047F758 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1804803C0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18047D980 (-GetTargetViewFromLayout@WindowArrangementView@@AEAA-AV-$ComPtr@UIApplicationView@@@WRL@Microsof.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804910A4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::EnablePlaceModeDropFeedback(__int64 a1, int a2, int *a3, __int64 a4)
{
  const struct _GUID *v7; // rcx
  int v8; // ebx
  char v9; // r15
  const struct _GUID *v10; // rcx
  __int64 v11; // r8
  int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // r13d
  bool v16; // di
  __int64 v17; // r9
  __int64 v18; // r13
  void *v20; // [rsp+30h] [rbp-59h] BYREF
  void *v21; // [rsp+38h] [rbp-51h] BYREF
  __int64 v22; // [rsp+40h] [rbp-49h] BYREF
  struct IUnknown *v23; // [rsp+48h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-39h]
  _BYTE v25[16]; // [rsp+60h] [rbp-29h] BYREF
  struct IUnknown *v26; // [rsp+70h] [rbp-19h]
  _BYTE v27[40]; // [rsp+78h] [rbp-11h] BYREF

  v24 = a4;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v8 = CDropFeedbackList_CreateInstance(v7, &v21);
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    if ( a2 == 1 )
    {
      v9 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v8 = CDropFeedbackList_CreateInstance(v10, &v20);
    }
    else
    {
      v9 = 0;
    }
    if ( v8 >= 0 )
    {
      if ( a3 )
        v11 = (unsigned int)a3[1];
      else
        v11 = 0xFFFFFFFFLL;
      if ( a3 )
        v12 = *a3;
      else
        v12 = 0;
      v22 = 0LL;
      WindowArrangementView::GetTargetViewFromLayout(a1, &v23, v11);
      v13 = *(_QWORD *)(a1 + 120);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 128LL))(v13, &v22);
      if ( v8 >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(v22, 1LL, v25) < 0 )
            break;
          v15 = (unsigned int)v26;
          v16 = v23 && (unsigned int)SHIsSameObject(v23, v26);
          v17 = 2LL;
          if ( v9 )
          {
            v8 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, __int64))(*(_QWORD *)v20 + 104LL))(
                   v20,
                   v15,
                   v14,
                   512LL);
            v17 = 0x800000LL;
          }
          else if ( v16 )
          {
            v17 = 1024LL;
            if ( v12 == 2 )
              v17 = 2048LL;
          }
          if ( v8 < 0 )
            goto LABEL_39;
          if ( a2 == 3 )
            v17 = 1LL;
          else
            LODWORD(v17) = v17 | 0x200;
          if ( !v9 )
          {
            if ( a2 == 2 )
            {
              LODWORD(v17) = v17 | 0x400000;
            }
            else if ( v16 && v12 == 3 )
            {
              LODWORD(v17) = v17 | 0x200000;
            }
            else
            {
              v17 = (unsigned int)v17 | 0x10;
            }
          }
          v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v21 + 80LL))(v21, v15, v27, v17);
        }
        while ( v8 >= 0 );
        if ( v8 >= 0 )
        {
          v18 = v24;
          (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
            *(_QWORD *)(a1 + 72),
            v21,
            v24);
          if ( v20 )
            (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
              *(_QWORD *)(a1 + 72),
              v20,
              v18);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), 0LL);
        }
      }
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v8;
}
