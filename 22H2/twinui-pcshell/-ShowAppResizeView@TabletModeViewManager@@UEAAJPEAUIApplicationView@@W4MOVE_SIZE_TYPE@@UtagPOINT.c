/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x180471D40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1800D7478 (-IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1800DA5D0 (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7660 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x180470C40 (wil--details--ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___--_ScopeExitFn__lambda_7f57.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x180472FA4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x180483EE4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x1804E09B0 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  char v7; // r15
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct _GUID *v19; // rdx
  int Instance; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  IUnknown *v25; // rax
  IUnknown *v26; // rbx
  enum ADJACENT_DISPLAY_EDGES *v27; // [rsp+20h] [rbp-59h]
  IUnknown *punk; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  IUnknown *v30; // [rsp+40h] [rbp-39h] BYREF
  struct tagRECT v31; // [rsp+48h] [rbp-31h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-19h] BYREF
  char v34; // [rsp+70h] [rbp-9h]
  _BYTE v35[40]; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = a4;
  v7 = 0;
  if ( IsPPIEdition() )
  {
    v7 = a3 == 1;
    if ( !TabletModeViewManager::IsResizeAllowedOnLayout((TabletModeViewManager *)(a1 - 11)) )
      return 2147500037LL;
  }
  if ( !a2 )
    goto LABEL_17;
  v29 = 0LL;
  v9 = a1[4];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 72LL))(v9, &v29);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29) )
    {
      v11 = -2147019873;
      v12 = 2147947423LL;
      v13 = 307LL;
      goto LABEL_9;
    }
    v30 = 0LL;
    v14 = v29;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, IUnknown **, _QWORD))(*(_QWORD *)v14 + 152LL))(
            v14,
            a2,
            &v30,
            0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 311LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v16);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v30);
      goto LABEL_23;
    }
    ((void (__fastcall *)(IUnknown *, _QWORD, struct tagRECT *))v30->lpVtbl[2].AddRef)(v30, 0LL, &v33);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 24LL))(v29, v35);
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)v35, &v33, &v33, &v31, v27);
    if ( (a3 != 4 || (v31.left & 1) == 0) && (a3 != 3 || (v31.left & 2) == 0) )
    {
      v11 = -2147418113;
      v16 = 2147549183LL;
      v17 = 326LL;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v30);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v29);
LABEL_17:
    v18 = a1[7];
    if ( v18 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 32LL))(v18, 0LL);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Instance = AppResizeView_CreateInstance(v7, v19, (void **)&punk);
    v11 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
LABEL_38:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&punk);
      return v11;
    }
    *(_QWORD *)&v31.right = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.right);
    v21 = ((__int64 (__fastcall *)(IUnknown *, GUID *, LONG *))punk->lpVtbl->QueryInterface)(
            punk,
            &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
            &v31.right);
    v11 = v21;
    if ( v21 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
      v21 = TabletModeInputHandler_CreateInstance(1LL, *(_QWORD *)&v31.right, v23, a1 + 8);
      v11 = v21;
      if ( v21 >= 0 )
      {
        *(_QWORD *)&v33.left = a1 - 11;
        *(_QWORD *)&v33.right = &punk;
        v34 = 1;
        IUnknown_SetSite(punk, (IUnknown *)a1 - 11);
        v24 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].QueryInterface)(punk, &v32);
        v11 = v24;
        if ( v24 >= 0 )
        {
          v25 = (IUnknown *)a1[7];
          v26 = punk;
          if ( v25 != punk )
          {
            if ( punk )
            {
              ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
              v25 = (IUnknown *)a1[7];
            }
            v30 = v25;
            a1[7] = v26;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
          }
          TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)(a1 - 11));
          v34 = 0;
          v11 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x161,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v24);
        }
        wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___((IUnknown ***)&v33);
        goto LABEL_37;
      }
      v22 = 342LL;
    }
    else
    {
      v22 = 341LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_37:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v31.right);
    goto LABEL_38;
  }
  v12 = (unsigned int)v10;
  v13 = 306LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)v12);
LABEL_23:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v29);
  return v11;
}
