/*
 * XREFs of ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x18048A4E4
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180489FE8 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0BE8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeData::ComputeRightMinWidthMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v4; // ebx
  int v5; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v6; // rdx
  int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int v15; // ecx
  int v17[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  int v20; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v19);
  v4 = v19;
  v18 = v19;
  v5 = DWORD2(v19);
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)&v19, v6);
  v8 = v5 - v4 - v7;
  *(_QWORD *)v17 = 0LL;
  v9 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v9 + 104LL))(
          v9,
          1LL,
          5LL,
          &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
          v17);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)v17 + 72LL))(*(_QWORD *)v17, &v19, v8);
    v13 = v20;
    v14 = 320 * v20 / 100 + 2 * (v20 / 100);
    if ( v12 > v14 )
      v14 = v12;
    *(_OWORD *)a2 = v18;
    v15 = DWORD2(v19) - v7 / 2 - v14;
    *(_DWORD *)a2 = v15;
    *((_DWORD *)a2 + 2) = v15 + 175 * v13 / 100;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
  return v11;
}
