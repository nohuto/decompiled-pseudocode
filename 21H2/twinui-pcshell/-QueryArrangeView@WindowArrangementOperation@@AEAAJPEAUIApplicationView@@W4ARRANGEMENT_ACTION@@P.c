/*
 * XREFs of ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180478034
 * Callers:
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180477BE0 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x18047821C (-QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180478384 (-QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804EFC14 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804F0290 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementOperation::QueryArrangeView(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  int ViewFullScreen; // ebx
  __int64 v11; // rdx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0;
  *a4 = 0;
  v15 = 0;
  if ( (int)a3 <= 0 )
    goto LABEL_25;
  if ( (int)a3 <= 2 )
  {
    ViewFullScreen = WindowArrangementOperation::QuerySnapView(a1, a2, a3, &v15);
    if ( ViewFullScreen < 0 )
    {
      v13 = 133LL;
      goto LABEL_18;
    }
    goto LABEL_24;
  }
  if ( (int)a3 <= 4 )
  {
    ViewFullScreen = WindowArrangementOperation::QueryReplaceView(a1, a2, a3, &v15);
    if ( ViewFullScreen < 0 )
    {
      v13 = 138LL;
      goto LABEL_18;
    }
LABEL_24:
    v7 = v15;
    goto LABEL_25;
  }
  if ( (_DWORD)a3 == 5 )
  {
    ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
    if ( ViewFullScreen >= 0 )
    {
      v7 = 2;
      goto LABEL_25;
    }
    v13 = 126LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
      (const char *)(unsigned int)ViewFullScreen);
    return (unsigned int)ViewFullScreen;
  }
  if ( (_DWORD)a3 == 6
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v16 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 152LL))(v8, a2, &v16, 0LL);
    ViewFullScreen = v9;
    if ( v9 < 0 )
    {
      v11 = 118LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      return (unsigned int)ViewFullScreen;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 64) + 240LL))(
           *(_QWORD *)(a1 + 64),
           2LL,
           v16);
    ViewFullScreen = v9;
    if ( v9 < 0 )
    {
      v11 = 119LL;
      goto LABEL_13;
    }
    v9 = CAppLayoutOperation::_EvictView(a1 + 24, a2, 2LL);
    ViewFullScreen = v9;
    if ( v9 < 0 )
    {
      v11 = 120LL;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
LABEL_25:
  *a4 = v7;
  return 0LL;
}
