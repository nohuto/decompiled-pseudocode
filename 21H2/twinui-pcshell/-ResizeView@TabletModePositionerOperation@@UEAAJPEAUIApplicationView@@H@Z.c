/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x18047A800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x18047985C (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x18047A3B4 (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0F78 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EFC6C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1804F0290 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F05E8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // esi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  const struct _GUID *v14; // r8
  int AdjacentItem; // eax
  int v16; // ebx
  int v17; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v18; // rdx
  int v19; // edi
  int v20; // esi
  int v21; // eax
  int v22; // ebx
  int ViewFullScreen; // eax
  void *v25; // [rsp+30h] [rbp-59h] BYREF
  struct IAppLayoutItem *v26; // [rsp+38h] [rbp-51h] BYREF
  __int64 v27; // [rsp+40h] [rbp-49h] BYREF
  int v28; // [rsp+48h] [rbp-41h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+50h] [rbp-39h]
  int v30; // [rsp+58h] [rbp-31h]
  __int128 v31; // [rsp+60h] [rbp-29h] BYREF
  __int128 v32; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v33[10]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v28 = a3;
  v5 = (TabletModePositionerOperation *)((char *)this - 176);
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176));
  v29 = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v30 = v7;
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_22;
  }
  v26 = 0LL;
  v10 = *((_QWORD *)this - 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  v11 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v10 + 152LL))(
          v10,
          a2,
          &v26,
          0LL);
  v9 = v11;
  if ( v11 >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v27 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v26, &v27);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v13);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        goto LABEL_21;
      }
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v5, v26, v14, &v25);
      v9 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x113,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), v33);
      v16 = v33[0];
      v17 = v33[2];
      v19 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v33, v18);
      v20 = v17 - v16;
      v21 = (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD))(*(_QWORD *)v25 + 72LL))(
              v25,
              v33,
              (unsigned int)(v20 - v19));
      v22 = v28;
      if ( v19 + v28 + v21 > v20 )
      {
        ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen((char *)this - 152, a2, 5LL);
        v9 = ViewFullScreen;
        if ( ViewFullScreen < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12C,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
            (const char *)(unsigned int)ViewFullScreen);
          v7 = v30;
          goto LABEL_18;
        }
      }
      else
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v26 + 56LL))(v26, 0LL, &v31);
        DWORD2(v31) = v22 + v31;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v27 + 104LL))(v27, 0LL, &v31);
        v32 = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v25 + 104LL))(v25, 0LL, &v32);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v7 = v30;
    }
    *((_DWORD *)this - 18) = 1;
    v11 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v9 = 0;
      goto LABEL_21;
    }
    v12 = 305LL;
    goto LABEL_15;
  }
  v12 = 264LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v11);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
LABEL_22:
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
