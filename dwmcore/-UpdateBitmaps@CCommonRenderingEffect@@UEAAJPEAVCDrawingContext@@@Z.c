__int64 __fastcall CCommonRenderingEffect::UpdateBitmaps(CCommonRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 **v2; // rdi
  __int64 result; // rax
  unsigned int v4; // ebp
  __int64 v6; // rbx
  bool v7; // si
  char *v8; // r9
  void (__fastcall *v9)(__int64, bool, void *, __int64); // r15
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  __int64 v11; // r9
  int v12; // eax
  void *v13; // r8
  __int64 *v14; // rbx
  __int64 *v15; // r8
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, __int64 **); // rsi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 *v21; // rsi
  int v22; // ebx
  __int64 *v23; // rcx
  enum DXGI_COLOR_SPACE_TYPE v24; // ecx
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64 *, __int64, __int64 *); // rbx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v37[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v38[16]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v39[16]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (__int64 **)((char *)this + 24);
  result = 0LL;
  v4 = 0;
  while ( 1 )
  {
    if ( !*v2 )
      goto LABEL_3;
    v6 = (__int64)*(v2 - 1);
    if ( v6 )
    {
      v7 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 1274);
      if ( *((_BYTE *)a2 + 192) )
        v8 = (char *)a2 + 164;
      else
        v8 = 0LL;
      (*(void (__fastcall **)(_QWORD, bool, _QWORD, char *))(*(_QWORD *)v6 + 40LL))(*(v2 - 1), v7, 0LL, v8);
      v9 = *(void (__fastcall **)(__int64, bool, void *, __int64))(*(_QWORD *)v6 + 48LL);
      v10 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)a2 + 4)
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
      v11 = *(unsigned int *)((**v10)(v10, v38) + 8);
      v12 = *((_DWORD *)a2 + 100);
      if ( v12 )
        v13 = (void *)(*((_QWORD *)a2 + 52) + 68LL * (unsigned int)(v12 - 1));
      else
        v13 = &CMILMatrix::Identity;
      v9(v6, v7, v13, v11);
      v14 = *(v2 - 1);
      v15 = *v2;
      v16 = *v14;
      *v2 = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64 *, __int64 **))(v16 + 64);
      if ( v15 )
      {
        v18 = (__int64)v15 + *(int *)(v15[1] + 4) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v17(v14, v2);
      v20 = v19;
      if ( v19 < 0 )
        break;
    }
    v21 = *v2;
    (*(void (__fastcall **)(__int64 *, int *))(**v2 + 16))(*v2, &v35);
    v22 = v35;
    if ( v35 != DisplayId::None && v35 != DisplayId::All )
    {
      v31 = *((_QWORD *)a2 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 16LL);
      v32 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 8LL))(v31, v37);
      if ( v22 == DisplayId::None || v22 == v32 || v32 == DisplayId::All )
        *((_BYTE *)a2 + 8093) = 1;
      else
        *((_BYTE *)a2 + 8095) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v21 + 24))(v21) )
    {
      if ( *((_BYTE *)g_pComposition + 1274) )
        *((_BYTE *)a2 + 8095) = 1;
      else
        *((_BYTE *)a2 + 8092) = 1;
    }
    v23 = (__int64 *)((char *)v21 + *(int *)(v21[1] + 8) + 8);
    v24 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64 *, _BYTE *))*v23)(v23, v39) + 8);
    if ( v24 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || IsDXGIColorSpaceRec2020(v24) )
      *((_BYTE *)a2 + 8094) = 1;
    v25 = *v2;
    v26 = **v2;
    v36 = 0LL;
    v27 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v26 + 48);
    v28 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
    v29 = v27(v25, v28, &v36);
    v20 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v29,
        v34);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v36);
      goto LABEL_32;
    }
    if ( v36 )
    {
      v30 = *(int *)(*(_QWORD *)(v36 + 8) + 4LL) + v36 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    result = 0LL;
LABEL_3:
    ++v4;
    v2 += 3;
    if ( v4 >= 2 )
      return result;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v19,
    v34);
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v20, 0x71u, 0LL);
  return v20;
}
