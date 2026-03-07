__int64 __fastcall xxxDrawCaptionTemp(
        struct tagWND *a1,
        Gre::Base *a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        __int64 a6,
        __int16 a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  LONG left; // eax
  int v13; // ebx
  HBRUSH v14; // rax
  unsigned int v15; // r12d
  HBRUSH v16; // rax
  __int64 v17; // rcx
  unsigned int Layout; // eax
  unsigned int v19; // ebx
  int v20; // r12d
  __int128 *v21; // r13
  int WindowText; // eax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  __int64 DPIMetrics; // rax
  __int64 v27; // rcx
  int v28; // edx
  __int64 DPIServerInfo; // rax
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rax
  int TextMetricsW; // ebx
  __int64 v34; // rcx
  int v35; // ecx
  WCHAR *v36; // r10
  int v37; // eax
  const WCHAR *SourceString; // r9
  int v39; // r8d
  int v40; // r10d
  int v41; // edx
  const WCHAR *v42; // r8
  unsigned int v43; // r10d
  unsigned int v44; // eax
  int v45; // [rsp+40h] [rbp-C0h]
  HBRUSH v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+50h] [rbp-B0h]
  unsigned int v48; // [rsp+58h] [rbp-A8h]
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+64h] [rbp-9Ch]
  struct tagSIZE v51; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v52; // [rsp+70h] [rbp-90h]
  __int128 v53; // [rsp+78h] [rbp-88h] BYREF
  __int128 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  int v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A4h] [rbp-5Ch]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  _OWORD v59[4]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v60[5]; // [rsp+100h] [rbp+0h] BYREF
  char v61[512]; // [rsp+150h] [rbp+50h] BYREF

  WindowSmIcon = a5;
  *(_QWORD *)&v53 = a6;
  left = a3->left;
  v58 = a4;
  v48 = 1;
  v47 = 0;
  v51 = 0LL;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon((__int64)a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  }
  v45 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) == 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(gpsi + 4628LL);
      v14 = *(HBRUSH *)(gpsi + 4816LL);
      goto LABEL_19;
    }
    v15 = *(_DWORD *)(gpsi + 4644LL);
    v13 = *(_DWORD *)(gpsi + 4580LL);
    v16 = *(HBRUSH *)(gpsi + 4720LL);
    goto LABEL_21;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v15 = *(_DWORD *)(gpsi + 4604LL);
    v13 = *(_DWORD *)(gpsi + 4576LL);
    v16 = *(HBRUSH *)(gpsi + 4712LL);
LABEL_21:
    v46 = v16;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_24;
    v47 = 1;
LABEL_23:
    v45 = GreSetBkMode((HDC)a2, 1);
    goto LABEL_24;
  }
  if ( *(_WORD *)(gpsi + 6996LL) < 8u
    || (v13 = *(_DWORD *)(gpsi + 4648LL), v13 != *(_DWORD *)(gpsi + 4568LL))
    || v13 == *(_DWORD *)(gpsi + 4588LL) )
  {
    v15 = *(_DWORD *)(gpsi + 4628LL);
    v13 = *(_DWORD *)(gpsi + 4648LL);
    v46 = *(HBRUSH *)(gpsi + 4944LL);
    goto LABEL_23;
  }
  v14 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_19:
  v15 = *(_DWORD *)(gpsi + 4640LL);
  v46 = v14;
LABEL_24:
  v49 = GreSetTextColor((__int64)a2, v15);
  v50 = GreSetBkColor((HDC)a2, v13);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout((HDC)a2);
      v19 = Layout;
      v20 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon((HDC)a2, a3, WindowSmIcon, v46, a7);
      if ( v20 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v19);
    }
    else
    {
      v17 = (unsigned int)(a3->bottom - a3->top);
      a3->left += v17;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_87;
  v54 = 0LL;
  v21 = (__int128 *)v53;
  v52 = PtiCurrentShared(v17);
  if ( !(_QWORD)v53 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v61);
LABEL_39:
        v25 = (unsigned __int16)WindowText;
        LODWORD(v24) = WindowText;
        LOWORD(v25) = 2 * WindowText;
        LOWORD(v54) = 2 * WindowText;
LABEL_41:
        LOWORD(v25) = v25 + 2;
        *((_QWORD *)&v54 + 1) = v61;
        WORD1(v54) = v25;
        v21 = &v54;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) )
      {
        v53 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v53);
        WindowText = TextCopy((__int64)StrName, v61, 0xFFu);
        goto LABEL_39;
      }
    }
    *(_WORD *)v61 = 0;
    v25 = 0LL;
    LOWORD(v54) = 0;
    LODWORD(v24) = 0;
    goto LABEL_41;
  }
  v25 = *(unsigned __int16 *)(v53 + 2) - 2LL;
  if ( v25 >= *(unsigned __int16 *)v53 )
    LOWORD(v25) = *(_WORD *)v53;
  *(_WORD *)v53 = v25;
  v24 = (unsigned __int16)v25 >> 1;
  *(_WORD *)(*((_QWORD *)v21 + 1) + 2 * v24) = 0;
