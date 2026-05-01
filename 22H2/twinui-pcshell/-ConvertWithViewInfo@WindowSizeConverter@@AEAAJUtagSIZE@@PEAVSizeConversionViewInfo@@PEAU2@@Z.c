/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x18003AE54
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180039180 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180440A90 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x180440B50 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180039378 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180039480 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  LONG cx; // esi
  __int64 v8; // rbx
  int v9; // eax
  int LastError; // r14d
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int128 v18; // xmm0
  int v19; // eax
  HWND v20; // r14
  int v21; // r15d
  const char *v22; // r9
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // [rsp+20h] [rbp-69h] BYREF
  __int64 v33; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v35[3]; // [rsp+34h] [rbp-55h] BYREF
  __int128 v36; // [rsp+40h] [rbp-49h] BYREF
  __int64 **v37; // [rsp+50h] [rbp-39h]
  __int64 *v38; // [rsp+60h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+68h] [rbp-21h] BYREF
  struct tagSIZE v40; // [rsp+70h] [rbp-19h]
  __int64 v41; // [rsp+78h] [rbp-11h]
  struct tagRECT Rect; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v43; // [rsp+90h] [rbp+7h] BYREF
  __int128 v44; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  cx = a2.cx;
  v40 = a2;
  v8 = *((_QWORD *)a3 + 2);
  v41 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v36 = &Rect;
  *((_QWORD *)&v36 + 1) = this;
  v9 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___((struct IImmersiveMonitor ***)&v36);
  LastError = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v32);
  else
    LastError = 0;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)LastError,
      v32);
    goto LABEL_29;
  }
  v32 = 0LL;
  v38 = &v32;
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v36 = this;
  *((_QWORD *)&v36 + 1) = &Rect;
  v37 = &v38;
  v11 = wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___();
  LastError = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11,
      v32);
  else
    LastError = 0;
  if ( LastError < 0 )
  {
    v27 = (unsigned int)LastError;
    v28 = 594LL;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v32 + 112LL))(
            v32,
            255LL,
            *((_DWORD *)a3 + 6) & 1);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v13 = (__int64 *)*((_QWORD *)a3 + 4);
      v38 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
      v14 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, unsigned int *))(*v13 + 48))(v13, v35, &v34);
      LastError = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x259,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
          (const char *)(unsigned int)v14,
          v32);
LABEL_26:
        (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
        goto LABEL_27;
      }
      v33 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 144LL))(v32, &v33);
      LastError = v15;
      if ( v15 < 0 )
      {
        v29 = (unsigned int)v15;
        v30 = 604LL;
        goto LABEL_47;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v33 + 48LL))(v33, v35[0], v34);
      LastError = v16;
      if ( v16 < 0 )
      {
        v29 = (unsigned int)v16;
        v30 = 605LL;
        goto LABEL_47;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v32 + 24LL))(v32, &hWnd);
      LastError = v17;
      if ( v17 < 0 )
      {
        v29 = (unsigned int)v17;
        v30 = 608LL;
        goto LABEL_47;
      }
      v18 = 0LL;
      v44 = 0LL;
      if ( (*((_BYTE *)a3 + 24) & 2) == 0 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v32 + 120LL))(v32, &v44);
        LastError = v19;
        if ( v19 < 0 )
        {
          v29 = (unsigned int)v19;
          v30 = 613LL;
          goto LABEL_47;
        }
        v18 = v44;
      }
      v36 = v18;
      v20 = hWnd;
      v21 = *((_DWORD *)a3 + 10);
      *a4 = 0LL;
      Rect = 0LL;
      if ( GetWindowRect(v20, &Rect) )
      {
        v43 = 0LL;
        if ( GetClientRect(v20, &v43) )
        {
          v23 = v43.top + Rect.bottom + DWORD1(v36) - HIDWORD(v36) - Rect.top - v43.bottom;
          a4->cx = v43.left + Rect.right + v36 - DWORD2(v36) - Rect.left - v43.right + v21 * cx / 100;
          a4->cy = v23 + v21 * v40.cy / 100;
          LastError = 0;
LABEL_22:
          if ( LastError >= 0 )
          {
            LastError = 0;
            goto LABEL_24;
          }
          v29 = (unsigned int)LastError;
          v30 = 615LL;
LABEL_47:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
            (const char *)v29,
            v32);
LABEL_24:
          v24 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          goto LABEL_26;
        }
        v31 = 630LL;
      }
      else
      {
        v31 = 624LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v31,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                    v22);
      goto LABEL_22;
    }
    v27 = (unsigned int)v12;
    v28 = 595LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v27,
    v32);
LABEL_27:
  v25 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_29:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)LastError;
}
