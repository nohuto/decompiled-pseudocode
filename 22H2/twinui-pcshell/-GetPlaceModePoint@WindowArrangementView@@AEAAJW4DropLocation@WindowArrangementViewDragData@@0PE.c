/*
 * XREFs of ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18047D1E0
 * Callers:
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18047D1E0 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18047E160 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18047F3C8 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18047D1E0 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowArrangementView::GetPlaceModePoint(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  int PlaceModePoint; // eax
  unsigned int v14; // edi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  int v21[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v23[10]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a4 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    *(_QWORD *)v21 = 0LL;
    v18 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v18 + 104LL))(
            v18,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v21);
    v10 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32F,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)v21 = 0LL;
    v16 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v16 + 104LL))(
            v16,
            1LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v21);
    v10 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x339,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_21;
    }
LABEL_20:
    v22 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v21 + 56LL))(*(_QWORD *)v21, 0LL, &v22);
    LODWORD(v20) = v22 + (DWORD2(v22) - (int)v22) / 2;
    HIDWORD(v20) = DWORD1(v22) + (HIDWORD(v22) - DWORD1(v22)) / 2;
    *a4 = v20;
    v10 = 0;
    goto LABEL_21;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v23);
    v20 = (unsigned int)(v23[0] + (v23[2] - v23[0]) / 2);
LABEL_14:
    *a4 = v20;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    PlaceModePoint = WindowArrangementView::GetPlaceModePoint(a1, a3, 0xFFFFFFFFLL, &v20);
    v14 = PlaceModePoint;
    if ( PlaceModePoint < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PlaceModePoint);
      return v14;
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v23);
    HIDWORD(v20) = v23[3];
    goto LABEL_14;
  }
  if ( v9 == 1 )
  {
    *(_QWORD *)v21 = 0LL;
    v11 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v11 + 104LL))(
            v11,
            0LL,
            2LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v21);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x343,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v12);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      return v10;
    }
    goto LABEL_20;
  }
  v10 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)0x80004005LL);
  return v10;
}
