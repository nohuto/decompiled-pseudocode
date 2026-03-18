/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C0067DD0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0066FA8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0067010 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0069BB4 (ApiSetEditionGetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  ULONG64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // rcx
  HKL KeyboardLayout; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rax
  char v21; // al
  __int64 *v22; // rsi
  int v23; // ecx
  char *v24; // r8
  ULONG64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct tagWINDOWSTATION *v30; // r11
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  _BYTE v38[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v39[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v40[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v11 = a6;
  memset(v39, 0, 0x318uLL);
  LOBYTE(v12) = 1;
  v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v12, v13, v14, v15);
  gptiCurrent = v16;
  KeyboardLayout = 0LL;
  if ( v16 )
  {
    *((_DWORD *)v16 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( CurrentProcessWin32Process )
    {
      v17 = (struct tagTHREADINFO *)-*(_QWORD *)CurrentProcessWin32Process;
      v20 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v20 )
      {
        if ( (*(_DWORD *)(v20 + 12) & 0x8000) != 0 )
        {
          v17 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v21 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v21 = 0;
          }
          if ( v21 )
          {
            while ( 1 )
            {
              v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v22[2] = 0LL;
              if ( !*(_DWORD *)(*v22 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v22);
            }
          }
        }
      }
    }
  }
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_34;
  }
  ApiSetEditionGetProcessWindowStation(v17);
  if ( a6 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v23 = *(_DWORD *)v11;
  v24 = *(char **)(v11 + 8);
  if ( ((unsigned __int8)v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (ULONG64)&v24[(unsigned __int16)v23 + 2];
  if ( v25 <= (unsigned __int64)v24 || v25 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v23 > (unsigned __int16)HIWORD(*(_DWORD *)v11) )
  {
    if ( (v23 & 1) == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( (v23 & 1) != 0 )
  {
LABEL_31:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6136LL);
LABEL_32:
    ExRaiseAccessViolation();
  }
  if ( (int)RtlStringCchCopyNW((char *)v40, 9LL, v24, (unsigned __int64)(unsigned __int16)v23 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v31 = v38;
      v32 = 6LL;
      v33 = 6LL;
      do
      {
        *v31 = *a4;
        v31[1] = a4[1];
        v31[2] = a4[2];
        v31[3] = a4[3];
        v31[4] = a4[4];
        v31[5] = a4[5];
        v31[6] = a4[6];
        v31 += 8;
        *(v31 - 1) = a4[7];
        a4 += 8;
        --v33;
      }
      while ( v33 );
      *v31 = *a4;
      *((_QWORD *)v31 + 2) = *((_QWORD *)a4 + 2);
      v34 = v39;
      v35 = v38;
      do
      {
        *v34 = *v35;
        v34[1] = v35[1];
        v34[2] = v35[2];
        v34[3] = v35[3];
        v34[4] = v35[4];
        v34[5] = v35[5];
        v34[6] = v35[6];
        v34 += 8;
        *(v34 - 1) = v35[7];
        v35 += 8;
        --v32;
      }
      while ( v32 );
      *v34 = *v35;
      *((_QWORD *)v34 + 2) = *((_QWORD *)v35 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       v30,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v39,
                       v40,
                       a7,
                       a8);
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return KeyboardLayout;
}
