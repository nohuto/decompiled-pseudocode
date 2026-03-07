__int64 __fastcall ValidateHwndEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  unsigned int v7; // r10d
  char *v8; // r14
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r10d
  const struct tagPROCESSINFO *v31; // rdx
  unsigned int v32; // edi
  unsigned int v33; // esi
  unsigned int *v34; // rax

  v4 = a3;
  v5 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_37;
  v7 = dword_1C02D0E10 * (unsigned __int16)a1;
  v8 = (char *)qword_1C02D0E08 + v7;
  v9 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)v7 >> 5));
  v10 = 0x7FFFLL;
  v11 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v8 + 13) && v11 != 0x7FFF && (v11 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_37;
  if ( v8[24] != 1 )
    goto LABEL_37;
  v12 = SGDGetUserSessionState(v10, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v19 = *v9;
  if ( v19
    && (v20 = *(_QWORD *)(v19 + 16), (v8[25] & 1) == 0)
    && (!v5
     || v20 == v13
     || *(_QWORD *)(v19 + 24) == *(_QWORD *)(v13 + 456)
     || (*(_DWORD *)(v13 + 488) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0
     && qword_1C02D6370
     && ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D6370)(*(_QWORD *)(v13 + 424), *(_QWORD *)(v19 + 24))) )
  {
    if ( v4 && *(_DWORD *)(*(_QWORD *)(v20 + 424) + 872LL) != 1 )
      v4 = 0;
    v21 = SGDGetUserSessionState(v16, v15, v17, v18);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v21 + 8)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v22 = 0LL;
    v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v23 )
      v22 = *v23;
    if ( *(_DWORD *)(v22 + 1548) != 1 )
      goto LABEL_41;
    if ( !v20 )
      goto LABEL_41;
    v26 = *(_QWORD *)(v20 + 424);
    v27 = *(_QWORD *)(v13 + 424);
    if ( !UIPrivelegeIsolation::fEnforce )
      goto LABEL_41;
    v28 = *(unsigned int *)(v27 + 864);
    v29 = *(unsigned int *)(v26 + 864);
    if ( (unsigned int)v28 > (unsigned int)v29 )
      goto LABEL_41;
    if ( (_DWORD)v28 == (_DWORD)v29 )
    {
      v24 = *(unsigned int *)(v27 + 868);
      v30 = *(_DWORD *)(v26 + 868);
      if ( (_DWORD)v24 == v30 || (_DWORD)v24 == -1 || v30 == -1 )
        goto LABEL_41;
    }
    if ( v4
      && (_DWORD)v28 == (_DWORD)v29
      && (v32 = *(_DWORD *)(v26 + 868),
          v33 = *(_DWORD *)(v27 + 868),
          v34 = (unsigned int *)SGDGetUserSessionState(v27, v28, v29, v24),
          (unsigned __int8)SeIsParentOfChildAppContainer(*v34, v33, v32))
      || (v31 = *(const struct tagPROCESSINFO **)(v20 + 424), *(PVOID *)v31 == gpepCSRSS) )
    {
LABEL_41:
      if ( (*(_DWORD *)(v13 + 488) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 424) + 760LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v8) )
      {
        UserSetLastError(1400);
        return 0LL;
      }
      return v19;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v13 + 424), v31, a1, v8[24]);
      UserSetLastError(5);
      return 0LL;
    }
  }
  else
  {
LABEL_37:
    UserSetLastError(1400);
    return 0LL;
  }
}
