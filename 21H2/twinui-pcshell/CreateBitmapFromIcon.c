/*
 * XREFs of CreateBitmapFromIcon @ 0x1803F5A5C
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1803F4D58 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     HIMAGELIST_QueryInterface @ 0x1801AEE60 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x1801AEEC8 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x1801AEF3C (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x1801AEF90 (ImageList_ReplaceIcon.c)
 *     ?Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z @ 0x1803F4C88 (-Create32BitHBITMAP@@YAJPEAUHDC__@@PEBUtagSIZE@@PEAPEAXPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CreateBitmapFromIcon(HICON hicon, __int64 a2, void **a3, const struct tagSIZE *a4, _QWORD *a5)
{
  int v6; // r12d
  HRESULT v8; // ebx
  HDC CompatibleDC; // rax
  HDC v10; // rsi
  HGDIOBJ v11; // rax
  int v12; // r9d
  struct _IMAGELIST *v13; // rax
  int v14; // edx
  struct _IMAGELIST *v15; // r14
  const IID *v16; // rdx
  void *v17; // rcx
  HGDIOBJ v18; // rax
  int v20; // [rsp+20h] [rbp-91h]
  void *ppv; // [rsp+30h] [rbp-81h] BYREF
  HGDIOBJ h; // [rsp+38h] [rbp-79h] BYREF
  HGDIOBJ v23; // [rsp+40h] [rbp-71h]
  int v24; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-59h] BYREF
  int v26; // [rsp+60h] [rbp-51h]
  HDC v27; // [rsp+68h] [rbp-49h]
  LONG cx; // [rsp+78h] [rbp-39h]
  LONG cy; // [rsp+7Ch] [rbp-35h]
  int v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+8Ch] [rbp-25h]
  int v32; // [rsp+90h] [rbp-21h]
  _DWORD v33[4]; // [rsp+B0h] [rbp-1h] BYREF

  v6 = 0;
  *a5 = 0LL;
  v8 = Create32BitHBITMAP((HDC)hicon, a4, a3, (HBITMAP *)&h);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = -2147467259;
  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  if ( !CompatibleDC )
  {
LABEL_19:
    DeleteObject(h);
    *a5 = 0LL;
    return (unsigned int)v8;
  }
  v11 = SelectObject(CompatibleDC, h);
  v33[0] = 0;
  v33[1] = 0;
  v23 = v11;
  v33[2] = a4->cx;
  v33[3] = a4->cy;
  SHFillRectClr(v10, v33, 0xFFFFFFFFLL);
  ppv = 0LL;
  if ( hicon )
  {
    v8 = -2147024882;
    v13 = ImageList_Create(a4->cx, a4->cy, 0x21u, v12, v20);
    v15 = v13;
    if ( !v13 )
      goto LABEL_13;
    v6 = ImageList_ReplaceIcon(v13, v14, hicon);
    if ( v6 != -1 )
      v8 = HIMAGELIST_QueryInterface(v15, v16, &ppv);
    ImageList_Destroy(v15);
  }
  else
  {
    v8 = SHGetImageList(-1, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &ppv);
    if ( v8 < 0 )
      goto LABEL_13;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppv + 256LL))(
           ppv,
           (unsigned int)a4->cx,
           (unsigned int)a4->cy);
    if ( v8 < 0 )
      goto LABEL_13;
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppv + 296LL))(ppv, 0LL, 0LL);
  }
  if ( v8 >= 0 )
  {
    v24 = 88;
    memset_0(v25, 0, 0x50uLL);
    cx = a4->cx;
    cy = a4->cy;
    v30 = -16777216;
    v31 = -16777216;
    v26 = v6 & 0xFFFFFF;
    v27 = v10;
    v32 = 327681;
    v8 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppv + 64LL))(ppv, &v24);
  }
LABEL_13:
  v17 = ppv;
  ppv = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = SelectObject(v10, v23);
  *a5 = v18;
  if ( v8 >= 0 && !v18 )
    v8 = -2147467259;
  DeleteDC(v10);
  if ( v8 < 0 )
    goto LABEL_19;
  return (unsigned int)v8;
}
