/*
 * XREFs of ValidateHwndEx @ 0x1C0039A90
 * Callers:
 *     UserGetDesktopDC @ 0x1C0021AE0 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     ValidateHwnd @ 0x1C0039A70 (ValidateHwnd.c)
 *     UserIsWindowGdiScaled @ 0x1C0086940 (UserIsWindowGdiScaled.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0182920 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182D20 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0182EC4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195338 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     IsGetDesktopViewSupported @ 0x1C00065F8 (IsGetDesktopViewSupported.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0007EF4 (EtwTraceUIPIHandleValidationError.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     IsHandleEntrySecure @ 0x1C00943EC (IsHandleEntrySecure.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
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
  const struct tagPROCESSINFO *v22; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_25;
  v6 = (char *)qword_1C024FA38 + (unsigned int)(unsigned __int16)a1 * dword_1C024FA40;
  v7 = (__int64 *)((char *)gpKernelHandleTable
                 + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C024FA40) >> 5));
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
     && qword_1C0255D68
     && qword_1C0255D68(*(_QWORD *)(v9 + 424), *(_QWORD *)(v13 + 24))) )
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
      || (v22 = *(const struct tagPROCESSINFO **)(v14 + 424), *(PVOID *)v22 == gpepCSRSS) )
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
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v9 + 424), v22, a1, v6[24]);
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
