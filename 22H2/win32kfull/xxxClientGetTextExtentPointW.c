/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0159250
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C02427AC (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA24 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025E108 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C008E4C8 (GreSaveDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  unsigned __int8 *v10; // rbx
  unsigned int v11; // r12d
  int v12; // r15d
  __int64 *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  char v18; // [rsp+60h] [rbp-318h] BYREF
  _BYTE v19[3]; // [rsp+61h] [rbp-317h] BYREF
  int v20; // [rsp+64h] [rbp-314h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-310h] BYREF
  __int64 v22; // [rsp+70h] [rbp-308h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-300h] BYREF
  unsigned __int8 *v24; // [rsp+88h] [rbp-2F0h]
  HDC v25; // [rsp+90h] [rbp-2E8h]
  HDC v26; // [rsp+98h] [rbp-2E0h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-2D8h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-2C0h]
  __int64 v30; // [rsp+C0h] [rbp-2B8h]
  unsigned __int8 v31[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v32[512]; // [rsp+130h] [rbp-248h] BYREF

  v26 = a1;
  memset(v31, 0, sizeof(v31));
  v21 = 0LL;
  v20 = 0;
  v22 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v25 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v10 = AllocCallbackMessage(80, 1u, MaximumLength, v32, 1, 0x200uLL);
  v24 = v10;
  if ( !v10 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v22);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28 = 0LL;
  v29 = 0LL;
  if ( v10 != v31 && v10 != v32 )
    PushW32ThreadLock((__int64)v10, &v28, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 7) = CompatiblePublicDC;
  *((_DWORD *)v10 + 16) = a3;
  *((_WORD *)v10 + 20) = DestinationString.Length;
  *((_WORD *)v10 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_26;
  v11 = GreSaveDC(a1);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(81LL, v10, *(unsigned int *)v10, &v21, &v20);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v19);
  GreRestoreDC(a1, v11);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v12 < 0 )
      goto LABEL_26;
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
  if ( v12 >= 0 && v20 == 24 )
  {
    v13 = (__int64 *)v21;
    if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v14 = *v13;
    v30 = *v13;
    v15 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v15 || (*(_DWORD *)(v15 + 84) & 1) == 0 || *(_QWORD **)(v15 + 96) != a4 )
    {
      v16 = *(_QWORD **)(v21 + 16);
      if ( v16 + 1 < v16 || (unsigned __int64)(v16 + 1) > MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v16;
      goto LABEL_21;
    }
  }
LABEL_26:
  LODWORD(v14) = 0;
LABEL_21:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v22);
  }
  if ( v10 != v31 && v10 != v32 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
  }
  return (unsigned int)v14;
}
