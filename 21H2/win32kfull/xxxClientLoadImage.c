/*
 * XREFs of xxxClientLoadImage @ 0x1C00A2F18
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A19B8 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00A1E2C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00BA6DC (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D525C (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // r8
  unsigned __int8 *v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rbx
  unsigned __int8 *result; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-2D8h] BYREF
  int v18; // [rsp+34h] [rbp-2D4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-2C8h]
  void *v21; // [rsp+48h] [rbp-2C0h]
  unsigned __int64 v22; // [rsp+50h] [rbp-2B8h] BYREF
  __int128 v23; // [rsp+58h] [rbp-2B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-2A0h]
  __int64 v25; // [rsp+70h] [rbp-298h]
  _DWORD v26[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+E0h] [rbp-228h] BYREF

  v7 = a3;
  v20 = 0LL;
  memset(v26, 0, sizeof(v26));
  v22 = 0LL;
  v18 = 0;
  v9 = a1[1];
  v21 = 0LL;
  if ( (_WORD)v9 )
  {
    result = AllocCallbackMessage(96, (_WORD)v9 != 0, v9 & -(__int64)((_WORD)v9 != 0), v27, 1, 0x200uLL);
    v10 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v26;
    RegionSize = (ULONG_PTR)v26;
    memset(&v26[1], 0, 0x5CuLL);
    v26[0] = 96;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v23 = 0LL;
  v24 = 0LL;
  if ( v10 != (unsigned __int8 *)v26 && v10 != v27 )
    PushW32ThreadLock((__int64)v10, &v23, (__int64)Win32FreePool);
  *((_DWORD *)v10 + 10) = v20;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (unsigned __int64)v21,
              (unsigned int)(unsigned __int16)v20 + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_21;
  *((_WORD *)v10 + 28) = *a1;
  v11 = a1[1];
  *((_WORD *)v10 + 29) = v11;
  if ( v11 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v10,
                *((_QWORD *)a1 + 1),
                (unsigned int)*a1 + 2,
                (void **)v10 + 8) < 0 )
      goto LABEL_21;
  }
  else
  {
    *((_QWORD *)v10 + 8) = *((_QWORD *)a1 + 1);
  }
  *((_DWORD *)v10 + 18) = v7;
  *((_DWORD *)v10 + 19) = a4;
  *((_DWORD *)v10 + 20) = a5;
  *((_DWORD *)v10 + 21) = a6;
  *((_DWORD *)v10 + 22) = 0;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v22, &v18);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  if ( v12 >= 0 && v18 == 24 )
  {
    v14 = (__int64 *)v22;
    if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v15 = *v14;
    v25 = v15;
    if ( v15 )
    {
      LOBYTE(v13) = 3;
      v15 = HMValidateHandleNoRip(v15, v13);
    }
    goto LABEL_14;
  }
LABEL_21:
  v15 = 0LL;
LABEL_14:
  if ( v10 != (unsigned __int8 *)v26 && v10 != v27 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v23);
  }
  return (unsigned __int8 *)v15;
}
