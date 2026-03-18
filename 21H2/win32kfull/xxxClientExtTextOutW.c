/*
 * XREFs of xxxClientExtTextOutW @ 0x1C00B9C04
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023EB00 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02475D8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(HDC a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  unsigned __int8 *v12; // rdi
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // r12d
  __int64 *v16; // rcx
  __int64 v17; // rbx
  _BYTE v19[4]; // [rsp+60h] [rbp-308h] BYREF
  int v20; // [rsp+64h] [rbp-304h] BYREF
  __int64 v21; // [rsp+68h] [rbp-300h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v24; // [rsp+88h] [rbp-2E0h]
  _QWORD v25[3]; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-2B0h]
  unsigned __int8 v28[104]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v29[512]; // [rsp+140h] [rbp-228h] BYREF

  LODWORD(v24) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset(v28, 0, sizeof(v28));
  v25[0] = 0LL;
  v20 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v25[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v12 = AllocCallbackMessage(104, 1u, MaximumLength, v29, 1, 0x200uLL);
  v25[1] = v12;
  if ( !v12 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v21);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v26 = 0LL;
  v27 = 0LL;
  if ( v12 != v28 && v12 != v29 )
    PushW32ThreadLock((__int64)v12, &v26, (__int64)Win32FreePool);
  *((_QWORD *)v12 + 7) = CompatiblePublicDC;
  *((_DWORD *)v12 + 16) = v24;
  *((_DWORD *)v12 + 17) = a3;
  *((_DWORD *)v12 + 18) = a4;
  v13 = (int)a5;
  if ( a5 )
  {
    *(_OWORD *)(v12 + 76) = *a5;
    v13 = 1;
  }
  *((_DWORD *)v12 + 24) = v13;
  *((_DWORD *)v12 + 23) = a7;
  *((_WORD *)v12 + 20) = DestinationString.Length;
  *((_WORD *)v12 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v12,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v12 + 6) < 0 )
    goto LABEL_23;
  v14 = GreSaveDCInternal(a1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v15 = KeUserModeCallback(80LL, v12, *(unsigned int *)v12, v25, &v20);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
  GreRestoreDC(a1, v14);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v15 < 0 )
      goto LABEL_23;
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
  if ( v15 >= 0 && v20 == 24 )
  {
    v16 = (__int64 *)v25[0];
    if ( (unsigned __int64)(v25[0] + 8LL) < v25[0] || v25[0] + 8LL > MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v17 = *v16;
    v24 = *v16;
    goto LABEL_18;
  }
LABEL_23:
  LODWORD(v17) = 0;
LABEL_18:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v21);
  }
  if ( v12 != v28 && v12 != v29 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v26);
  }
  return (unsigned int)v17;
}
