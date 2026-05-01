/*
 * XREFs of ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x18044EFD8
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18044F704 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x180450190 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
        __int64 a1,
        struct tagRECT *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        RECT *a7,
        struct tagRECT *a8,
        __int128 *a9,
        RECT *a10,
        int a11)
{
  char v11; // si
  int v14; // r8d
  LONG right; // r9d
  int bottom; // ecx
  __int128 v18; // [rsp+20h] [rbp-60h]
  RECT rcSrc2; // [rsp+30h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-30h] BYREF
  RECT rc; // [rsp+60h] [rbp-20h] BYREF

  v11 = 0;
  *(_QWORD *)&rcSrc2.left = 0LL;
  rcSrc1 = *a7;
  rcDst = *a8;
  v18 = *a9;
  rc = *a10;
  if ( !a3 )
  {
    right = rcDst.right;
    goto LABEL_8;
  }
  v14 = a3 - 1;
  if ( !v14 )
  {
    right = v18 + (DWORD2(v18) - (int)v18) / 2 - a4 / 2;
    bottom = rcDst.bottom;
    rcSrc2.top = rcDst.bottom;
    goto LABEL_10;
  }
  if ( v14 == 1 )
  {
    right = rcDst.left - a4;
LABEL_8:
    v11 = 1;
    bottom = DWORD1(v18) + (HIDWORD(v18) - DWORD1(v18)) / 2 - a5 / 2;
    goto LABEL_9;
  }
  right = v18 + (DWORD2(v18) - (int)v18) / 2 - a4 / 2;
  bottom = rcDst.top - a5;
LABEL_9:
  rcSrc2.top = bottom;
LABEL_10:
  rcSrc2.right = a4 + right;
  rcSrc2.bottom = bottom + a5;
  rcSrc2.left = right;
  if ( v11 )
  {
    if ( bottom >= rcSrc1.top )
    {
      if ( bottom + a5 > rcSrc1.bottom )
      {
        rcSrc2.bottom = rcSrc1.bottom;
        rcSrc2.top = rcSrc1.bottom - a5;
      }
    }
    else
    {
      rcSrc2.top = rcSrc1.top;
      rcSrc2.bottom = a5 + rcSrc1.top;
    }
  }
  else if ( right >= rcSrc1.left )
  {
    if ( a4 + right > rcSrc1.right )
    {
      rcSrc2.right = rcSrc1.right;
      rcSrc2.left = rcSrc1.right - a4;
    }
  }
  else
  {
    rcSrc2.left = rcSrc1.left;
    rcSrc2.right = a4 + rcSrc1.left;
  }
  if ( !IsRectEmpty(&rc) && IntersectRect(&rcDst, &rc, &rcSrc2) && *(_DWORD *)(a6 + 12) - rc.bottom <= a11 )
    OffsetRect(&rcSrc2, 0, rc.top - rcSrc2.bottom);
  *a2 = 0LL;
  IntersectRect(a2, &rcSrc1, &rcSrc2);
  return a2;
}
