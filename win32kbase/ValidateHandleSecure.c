/*
 * XREFs of ValidateHandleSecure @ 0x1C0077D40
 * Callers:
 *     HMValidateHandle @ 0x1C0079718 (HMValidateHandle.c)
 *     HMValidateCatHandleNoRip @ 0x1C0246EEC (HMValidateCatHandleNoRip.c)
 * Callees:
 *     EtwTraceUIPIHandleValidationError @ 0x1C003CC40 (EtwTraceUIPIHandleValidationError.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     IsHandleEntrySecure @ 0x1C00D6650 (IsHandleEntrySecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ValidateHandleSecure(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int16 v8; // ax
  char *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbp
  __int64 v16; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v18; // r10
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // ecx
  __int64 v26; // rdx

  v3 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v6 = a1 >> 16;
    v7 = 0x7FFFLL;
    v8 = v6 & 0x7FFF;
    v9 = (char *)qword_1C02D0E08 + (unsigned int)v5;
    if ( v8 == *((_WORD *)v9 + 13) || v8 == 0x7FFF || !v8 && PsGetCurrentProcessWow64Process() )
    {
      v10 = 1;
      if ( v9[24] && ((v3 & 1) == 0 || (unsigned int)IsHandleEntrySecure(a1, v9)) && (v3 & 2) != 0 )
      {
        v11 = SGDGetUserSessionState(v7, a2, a3, v5);
        if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 8)) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
        v12 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v12 = *ThreadWin32Thread;
        if ( !*(_DWORD *)(v12 + 1548) )
          return v10;
        v15 = gpKernelHandleTable;
        v16 = 3LL * (unsigned int)((v9 - (char *)qword_1C02D0E08) >> 5);
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v14);
        v18 = CurrentProcessWin32Process;
        if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
          return v10;
        v19 = (unsigned __int8)v9[24];
        v20 = *((_WORD *)&unk_1C028159C + 12 * v19);
        if ( (v20 & 2) != 0 )
        {
          v21 = v15[v16 + 1];
        }
        else
        {
          if ( (v20 & 1) == 0 )
            return v10;
          v26 = v15[v16 + 1];
          if ( !v26 )
            return v10;
          v21 = *(_QWORD *)(v26 + 424);
        }
        if ( v21 )
        {
          if ( *(PVOID *)v21 != gpepCSRSS && UIPrivelegeIsolation::fEnforce )
          {
            v22 = *((_DWORD *)v18 + 216);
            if ( v22 <= *(_DWORD *)(v21 + 864) )
            {
              if ( v22 != *(_DWORD *)(v21 + 864)
                || (v23 = *((_DWORD *)v18 + 217), v24 = *(_DWORD *)(v21 + 868), v23 != v24) && v23 != -1 && v24 != -1 )
              {
                EtwTraceUIPIHandleValidationError(
                  (struct tagPROCESSINFO *)v18,
                  (const struct tagPROCESSINFO *)v21,
                  **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v9 - (char *)qword_1C02D0E08) >> 5)),
                  v19);
                UserSetLastError(5);
                return 0;
              }
            }
          }
        }
        return v10;
      }
    }
  }
  return 0LL;
}
