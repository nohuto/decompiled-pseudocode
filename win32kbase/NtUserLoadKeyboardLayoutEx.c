/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C0084BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0082880 (ApiSetEditionGetProcessWindowStation.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0084F50 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0085E78 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall NtUserLoadKeyboardLayoutEx(
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
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rcx
  __int64 KeyboardLayout; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rax
  char v18; // al
  __int64 *v19; // rsi
  int v20; // ecx
  const unsigned __int16 *v21; // r8
  ULONG64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagWINDOWSTATION *v27; // r11
  _OWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  _OWORD *v31; // rcx
  _OWORD *v32; // rax
  _BYTE v35[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v36[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v37[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v11 = a6;
  memset(v36, 0, 0x318uLL);
  LOBYTE(v12) = 1;
  v13 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v12);
  gptiCurrent = v13;
  KeyboardLayout = 0LL;
  if ( v13 )
  {
    *((_DWORD *)v13 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v17 )
      {
        if ( (*(_DWORD *)(v17 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v18 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v18 = 0;
          }
          if ( v18 )
          {
            while ( 1 )
            {
              v19 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v19[2] = 0LL;
              if ( !*(_DWORD *)(*v19 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v19);
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
  ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v20 = *(_DWORD *)v11;
  v21 = *(const unsigned __int16 **)(v11 + 8);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (ULONG64)v21 + (unsigned __int16)v20 + 2;
  if ( v22 <= (unsigned __int64)v21 || v22 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v20 > (unsigned __int16)HIWORD(*(_DWORD *)v11) )
  {
    if ( (v20 & 1) == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( (v20 & 1) != 0 )
  {
LABEL_31:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6135LL);
LABEL_32:
    ExRaiseAccessViolation();
  }
  if ( (int)RtlStringCchCopyNW(v37, 9uLL, v21, (unsigned __int64)(unsigned __int16)v20 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v28 = v35;
      v29 = 6LL;
      v30 = 6LL;
      do
      {
        *v28 = *a4;
        v28[1] = a4[1];
        v28[2] = a4[2];
        v28[3] = a4[3];
        v28[4] = a4[4];
        v28[5] = a4[5];
        v28[6] = a4[6];
        v28 += 8;
        *(v28 - 1) = a4[7];
        a4 += 8;
        --v30;
      }
      while ( v30 );
      *v28 = *a4;
      *((_QWORD *)v28 + 2) = *((_QWORD *)a4 + 2);
      v31 = v36;
      v32 = v35;
      do
      {
        *v31 = *v32;
        v31[1] = v32[1];
        v31[2] = v32[2];
        v31[3] = v32[3];
        v31[4] = v32[4];
        v31[5] = v32[5];
        v31[6] = v32[6];
        v31 += 8;
        *(v31 - 1) = v32[7];
        v32 += 8;
        --v29;
      }
      while ( v29 );
      *v31 = *v32;
      *((_QWORD *)v31 + 2) = *((_QWORD *)v32 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       v27,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v36,
                       v37,
                       a7,
                       a8);
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return KeyboardLayout;
}
