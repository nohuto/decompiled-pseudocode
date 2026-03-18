/*
 * XREFs of ValidateHwndEx @ 0x1C0045FD0
 * Callers:
 *     ValidateHwnd @ 0x1C0045EC0 (ValidateHwnd.c)
 *     EtwTraceInputProcessDelay @ 0x1C0053680 (EtwTraceInputProcessDelay.c)
 *     UserGetDesktopDC @ 0x1C005A7D0 (UserGetDesktopDC.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0089570 (EtwTraceMessageCheckDelay.c)
 *     UserIsWindowGdiScaled @ 0x1C009B0E0 (UserIsWindowGdiScaled.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B5044 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B5664 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B5824 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CB6B4 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007476C (EtwTraceUIPIHandleValidationError.c)
 *     IsGetDesktopViewSupported @ 0x1C00B5124 (IsGetDesktopViewSupported.c)
 *     IsHandleEntrySecure @ 0x1C00CA4D4 (IsHandleEntrySecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  unsigned int v6; // r10d
  char *v7; // r14
  __int64 *v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r10d
  unsigned int v23; // edi
  unsigned int v24; // esi
  unsigned int *v25; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_37;
  v6 = dword_1C028FE70 * (unsigned __int16)a1;
  v7 = (char *)qword_1C028FE68 + v6;
  v8 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)v6 >> 5));
  v9 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v7 + 13) && v9 != 0x7FFF && (v9 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_37;
  if ( v7[24] != 1 )
    goto LABEL_37;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  v12 = *v8;
  if ( v12
    && (v13 = *(_QWORD *)(v12 + 16), (v7[25] & 1) == 0)
    && (!a2
     || v13 == v10
     || *(_QWORD *)(v12 + 24) == *(_QWORD *)(v10 + 456)
     || (*(_DWORD *)(v10 + 488) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0
     && qword_1C02951F0
     && ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02951F0)(*(_QWORD *)(v10 + 424), *(_QWORD *)(v12 + 24))) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v13 + 424) + 896LL) != 1 )
      a3 = 0;
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v14 = 0LL;
    v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v15 )
      v14 = *v15;
    if ( *(_DWORD *)(v14 + 1548) != 1 )
      goto LABEL_41;
    if ( !v13 )
      goto LABEL_41;
    v18 = *(_QWORD *)(v13 + 424);
    v19 = *(_QWORD *)(v10 + 424);
    if ( !UIPrivelegeIsolation::fEnforce )
      goto LABEL_41;
    v20 = *(unsigned int *)(v19 + 888);
    v21 = *(unsigned int *)(v18 + 888);
    if ( (unsigned int)v20 > (unsigned int)v21 )
      goto LABEL_41;
    if ( (_DWORD)v20 == (_DWORD)v21 )
    {
      v16 = *(unsigned int *)(v19 + 892);
      v22 = *(_DWORD *)(v18 + 892);
      if ( (_DWORD)v16 == v22 || (_DWORD)v16 == -1 || v22 == -1 )
        goto LABEL_41;
    }
    if ( a3
      && (_DWORD)v20 == (_DWORD)v21
      && (v23 = *(_DWORD *)(v18 + 892),
          v24 = *(_DWORD *)(v19 + 892),
          v25 = (unsigned int *)SGDGetUserSessionState(v19, v20, v21, v16),
          (unsigned __int8)SeIsParentOfChildAppContainer(*v25, v24, v23))
      || **(PVOID **)(v13 + 424) == gpepCSRSS )
    {
LABEL_41:
      if ( (*(_DWORD *)(v10 + 488) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 424) + 760LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v7) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v12;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v10 + 424));
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
LABEL_37:
    UserSetLastError(1400LL);
    return 0LL;
  }
}
