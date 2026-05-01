/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18004D8E0
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18004D6A0 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004F1A4 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18045F8C4 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004DAE8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x18004E6F4 (-GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v5; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // eax
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  LONG cx; // r13d
  LONG cy; // eax
  int SystemMetrics; // edi
  int v17; // edi
  RECT *p_rc; // rcx
  HMONITOR v19; // rax
  int DefaultTitlebarHeightInLogicalPixels; // eax
  LONG v21; // r8d
  LONG left; // r10d
  __int64 v23; // r9
  int v24; // r12d
  unsigned int v25; // ecx
  int v26; // edx
  LONG v27; // r11d
  int v28; // esi
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-51h] BYREF
  struct tagSIZE v31; // [rsp+28h] [rbp-49h]
  __int128 v32; // [rsp+30h] [rbp-41h]
  const struct tagRECT *v33; // [rsp+40h] [rbp-31h]
  struct tagRECT v34; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v35; // [rsp+58h] [rbp-19h] BYREF
  RECT rc; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v37; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v5 = 0;
  v33 = a3;
  v31 = a4;
  v8 = 1;
  *a5 = 0LL;
  v32 = 0LL;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_180650F58);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v35);
  v10 = WorkAreaFromRect;
  if ( WorkAreaFromRect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect,
      v30);
    return v10;
  }
  else
  {
    v11 = 0;
    *(_QWORD *)&v32 = 0LL;
    v34 = 0LL;
    v12 = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v34);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x509,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12,
        v30);
    }
    else
    {
      v13 = 0;
      LODWORD(v32) = v34.right - v34.left;
      DWORD1(v32) = v34.bottom - v34.top;
      v11 = v34.right - v34.left;
    }
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x572,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13,
        v30);
      return (unsigned int)v13;
    }
    else
    {
      cx = v31.cx;
      cy = v31.cy;
      if ( v31.cx > v11 )
        cx = v11;
      if ( v31.cy > SDWORD1(v32) )
        cy = DWORD1(v32);
      v31.cx = cy;
      SystemMetrics = GetSystemMetrics(32);
      v17 = GetSystemMetrics(30) + SystemMetrics;
      if ( a2 )
      {
        p_rc = &v37;
        v37 = *a2;
      }
      else
      {
        p_rc = &rc;
        rc = 0LL;
      }
      v30 = 100;
      v19 = MonitorFromRect(p_rc, 0);
      if ( v19 )
        GetScaleFactorForMonitor(v19, &v30);
      DefaultTitlebarHeightInLogicalPixels = GetDefaultTitlebarHeightInLogicalPixels();
      v21 = v31.cx;
      left = v35.left;
      v23 = HIDWORD(*(_QWORD *)&v35.left);
      v24 = v30 * DefaultTitlebarHeightInLogicalPixels / 100;
      v25 = (v11 - cx) / v17 + 1;
      v30 = v25;
      if ( v33 )
      {
        if ( cx + v33->left + v17 <= v35.right )
          left = v33->left;
        if ( v31.cx + v33->top + v24 <= v35.bottom )
          LODWORD(v23) = v33->top;
        v25 = v30;
      }
      if ( v25 )
        v26 = v8 % v25;
      else
        v26 = 0;
      v27 = v26 * v17 + left;
      if ( (DWORD1(v32) - v31.cx) / v24 != -1 )
        v5 = v8 % ((DWORD1(v32) - v31.cx) / v24 + 1);
      a5->left = v27;
      v28 = v24 * v5;
      a5->top = v28 + v23;
      a5->right = v27 + cx;
      result = 0LL;
      a5->bottom = v28 + v23 + v21;
    }
  }
  return result;
}
