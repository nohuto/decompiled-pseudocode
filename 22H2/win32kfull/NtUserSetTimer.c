/*
 * XREFs of NtUserSetTimer @ 0x1C00E6310
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  PERESOURCE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  unsigned int v24; // edi
  unsigned int v25; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9

  EnterCrit(0LL, 0LL);
  v14 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v9) + 8)
    || (v15 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v11, v10, v12, v13),
        !ExIsResourceAcquiredSharedLite(*v15)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 )
  {
    v22 = ValidateHwnd(a1);
    if ( !v22 )
      goto LABEL_27;
  }
  else
  {
    v22 = 0LL;
  }
  v24 = 10;
  if ( a3 >= 0xA )
    v24 = a3;
  v25 = a5;
  if ( v24 > 0x7FFFFFFF )
    v24 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v25 = 0x7FFFFFFF - v24;
  }
  else if ( a5 != -1 && (v24 + a5 < v24 || v24 + a5 > 0x7FFFFFFF) )
  {
    UserSetLastError(87LL);
    goto LABEL_27;
  }
  if ( !v22 )
    goto LABEL_26;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x7FFFFFFFLL);
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    CurrentProcessWin32Process = 0LL;
  if ( CurrentProcessWin32Process == *(_QWORD **)(*(_QWORD *)(v22 + 16) + 424LL) )
LABEL_26:
    v14 = InternalSetTimer(v22, a2, v24, a4, v25, 0);
  else
    UserSetLastError(5LL);
LABEL_27:
  v27 = PsGetCurrentThreadWin32Thread(v21, v20, v23);
  --*(_DWORD *)(v27 + 48);
  UserSessionSwitchLeaveCrit(v29, v28, v30, v31);
  return v14;
}
