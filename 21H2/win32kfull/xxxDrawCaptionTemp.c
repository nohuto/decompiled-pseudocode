/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C00B97AC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01F2B20 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F2C90 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C0085264 (xxxGetWindowSmIcon.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C00B9C04 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C00BA2B0 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     xxxGetWindowText @ 0x1C00BA454 (xxxGetWindowText.c)
 *     GreGetTextAlign @ 0x1C00BCFE4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00BD1B8 (GreSetTextAlign.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     GreGetTextMetricsW @ 0x1C00C42C4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00E7390 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00E74B4 (TextCopy.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DrawTextExWorker @ 0x1C025B810 (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        unsigned __int64 *BugCheckParameter2,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        __int64 a6,
        unsigned int a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  LONG left; // eax
  HBRUSH v12; // rax
  __int128 *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  int WindowText; // eax
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  int v19; // edx
  int v20; // r12d
  unsigned __int16 *v21; // r10
  WCHAR *SourceString; // r8
  int v23; // r10d
  int *v24; // r11
  unsigned int Layout; // eax
  unsigned int v27; // r15d
  int v28; // r12d
  int v29; // r15d
  HBRUSH v30; // rax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int TextMetricsW; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  int v38; // eax
  WCHAR *v39; // r9
  int *v40; // r11
  int v41; // r8d
  int v42; // r10d
  int v43; // edx
  unsigned int v44; // eax
  HBRUSH v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h]
  unsigned int v47; // [rsp+68h] [rbp-98h]
  struct _POINTL v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 ThreadWin32Thread; // [rsp+80h] [rbp-80h]
  __int128 v50; // [rsp+88h] [rbp-78h] BYREF
  __int128 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  int v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B4h] [rbp-4Ch]
  __int64 v55; // [rsp+C0h] [rbp-40h]
  _OWORD v56[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h]
  _WORD v58[256]; // [rsp+160h] [rbp+60h] BYREF

  WindowSmIcon = a5;
  *(_QWORD *)&v50 = a6;
  left = a3->left;
  v55 = a4;
  v47 = 1;
  v46 = 0;
  v48 = 0LL;
  if ( a3->right <= left )
    return 0LL;
  if ( BugCheckParameter2
    && !a5
    && (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2)
    && (a7 & 2) == 0
    && (*(_BYTE *)(BugCheckParameter2[5] + 30) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(BugCheckParameter2, a7 & 0x2000);
  }
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v12 = *(HBRUSH *)(gpsi + 4712LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 6996LL) < 8u
      || (v29 = *(_DWORD *)(gpsi + 4648LL), v29 != *(_DWORD *)(gpsi + 4568LL))
      || v29 == *(_DWORD *)(gpsi + 4588LL) )
    {
      v45 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v30 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_67:
    v45 = v30;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v30 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_67;
  }
  v12 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v45 = v12;
  if ( (a7 & 0x20) != 0 )
  {
    v46 = 1;
LABEL_13:
    GreSetBkMode(a2);
  }
LABEL_14:
  GreSetTextColor(a2);
  GreSetBkColor(a2);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v27 = Layout;
      v28 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v45, a7);
      if ( v28 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v27);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_50;
  v51 = 0LL;
  v13 = (__int128 *)v50;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !(_QWORD)v50 )
  {
    if ( BugCheckParameter2 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(BugCheckParameter2, v58);
LABEL_23:
        v18 = (unsigned __int16)WindowText;
        LODWORD(v17) = WindowText;
        LOWORD(v18) = 2 * WindowText;
LABEL_24:
        LOWORD(v51) = v18;
        LOWORD(v18) = v18 + 2;
        WORD1(v51) = v18;
        v13 = &v51;
        *((_QWORD *)&v51 + 1) = v58;
        goto LABEL_25;
      }
      if ( *(_DWORD *)(BugCheckParameter2[5] + 184) )
      {
        v50 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(BugCheckParameter2 + 23),
                    (struct _LARGE_UNICODE_STRING *)&v50);
        WindowText = TextCopy(StrName, v58, 255LL);
        goto LABEL_23;
      }
    }
    v58[0] = 0;
    v18 = 0LL;
    LODWORD(v17) = 0;
    goto LABEL_24;
  }
  v18 = *(unsigned __int16 *)(v50 + 2) - 2LL;
  if ( v18 >= *(unsigned __int16 *)v50 )
    LOWORD(v18) = *(_WORD *)v50;
  *(_WORD *)v50 = v18;
  v17 = (unsigned __int16)v18 >> 1;
  *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * v17) = 0;
LABEL_25:
  if ( v55 )
  {
    *(_QWORD *)&v50 = GreSelectFontInternal(a2);
    memset(v56, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v56);
    v57 = v56[0];
    if ( TextMetricsW )
      v37 = v57;
    else
      v37 = *(_DWORD *)(GetDPIServerInfo(v34, v33, v35, v36) + 40);
    v20 = (a3->top + a3->bottom - v37) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
      v19 = *(_DWORD *)(GetDPIMetrics(v18, 2LL, v14, v15) + 44);
    else
      v19 = *(_DWORD *)(GetDPIServerInfo(v18, 2LL, v14, v15) + 20);
    v20 = (a3->top + a3->bottom - v19) / 2;
    *(_QWORD *)&v50 = GreSelectFontInternal(a2);
  }
  if ( v46 )
    FillCaptionGradient(a2, a3, a7 & 1);
  else
    FillRect(a2, a3, v45);
  if ( v45 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    GreSetTextColor(a2);
    GreSetBkColor(a2);
  }
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a2, v21, (unsigned int)v17, &v48);
  else
    GreGetTextExtentW(a2, v21, v17, &v48, 1);
  if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
  {
    GreGetTextAlign(a2);
    GreSetTextAlign(a2);
  }
  if ( (a7 & 0x4000) != 0 || (_DWORD)v17 && v48.x > a3->right - a3->left - 2 )
  {
    v54 = 0LL;
    v52 = 20LL;
    v53 = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v44 = 34853;
    }
    else if ( !BugCheckParameter2 || (v44 = 34854, (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) == 0) )
    {
      v44 = 34852;
    }
    DrawTextExWorker(a2, *((unsigned __int16 **)v13 + 1), v17, a3, v44, (struct tagDRAWTEXTPARAMS *)&v52);
    v47 = 0;
  }
  else
  {
    if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) != 0 )
    {
      v38 = CALL_LPK(ThreadWin32Thread);
      v43 = v42 - v41 - 2;
      if ( v38 )
        xxxClientExtTextOutW((int)a2, v43, v20, 4, (__int64)a3, v39, v17);
      else
        GreExtTextOutWInternal(a2, v43, v20, 4, a3, v39, v17, v40, (ULONG *)v40, (unsigned int)v40);
LABEL_46:
      if ( (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
        GreSetTextAlign(a2);
      goto LABEL_48;
    }
    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
      xxxClientExtTextOutW((int)a2, v23, v20, 4, (__int64)a3, SourceString, v17);
    else
      GreExtTextOutWInternal(a2, v23, v20, 4, a3, SourceString, v17, v24, (ULONG *)v24, (unsigned int)v24);
  }
  if ( BugCheckParameter2 )
    goto LABEL_46;
LABEL_48:
  if ( (_QWORD)v50 )
    GreSelectFontInternal(a2);
LABEL_50:
  GreSetTextColor(a2);
  GreSetBkColor(a2);
  if ( v45 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2);
  return v47;
}
