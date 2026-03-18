/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C00B9F08
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023E868 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025B2CC (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025D454 (xxxPSMGetTextExtent.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  unsigned __int8 *v9; // rsi
  unsigned int v10; // ebx
  int v11; // r12d
  ULONG_PTR *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned int v15; // ebx
  _BYTE v17[4]; // [rsp+60h] [rbp-318h] BYREF
  int v18; // [rsp+64h] [rbp-314h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp-310h]
  unsigned __int64 v20; // [rsp+70h] [rbp-308h] BYREF
  __int64 v21; // [rsp+78h] [rbp-300h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-2F0h] BYREF
  unsigned __int8 *v24; // [rsp+98h] [rbp-2E0h]
  HDC v25; // [rsp+A0h] [rbp-2D8h]
  HDC v26; // [rsp+A8h] [rbp-2D0h]
  __int128 v27; // [rsp+B0h] [rbp-2C8h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-2B8h]
  unsigned __int8 v29[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v30[512]; // [rsp+130h] [rbp-248h] BYREF

  v19 = a4;
  v26 = a1;
  memset(v29, 0, sizeof(v29));
  v20 = 0LL;
  v18 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v25 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v9 = AllocCallbackMessage(80, 1u, MaximumLength, v30, 1, 0x200uLL);
  v24 = v9;
  if ( !v9 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v21);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = 0LL;
  v28 = 0LL;
  if ( v9 != v29 && v9 != v30 )
    PushW32ThreadLock((__int64)v9, &v27, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 7) = CompatiblePublicDC;
  *((_DWORD *)v9 + 16) = a3;
  *((_WORD *)v9 + 20) = DestinationString.Length;
  *((_WORD *)v9 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v9,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v9 + 6) < 0 )
    goto LABEL_25;
  v10 = GreSaveDCInternal(a1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v11 = KeUserModeCallback(81LL, v9, *(unsigned int *)v9, &v20, &v18);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  GreRestoreDC(a1, v10);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v11 < 0 )
      goto LABEL_25;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v11 >= 0 && v18 == 24 )
  {
    v12 = (ULONG_PTR *)v20;
    if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
      v12 = (ULONG_PTR *)MmUserProbeAddress;
    RegionSize = *v12;
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v13 || (*(_DWORD *)(v13 + 84) & 1) == 0 || *(_QWORD **)(v13 + 96) != v19 )
    {
      v14 = *(_QWORD **)(v20 + 16);
      if ( v14 + 1 < v14 || (unsigned __int64)(v14 + 1) > MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v19 = *v14;
      v15 = RegionSize;
      goto LABEL_20;
    }
  }
LABEL_25:
  v15 = 0;
LABEL_20:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v21);
  }
  if ( v9 != v29 && v9 != v30 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v27);
  }
  return v15;
}
