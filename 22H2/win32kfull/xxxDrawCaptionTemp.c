/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0158B14
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01F7B70 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7CE0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     xxxGetWindowSmIcon @ 0x1C0038CA8 (xxxGetWindowSmIcon.c)
 *     GreSetTextColor @ 0x1C0044578 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044600 (GreSetBkColor.c)
 *     FillRect @ 0x1C0045694 (FillRect.c)
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045E9C (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     _HasCaptionIcon @ 0x1C0061CF8 (_HasCaptionIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C00AAC5C (GreExtTextOutWInternal.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00E0AC8 (GetDPIServerInfo.c)
 *     GreGetTextMetricsW @ 0x1C00E3244 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00FCF38 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00FD05C (TextCopy.c)
 *     GreSetTextAlign @ 0x1C01241C0 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0125448 (GreGetTextAlign.c)
 *     CALL_LPK @ 0x1C0158EEC (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0158F28 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0159600 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1C0159724 (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246EAC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C025E630 (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 **a6,
        unsigned int a7)
{
  LONG left; // eax
  struct tagCURSOR *WindowSmIcon; // r13
  int v12; // r12d
  int v13; // r14d
  HBRUSH v14; // rcx
  int WindowText; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  int v18; // edx
  LONG v19; // r12d
  WCHAR *v20; // r10
  unsigned int v21; // r13d
  WCHAR *SourceString; // r8
  LONG v23; // r10d
  int *v24; // r11
  HBRUSH v26; // rax
  unsigned int Layout; // eax
  unsigned int v28; // r14d
  int v29; // r12d
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int TextMetricsW; // eax
  __int64 v32; // rcx
  int v33; // ecx
  int TextAlign; // eax
  int v35; // r8d
  WCHAR *v36; // r9
  int v37; // r10d
  int *v38; // r11
  unsigned int v39; // eax
  int v40; // [rsp+50h] [rbp-B0h]
  HBRUSH v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 **v44; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+7Ch] [rbp-84h]
  int v48; // [rsp+80h] [rbp-80h]
  struct _POINTL v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  __int128 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  int v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B4h] [rbp-4Ch]
  __int128 v55; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v56[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v57; // [rsp+120h] [rbp+20h]
  char v58[512]; // [rsp+160h] [rbp+60h] BYREF

  left = a3->left;
  WindowSmIcon = a5;
  v44 = a6;
  v42 = 0;
  v49 = 0LL;
  v43 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon(a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  }
  v40 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v12 = *(_DWORD *)(gpsi + 4604LL);
      v13 = *(_DWORD *)(gpsi + 4576LL);
      v14 = *(HBRUSH *)(gpsi + 4712LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 6996LL) < 8u
      || (v13 = *(_DWORD *)(gpsi + 4648LL), v13 != *(_DWORD *)(gpsi + 4568LL))
      || v13 == *(_DWORD *)(gpsi + 4588LL) )
    {
      v12 = *(_DWORD *)(gpsi + 4628LL);
      v13 = *(_DWORD *)(gpsi + 4648LL);
      v41 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v26 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_62:
    v12 = *(_DWORD *)(gpsi + 4640LL);
    v41 = v26;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(gpsi + 4628LL);
    v26 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_62;
  }
  v12 = *(_DWORD *)(gpsi + 4644LL);
  v13 = *(_DWORD *)(gpsi + 4580LL);
  v14 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v41 = v14;
  if ( (a7 & 0x20) != 0 )
  {
    v42 = 1;
LABEL_13:
    v40 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v47 = GreSetTextColor(a2, v12);
  v48 = GreSetBkColor(a2, v13);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v28 = Layout;
      v29 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v41, a7);
      if ( v29 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v28);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) != 0 )
  {
    v51 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( a6 )
    {
      v17 = *((unsigned __int16 *)a6 + 1) - 2LL;
      if ( v17 >= *(unsigned __int16 *)a6 )
        LOWORD(v17) = *(_WORD *)a6;
      *(_WORD *)a6 = v17;
      v16 = (unsigned __int16)v17 >> 1;
      a6[1][v16] = 0;
      goto LABEL_25;
    }
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v58);
LABEL_23:
        v17 = (unsigned __int16)WindowText;
        LODWORD(v16) = WindowText;
        LOWORD(v17) = 2 * WindowText;
LABEL_24:
        LOWORD(v51) = v17;
        LOWORD(v17) = v17 + 2;
        WORD1(v51) = v17;
        *((_QWORD *)&v51 + 1) = v58;
        v44 = (unsigned __int16 **)&v51;
LABEL_25:
        if ( a4 )
        {
          v46 = GreSelectFont(a2);
          memset(v56, 0, 0x44uLL);
          TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v56);
          v57 = v56[0];
          if ( TextMetricsW )
            v33 = v57;
          else
            v33 = *(_DWORD *)(GetDPIServerInfo(v32) + 40);
          v19 = (a3->top + a3->bottom - v33) / 2;
        }
        else
        {
          if ( (a7 & 2) != 0 )
            v18 = *(_DWORD *)(GetDPIMetrics(v17) + 44);
          else
            v18 = *(_DWORD *)(GetDPIServerInfo(v17) + 20);
          v19 = (a3->top + a3->bottom - v18) / 2;
          v46 = GreSelectFont(a2);
        }
        if ( v42 )
          FillCaptionGradient(a2, a3, a7 & 1);
        else
          FillRect(a2, a3, v41);
        if ( v41 == *(HBRUSH *)(gpsi + 4944LL) )
        {
          GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
          GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
        }
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a2, v20);
          v21 = 1;
        }
        else
        {
          v21 = 1;
          GreGetTextExtentW(a2, v20, v16, (struct tagSIZE *)&v49, 1);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
        {
          TextAlign = GreGetTextAlign(a2);
          v43 = GreSetTextAlign(a2, TextAlign | 0x100u);
        }
        if ( (a7 & 0x4000) != 0 || (_DWORD)v16 && v49.x > a3->right - a3->left - 2 )
        {
          v54 = 0LL;
          v52 = 20LL;
          v53 = 2;
          if ( (a7 & 0x4000) != 0 )
          {
            v39 = 34853;
          }
          else if ( !a1 || (v39 = 34854, (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) == 0) )
          {
            v39 = 34852;
          }
          DrawTextExWorker(a2, v44[1], v16, a3, v39, (struct tagDRAWTEXTPARAMS *)&v52);
          v21 = 0;
        }
        else if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) != 0 )
        {
          if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
            xxxClientExtTextOutW(a2, (__int64)a3, v36, v16);
          else
            GreExtTextOutWInternal(a2, v37 - v35 - 2, v19, 4, a3, v36, v16, v38, v38, (unsigned int)v38);
        }
        else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientExtTextOutW(a2, (__int64)a3, SourceString, v16);
        }
        else
        {
          GreExtTextOutWInternal(a2, v23, v19, 4, a3, SourceString, v16, v24, v24, (unsigned int)v24);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
          GreSetTextAlign(a2, v43);
        if ( v46 )
          GreSelectFont(a2);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) )
      {
        v55 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v55);
        WindowText = TextCopy((__int64)StrName, v58, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v58 = 0;
    v17 = 0LL;
    LODWORD(v16) = 0;
    goto LABEL_24;
  }
  v21 = 1;
LABEL_50:
  GreSetTextColor(a2, v47);
  GreSetBkColor(a2, v48);
  if ( v41 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v40);
  return v21;
}
