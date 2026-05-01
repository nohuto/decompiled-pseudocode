/*
 * XREFs of ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18047EA7C
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18047E7E8 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x1804804B8 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18047CC3C (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::QueryArrangeView(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  void *ppvOut; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 + 16),
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v17 = 0LL;
    v10 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 = (*(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 80LL))(
            v10,
            &CLSID_WindowArrangementOperation,
            &GUID_83266822_9e63_4b62_a1b4_75b389df3388,
            &v17);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v14 = WindowArrangementView::DropLocationToArrangementAction(v12, a3);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, a2, v14);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v17)(
                v17,
                &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                a4);
        v9 = v11;
        if ( v11 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          goto LABEL_11;
        }
        v13 = 1568LL;
      }
      else
      {
        v13 = 1567LL;
      }
    }
    else
    {
      v13 = 1564LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x619,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
