/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C022C7DC
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C025B19C (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C025B2CC (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v14; // r14
  __int64 MaximumLength; // r8
  unsigned __int8 *v17; // rsi
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 *v20; // rcx
  __int64 v21; // rbx
  _BYTE v22[4]; // [rsp+60h] [rbp-358h] BYREF
  int v23; // [rsp+64h] [rbp-354h] BYREF
  __int64 v24; // [rsp+68h] [rbp-350h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp-330h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-318h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-308h]
  __int64 v30; // [rsp+B8h] [rbp-300h]
  unsigned __int8 v31[168]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v32[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset(v31, 0, sizeof(v31));
  v27[0] = 0LL;
  v23 = 0;
  v24 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v14 = CreateCompatiblePublicDC(a1, &v24);
  v27[2] = v14;
  if ( !v14 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v17 = AllocCallbackMessage(168, 1u, MaximumLength, v32, 1, 0x200uLL);
  v27[1] = v17;
  if ( !v17 )
  {
    if ( v14 != a1 )
    {
      GreDeleteDC(v14);
      GreDeleteObject(v24);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v28 = 0LL;
  v29 = 0LL;
  if ( v17 != v31 && v17 != v32 )
    PushW32ThreadLock((__int64)v17, &v28, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = v14;
  *((_DWORD *)v17 + 16) = a2;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (unsigned __int64)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_21;
  v18 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v19 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v27, &v23);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
  GreRestoreDC(a1, v18);
  if ( v14 != a1 )
  {
    if ( v19 < 0 )
      goto LABEL_21;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      v14,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v19 >= 0 && v23 == 24 )
  {
    v20 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || v27[0] + 8LL > MmUserProbeAddress )
      v20 = (__int64 *)MmUserProbeAddress;
    v21 = *v20;
    v30 = *v20;
    goto LABEL_22;
  }
LABEL_21:
  LODWORD(v21) = 0;
LABEL_22:
  if ( v14 != a1 )
  {
    GreDeleteDC(v14);
    GreDeleteObject(v24);
  }
  if ( v17 != v31 && v17 != v32 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
  }
  return (unsigned int)v21;
}
