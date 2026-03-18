/*
 * XREFs of ValidateHwndEx @ 0x1C002CB00
 * Callers:
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     ValidateHwnd @ 0x1C002CAE0 (ValidateHwnd.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0046060 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceInputProcessDelay @ 0x1C0049830 (EtwTraceInputProcessDelay.c)
 *     UserGetDesktopDC @ 0x1C0071BC0 (UserGetDesktopDC.c)
 *     UserIsWindowGdiScaled @ 0x1C0094DF0 (UserIsWindowGdiScaled.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01B8A54 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01B8DD8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01B8EF8 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C003D540 (EtwTraceUIPIHandleValidationError.c)
 *     IsGetDesktopViewSupported @ 0x1C007FB98 (IsGetDesktopViewSupported.c)
 *     IsHandleEntrySecure @ 0x1C00CCB84 (IsHandleEntrySecure.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v4; // esi
  char *v6; // rbp
  __int64 *v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 *v14; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  int v20; // r9d
  int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8

  v3 = a3;
  v4 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_32;
  v6 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
  v7 = (__int64 *)((char *)gpKernelHandleTable
                 + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5));
  v8 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v6 + 13) && v8 != 0x7FFF && (v8 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_32;
  if ( v6[24] != 1 )
    goto LABEL_32;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v11 = *v7;
  if ( v11
    && (v12 = *(_QWORD *)(v11 + 16), (v6[25] & 1) == 0)
    && (!v4
     || v12 == v9
     || *(_QWORD *)(v11 + 24) == *(_QWORD *)(v9 + 456)
     || (*(_DWORD *)(v9 + 488) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0
     && (a2 = *(_QWORD *)(v11 + 24), qword_1C029BAB8)
     && ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C029BAB8)(*(_QWORD *)(v9 + 424), a2)) )
  {
    if ( v3 && *(_DWORD *)(*(_QWORD *)(v12 + 424) + 888LL) != 1 )
      v3 = 0;
    v13 = 0LL;
    v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v14 )
      v13 = *v14;
    if ( *(_DWORD *)(v13 + 1508) != 1
      || !v12
      || (v16 = *(_QWORD *)(v12 + 424), v17 = *(_QWORD *)(v9 + 424), !UIPrivelegeIsolation::fEnforce)
      || (v18 = *(_DWORD *)(v17 + 880), v19 = *(_DWORD *)(v16 + 880), v18 > v19)
      || v18 == v19
      && ((v20 = *(_DWORD *)(v17 + 884), v21 = *(_DWORD *)(v16 + 884), v20 == v21) || v20 == -1 || v21 == -1)
      || v3
      && v18 == v19
      && (unsigned __int8)SeIsParentOfChildAppContainer(
                            (unsigned int)gSessionId,
                            *(unsigned int *)(v17 + 884),
                            *(unsigned int *)(v16 + 884))
      || **(PVOID **)(v12 + 424) == gpepCSRSS )
    {
      if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 424) + 768LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v6) )
      {
        UserSetLastError(1400LL, v24, v25);
        return 0LL;
      }
      return v11;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v9 + 424));
      UserSetLastError(5LL, v22, v23);
      return 0LL;
    }
  }
  else
  {
LABEL_32:
    UserSetLastError(1400LL, a2, a3);
    return 0LL;
  }
}
