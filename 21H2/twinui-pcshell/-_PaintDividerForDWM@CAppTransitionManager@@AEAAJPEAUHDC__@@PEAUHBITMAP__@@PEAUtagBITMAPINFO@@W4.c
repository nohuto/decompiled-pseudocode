/*
 * XREFs of ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180435E7C
 * Callers:
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180436634 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180090F14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180490A54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_PaintDividerForDWM(
        CAppTransitionManager *this,
        HDC a2,
        HBITMAP a3,
        struct tagBITMAPINFO *a4,
        enum DEVICE_SCALE_FACTOR a5)
{
  signed __int64 v7; // rbx
  size_t v8; // rax
  _BYTE *lpvBits; // rax
  unsigned int LastError; // ebx
  int DIBits; // eax
  int v12; // r9d
  int v13; // edx
  signed __int64 i; // rcx
  _BYTE *lpBits; // [rsp+48h] [rbp-28h]
  HGDIOBJ h; // [rsp+50h] [rbp-20h]
  struct HDC__ v19; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h]
  LONG biWidth; // [rsp+60h] [rbp-10h]
  char *v22; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19.unused = 0;
  v20 = 0;
  h = SelectObject(a2, a3);
  biWidth = a4->bmiHeader.biWidth;
  LODWORD(v22) = -a4->bmiHeader.biHeight;
  JointDivider_Paint(a2, &v19, (const struct Geometry::CRect *)&v19, a5, 0LL);
  v7 = (biWidth - v19.unused) * ((int)v22 - v20);
  v8 = 4 * v7;
  if ( !is_mul_ok(v7, 4uLL) )
    v8 = -1LL;
  lpvBits = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  lpBits = lpvBits;
  if ( lpvBits )
  {
    DIBits = GetDIBits(a2, a3, 0, (_DWORD)v22 - v20, lpvBits, a4, 0);
    v12 = (int)v22;
    v13 = v20;
    if ( DIBits == (_DWORD)v22 - v20 )
    {
      if ( v7 > 0 )
      {
        for ( i = 0LL; i < v7; ++i )
          lpBits[4 * i + 3] = 0;
        v12 = (int)v22;
        v13 = v20;
      }
      SetDIBits(a2, a3, 0, v12 - v13, lpBits, a4, 0);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2EC,
                    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                    (const char *)(unsigned int)v22);
    }
    operator delete(lpBits);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DF,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( h )
    SelectObject(a2, h);
  return LastError;
}
