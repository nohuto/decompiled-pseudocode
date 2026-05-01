/*
 * XREFs of ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x180480848
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18047E4F0 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x180481058 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x18047B918 (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18047CFCC (-DropLocationToArrangementAction@WindowArrangementView@@AEAA-AW4ARRANGEMENT_ACTION@@W4DropLocati.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18047EE0C (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x180480F3C (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804910A4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowArrangementView::UpdateDropFeedback(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // r15d
  const struct _GUID *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rbx
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  void *v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[16]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-70h]
  _BYTE v51[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v52; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v55[16]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v6 = 16;
  v40 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  v8 = CDropFeedbackList_CreateInstance(v7, &v40);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_59;
  }
  if ( a2 != 5 )
  {
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    v14 = WindowArrangementView::QueryArrangeView(a1, *(_QWORD *)(a1 + 88), a2, &v41);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EE,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v14);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      goto LABEL_59;
    }
    v42 = 0LL;
    v15 = v41;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, &v42);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F1,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v16);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      goto LABEL_21;
    }
    v47 = 0LL;
    v17 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v41, &v47);
    v9 = v17;
    if ( v17 < 0 )
    {
      v18 = 1268LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      goto LABEL_20;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 24LL))(v47, &v46);
    v9 = v17;
    if ( v17 < 0 )
    {
      v18 = 1271LL;
      goto LABEL_19;
    }
    v19 = 0;
    if ( !v46 )
    {
LABEL_48:
      v10 = (__int64 *)(a1 + 120);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 120));
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v42);
      *(_QWORD *)(a1 + 120) = v42;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      goto LABEL_49;
    }
    while ( 1 )
    {
      v43 = 0LL;
      v20 = v47;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v20 + 32LL))(
             v20,
             v19,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v43) >= 0 )
        break;
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      if ( ++v19 >= v46 )
        goto LABEL_48;
    }
    v45 = 0LL;
    v21 = v43;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v21 + 32LL))(
           v21,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v45) >= 0 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v43 + 72LL))(v43, 0LL, &v53);
      if ( !(unsigned int)SHIsSameObject(v45, *(struct IUnknown **)(a1 + 88)) )
      {
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 80LL))(v43);
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 88LL))(v43);
        if ( v26 )
        {
          if ( !v27 )
          {
            v52 = 0LL;
            v48[0] = 0LL;
            v28 = v42;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v48);
            v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v28 + 152LL))(
                    v28,
                    *(_QWORD *)(a1 + 88),
                    v48,
                    0LL);
            v30 = v48[0];
            if ( v29 < 0 )
              v30 = v43;
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 56LL))(v30, 0LL, &v52);
            (*(void (__fastcall **)(void *, _QWORD, __int128 *, _QWORD))(*(_QWORD *)v40 + 80LL))(
              v40,
              (unsigned int)v45,
              &v52,
              v6 | 2);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v48);
            goto LABEL_46;
          }
        }
        else if ( !v27 )
        {
          goto LABEL_46;
        }
        v22 = v40;
        v24 = *(_QWORD *)v40;
        v25 = 0LL;
        v23 = (unsigned int)v45;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(a1 + 152) == 1 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42)
          || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42) )
        {
          v6 |= 0x200u;
        }
        if ( a2 <= 1 && !*(_BYTE *)(a1 + 312) )
        {
          v54 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 80) + 120LL))(
                             *(_QWORD *)(a1 + 80),
                             v55);
          (*(void (__fastcall **)(void *, __int64, __int64, __int128 *))(*(_QWORD *)v40 + 72LL))(v40, 101LL, 3LL, &v54);
        }
        v22 = v40;
        v23 = 101LL;
        v24 = *(_QWORD *)v40;
        if ( a2 == 6 )
        {
          (*(void (__fastcall **)(void *, __int64, _QWORD))(v24 + 112))(v40, 101LL, v6);
          goto LABEL_46;
        }
        if ( a3 == 6 )
        {
          (*(void (__fastcall **)(void *, __int64, __int128 *, _QWORD))(v24 + 120))(v40, 101LL, &v53, v6);
          goto LABEL_46;
        }
        v25 = 3LL;
LABEL_45:
        (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(v24 + 88))(v22, v23, v25, &v53, v6);
      }
    }
LABEL_46:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    goto LABEL_47;
  }
  v10 = (__int64 *)(a1 + 120);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 120), (__int64 *)(a1 + 112));
  v41 = 0LL;
  v11 = *(_QWORD *)(a1 + 120);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 128LL))(v11, &v41);
  v9 = v12;
  if ( v12 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v41 + 24LL))(v41, 1LL, v49) >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v40 + 80LL))(v40, v50, v51, 17LL);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 1256LL;
        goto LABEL_9;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_49:
    v44 = 0LL;
    v31 = *v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v31 + 168LL))(v31, &v44, 0LL);
    v32 = v44;
    if ( v44
      || (v33 = *v10,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44),
          (*(void (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v33 + 152LL))(
            v33,
            *(_QWORD *)(a1 + 88),
            &v44,
            0LL),
          (v32 = v44) != 0) )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v32 + 56LL))(v32, 0LL, &v52);
      (*(void (__fastcall **)(void *, __int64, __int64, __int128 *, unsigned int))(*(_QWORD *)v40 + 88LL))(
        v40,
        100LL,
        1LL,
        &v52,
        v6);
    }
    LOBYTE(v34) = a2 == 5;
    v35 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), v34);
    v9 = v35;
    if ( v35 >= 0 )
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(
              *(_QWORD *)(a1 + 72),
              v40,
              0LL);
      v9 = v35;
      if ( v35 >= 0 )
      {
        v38 = WindowArrangementView::DropLocationToArrangementAction(v37, a2);
        WindowArrangementView::UpdateUIADropEffect(a1, v38);
        v9 = 0;
        goto LABEL_58;
      }
      v36 = 1384LL;
    }
    else
    {
      v36 = 1383LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v35);
LABEL_58:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    goto LABEL_59;
  }
  v13 = 1252LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_59:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  return v9;
}
