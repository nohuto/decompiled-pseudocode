/*
 * XREFs of ValidateHwndEx @ 0x1C0038620
 * Callers:
 *     UserGetDesktopDC @ 0x1C0020670 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C00356D0 (NtUserGetDC.c)
 *     ValidateHwnd @ 0x1C0038600 (ValidateHwnd.c)
 *     UserIsWindowGdiScaled @ 0x1C0085A40 (UserIsWindowGdiScaled.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01829F0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182DF0 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0182F94 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195408 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C004B214 (EtwTraceUIPIHandleValidationError.c)
 *     IsGetDesktopViewSupported @ 0x1C0066C58 (IsGetDesktopViewSupported.c)
 *     IsHandleEntrySecure @ 0x1C009362C (IsHandleEntrySecure.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  char *v6; // rsi
  __int64 *v7; // r12
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  int v20; // r9d
  int v21; // r10d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_25;
  v6 = (char *)qword_1C024FD58 + (unsigned int)(unsigned __int16)a1 * dword_1C024FD60;
  v7 = (__int64 *)((char *)gpKernelHandleTable
                 + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C024FD60) >> 5));
  if ( WORD1(a1) != *((_WORD *)v6 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    goto LABEL_25;
  }
  if ( v6[24] != 1 )
    goto LABEL_25;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v11, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v13 = *v7;
  if ( *v7
    && (v14 = *(_QWORD *)(v13 + 16), (v6[25] & 1) == 0)
    && (!a2
     || v14 == v9
     || *(_QWORD *)(v13 + 24) == *(_QWORD *)(v9 + 456)
     || (*(_DWORD *)(v9 + 488) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0
     && qword_1C0256D68
     && ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0256D68)(*(_QWORD *)(v9 + 424), *(_QWORD *)(v13 + 24))) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v14 + 424) + 888LL) != 1 )
      a3 = 0;
    if ( !gbValidateHandleForIL
      || !v14
      || (v16 = *(_QWORD *)(v14 + 424), v17 = *(_QWORD *)(v9 + 424), !UIPrivelegeIsolation::fEnforce)
      || (v18 = *(_DWORD *)(v17 + 880), v19 = *(_DWORD *)(v16 + 880), v18 > v19)
      || v18 == v19
      && ((v20 = *(_DWORD *)(v17 + 884), v21 = *(_DWORD *)(v16 + 884), v20 == v21) || v20 == -1 || v21 == -1)
      || a3
      && v18 == v19
      && (unsigned __int8)SeIsParentOfChildAppContainer(
                            (unsigned int)gSessionId,
                            *(unsigned int *)(v17 + 884),
                            *(unsigned int *)(v16 + 884))
      || **(PVOID **)(v14 + 424) == gpepCSRSS )
    {
      if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 424) + 768LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v6) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v13;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v9 + 424));
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
LABEL_25:
    UserSetLastError(1400LL);
    return 0LL;
  }
}