LABEL_45:
  if ( v58 )
  {
    *(_QWORD *)&v53 = GreSelectFontInternal((__int64)a2, v58, 1);
    memset_0(v60, 0, 0x44uLL);
    v32 = SGDGetSessionState(v31);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v59, *(struct Gre::Full::SESSION_GLOBALS **)(v32 + 32));
    TextMetricsW = GrepGetTextMetricsW((HDC)a2, (struct _TMW_INTERNAL *)v60, 1027);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v59);
    v59[0] = v60[0];
    if ( TextMetricsW )
      v35 = v59[0];
    else
      v35 = *(_DWORD *)(GetDPIServerInfo(v34) + 40);
    v30 = (a3->top + a3->bottom - v35) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      DPIMetrics = GetDPIMetrics(v25);
      v27 = *(_QWORD *)(DPIMetrics + 32);
      v28 = *(_DWORD *)(DPIMetrics + 44);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo(v25);
      v27 = *(_QWORD *)(DPIServerInfo + 8);
      v28 = *(_DWORD *)(DPIServerInfo + 20);
    }
    v30 = (a3->top + a3->bottom - v28) / 2;
    *(_QWORD *)&v53 = GreSelectFontInternal((__int64)a2, v27, 1);
  }
  if ( v47 )
    FillCaptionGradient((HDC)a2, a3, a7 & 1);
  else
    FillRect((HDC)a2, a3, v46);
  if ( v46 == *(HBRUSH *)(gpsi + 4944LL) )
  {
    GreSetTextColor((__int64)a2, *(unsigned int *)(gpsi + 4640LL));
    GreSetBkColor((HDC)a2, *(_DWORD *)(gpsi + 4636LL));
  }
  if ( (unsigned int)CALL_LPK((__int64)v52) )
    xxxClientGetTextExtentPointW(a2, v36, v24, &v51);
  else
    GreGetTextExtentW((HDC)a2, v36, v24, &v51);
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
  {
    GreGetTextAlign((HDC)a2);
    GreSetTextAlign((HDC)a2);
  }
  if ( (a7 & 0x4000) != 0 || (_DWORD)v24 && v51.cx > a3->right - a3->left - 2 )
  {
    v57 = 0LL;
    v55 = 20LL;
    v56 = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v44 = 34853;
    }
    else if ( !a1 || (v44 = 34854, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) == 0) )
    {
      v44 = 34852;
    }
    DrawTextExWorker((HDC)a2, *((unsigned __int16 **)v21 + 1), v24, a3, v44, (struct tagDRAWTEXTPARAMS *)&v55);
    v48 = 0;
  }
  else
  {
    if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) != 0 )
    {
      v37 = CALL_LPK((__int64)v52);
      v41 = v40 - v39 - 2;
      if ( v37 )
        xxxClientExtTextOutW(a2, v41, v30, 4, a3, SourceString, v24);
      else
        GreExtTextOutW((__int64)a2, v41, v30, 4u, (__int64)a3, (__int64)SourceString, v24);
LABEL_83:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
        GreSetTextAlign((HDC)a2);
      goto LABEL_85;
    }
    if ( (unsigned int)CALL_LPK((__int64)v52) )
      xxxClientExtTextOutW(a2, v43, v30, 4, a3, v42, v24);
    else
      GreExtTextOutW((__int64)a2, v43, v30, 4u, (__int64)a3, (__int64)v42, v24);
  }
  if ( a1 )
    goto LABEL_83;
LABEL_85:
  if ( (_QWORD)v53 )
    GreSelectFontInternal((__int64)a2, v53, 1);
LABEL_87:
  GreSetTextColor((__int64)a2, v49);
  GreSetBkColor((HDC)a2, v50);
  if ( v46 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode((HDC)a2, v45);
  return v48;
}
