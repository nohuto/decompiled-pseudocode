/*
 * XREFs of ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180082794 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateBitmaps(CBrushRenderingEffect *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  struct CDrawingContext *v4; // rsi
  unsigned int v5; // r15d
  __int64 **i; // r14
  __int64 v7; // rbx
  bool v8; // di
  char *v9; // r9
  void (__fastcall *v10)(__int64, __int64, void *, __int64); // r12
  __int64 (__fastcall ***v11)(_QWORD, char *); // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  void *v15; // r8
  __int64 *v16; // rbx
  __int64 *v17; // r8
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, __int64 **); // rdi
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rdi
  int v23; // ebx
  __int64 (__fastcall ***v24)(_QWORD, char *); // rcx
  enum DXGI_COLOR_SPACE_TYPE v25; // ecx
  __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64 *, __int64, __int64 *); // rbx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+30h] [rbp-68h] BYREF
  __int64 v38; // [rsp+38h] [rbp-60h] BYREF
  char v39[8]; // [rsp+40h] [rbp-58h] BYREF
  char v40[16]; // [rsp+48h] [rbp-50h] BYREF
  char v41[16]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  v4 = a2;
  v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 76LL);
  if ( !v5 )
    return v2;
  for ( i = (__int64 **)((char *)this + 32); !*i; i += 3 )
  {
LABEL_23:
    if ( ++v3 >= v5 )
      return v2;
  }
  v7 = (__int64)*(i - 1);
  if ( v7 )
  {
    v8 = *((_QWORD *)v4 + 6) && !*((_BYTE *)g_pComposition + 1274);
    if ( *((_BYTE *)v4 + 192) )
      v9 = (char *)v4 + 164;
    else
      v9 = 0LL;
    LOBYTE(a2) = v8;
    (*(void (__fastcall **)(_QWORD, struct CDrawingContext *, _QWORD, char *))(*(_QWORD *)v7 + 40LL))(
      *(i - 1),
      a2,
      0LL,
      v9);
    v10 = *(void (__fastcall **)(__int64, __int64, void *, __int64))(*(_QWORD *)v7 + 48LL);
    v11 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v4 + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)v4 + 4) + 8LL) + 12LL));
    v13 = *(unsigned int *)((**v11)(v11, v40) + 8);
    v14 = *((_DWORD *)v4 + 100);
    if ( v14 )
      v15 = (void *)(*((_QWORD *)v4 + 52) + 68LL * (unsigned int)(v14 - 1));
    else
      v15 = &CMILMatrix::Identity;
    LOBYTE(v12) = v8;
    v10(v7, v12, v15, v13);
    v16 = *(i - 1);
    v17 = *i;
    v18 = *v16;
    *i = 0LL;
    v19 = *(__int64 (__fastcall **)(__int64 *, __int64 **))(v18 + 64);
    if ( v17 )
    {
      v20 = (__int64)v17 + *(int *)(v17[1] + 4) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v19(v16, i);
    v2 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v21,
        v36);
      goto LABEL_41;
    }
  }
  v22 = *i;
  (*(void (__fastcall **)(__int64 *, int *))(**i + 16))(*i, &v37);
  v23 = v37;
  if ( v37 != DisplayId::None && v37 != DisplayId::All )
  {
    v33 = *((_QWORD *)v4 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)v4 + 4) + 8LL) + 16LL);
    v34 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 8LL))(v33, v39);
    if ( v23 == DisplayId::None || v23 == v34 || v34 == DisplayId::All )
      *((_BYTE *)v4 + 8093) = 1;
    else
      *((_BYTE *)v4 + 8095) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v22 + 24))(v22) )
  {
    if ( *((_BYTE *)g_pComposition + 1274) )
      *((_BYTE *)v4 + 8095) = 1;
    else
      *((_BYTE *)v4 + 8092) = 1;
  }
  v24 = (__int64 (__fastcall ***)(_QWORD, char *))((char *)v22 + *(int *)(v22[1] + 8) + 8);
  v25 = *(_DWORD *)((**v24)(v24, v41) + 8);
  if ( v25 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || IsDXGIColorSpaceRec2020(v25) )
    *((_BYTE *)v4 + 8094) = 1;
  v26 = *i;
  v27 = **i;
  v38 = 0LL;
  v28 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v27 + 48);
  v29 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v4 + 3) + 40LL))((__int64)v4 + 24);
  v30 = v28(v26, v29, &v38);
  v2 = v30;
  if ( v30 >= 0 )
  {
    if ( v38 )
    {
      v31 = *(int *)(*(_QWORD *)(v38 + 8) + 4LL) + v38 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v2 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v30,
    v36);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v2, 0xE5u, 0LL);
  return v2;
}
