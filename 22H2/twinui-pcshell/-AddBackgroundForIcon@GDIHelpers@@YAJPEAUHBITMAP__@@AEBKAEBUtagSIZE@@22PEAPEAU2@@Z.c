/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1804DCAB4
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1804DD2F8 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$CTSmartObj@PEAUHDC__@@V?$CAutoHandle_Policy@PEAUHDC__@@@@@@QEAA@XZ @ 0x1800DA80C (--1-$CTSmartObj@PEAUHDC__@@V-$CAutoHandle_Policy@PEAUHDC__@@@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18048646C (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        int *a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  HDC v10; // rdi
  unsigned int LastError; // r12d
  HDC v12; // rax
  HDC v13; // rbx
  const char *v14; // r9
  HBITMAP v15; // rax
  struct tagSIZE v16; // rsi
  HGDIOBJ v17; // r15
  const struct tagRECT *v18; // r8
  int cx; // r9d
  int cy; // r11d
  HGDIOBJ ha; // [rsp+78h] [rbp-88h]
  HDC v24; // [rsp+80h] [rbp-80h] BYREF
  HDC v25[2]; // [rsp+88h] [rbp-78h] BYREF
  void *ppvBits; // [rsp+98h] [rbp-68h] BYREF
  _BYTE pv[4]; // [rsp+A0h] [rbp-60h] BYREF
  int wSrc; // [rsp+A4h] [rbp-5Ch]
  int hSrc; // [rsp+A8h] [rbp-58h]
  RECT v30; // [rsp+C0h] [rbp-40h] BYREF
  BITMAPINFO pbmi; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v25[1] = (HDC)-2LL;
  CompatibleDC = CreateCompatibleDC(0LL);
  v10 = CompatibleDC;
  v25[0] = CompatibleDC;
  LastError = 0;
  if ( CompatibleDC )
  {
    v12 = CreateCompatibleDC(CompatibleDC);
    v13 = v12;
    v24 = v12;
    if ( v12 )
    {
      ha = SelectObject(v12, h);
      if ( GetObjectW(h, 32, pv) )
      {
        pbmi.bmiHeader.biSize = 44;
        memset(&pbmi.bmiHeader.biWidth, 0, 40);
        pbmi.bmiHeader.biWidth = *a3;
        pbmi.bmiHeader.biHeight = a3[1];
        *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
        v15 = CreateDIBSection(v10, &pbmi, 0, &ppvBits, 0LL, 0);
        v16 = (struct tagSIZE)v15;
        if ( v15 )
        {
          v17 = SelectObject(v10, v15);
          v30.left = (*a3 - a4->cx) / 2;
          v30.top = (a3[1] - a4->cy) / 2;
          v30.right = a4->cx + v30.left;
          v30.bottom = a4->cy + v30.top;
          GDIHelpers::FillRectARGB(v10, &v30, v18, *a2);
          cx = wSrc;
          if ( a5->cx < wSrc )
            cx = a5->cx;
          cy = hSrc;
          if ( a5->cy < hSrc )
            cy = a5->cy;
          GdiAlphaBlend(v10, (*a3 - cx) / 2, (a3[1] - cy) / 2, cx, cy, v13, 0, 0, wSrc, hSrc, (BLENDFUNCTION)33488896);
          *a6 = v16;
          SelectObject(v10, v17);
        }
        else
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18D,
            (__int64)"Shell\\inc\\GDIHelpers.h",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x181,
                      (__int64)"Shell\\inc\\GDIHelpers.h",
                      v14);
      }
      SelectObject(v13, ha);
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"Shell\\inc\\GDIHelpers.h",
        (const char *)0x8007000ELL);
    }
    CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>::~CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>(&v24);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"Shell\\inc\\GDIHelpers.h",
      (const char *)0x8007000ELL);
  }
  CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>::~CTSmartObj<HDC__ *,CAutoHandle_Policy<HDC__ *>>(v25);
  return LastError;
}
