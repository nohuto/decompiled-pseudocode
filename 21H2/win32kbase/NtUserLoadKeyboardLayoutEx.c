/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C004E7A0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C004EB20 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C004F810 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C (ApiSetEditionGetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  ULONG64 v9; // r15
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 KeyboardLayout; // rbx
  __int64 CurrentProcessWin32Process; // rax
  char v17; // al
  struct tagKERNELHANDLETABLEENTRY *v18; // rsi
  __int64 v19; // r8
  struct tagWINDOWSTATION *ProcessWindowStation; // r13
  int v21; // eax
  const unsigned __int16 *v22; // rsi
  unsigned __int64 v23; // r15
  ULONG64 v24; // rdx
  _BYTE **v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _OWORD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  _OWORD *v33; // rcx
  _OWORD *v34; // rax
  __int64 v36; // rcx
  int v37; // [rsp+50h] [rbp-6D8h]
  _BYTE v41[800]; // [rsp+A0h] [rbp-688h] BYREF
  _BYTE v42[800]; // [rsp+3C0h] [rbp-368h] BYREF
  unsigned __int16 v43[12]; // [rsp+6E0h] [rbp-48h] BYREF

  v9 = a6;
  memset(v42, 0, 0x318uLL);
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  KeyboardLayout = 0LL;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13, v14);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v17 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v17 = 0;
        }
        if ( v17 )
        {
          while ( 1 )
          {
            v18 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v18 + 2) = 0LL;
            v36 = *(_QWORD *)v18;
            if ( !*(_DWORD *)(*(_QWORD *)v18 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v11, v13);
              v36 = *(_QWORD *)v18;
            }
            HMUnlockObject(v36);
          }
        }
      }
    }
  }
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL, v11, v13, v14);
    goto LABEL_32;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v21 = *(_DWORD *)v9;
  v37 = *(_DWORD *)v9;
  v22 = *(const unsigned __int16 **)(v9 + 8);
  if ( ((unsigned __int8)v22 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = (unsigned __int16)v21;
  v24 = (ULONG64)v22 + (unsigned __int16)v21 + 2;
  v25 = (_BYTE **)MmUserProbeAddress;
  if ( v24 < MmUserProbeAddress && (unsigned __int16)v21 <= HIWORD(v37) )
  {
    if ( (v21 & 1) != 0 )
    {
LABEL_27:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v24, v19);
      v25 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_28;
    }
    if ( v24 > (unsigned __int64)v22 )
      goto LABEL_16;
  }
  if ( (v21 & 1) != 0 )
    goto LABEL_27;
LABEL_28:
  **v25 = 0;
LABEL_16:
  if ( (int)RtlStringCchCopyNW(v43, 9uLL, v22, v23 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v30 = v41;
      v31 = 6LL;
      v32 = 6LL;
      do
      {
        *v30 = *a4;
        v30[1] = a4[1];
        v30[2] = a4[2];
        v30[3] = a4[3];
        v30[4] = a4[4];
        v30[5] = a4[5];
        v30[6] = a4[6];
        v30 += 8;
        *(v30 - 1) = a4[7];
        a4 += 8;
        --v32;
      }
      while ( v32 );
      *v30 = *a4;
      *((_QWORD *)v30 + 2) = *((_QWORD *)a4 + 2);
      v33 = v42;
      v34 = v41;
      do
      {
        *v33 = *v34;
        v33[1] = v34[1];
        v33[2] = v34[2];
        v33[3] = v34[3];
        v33[4] = v34[4];
        v33[5] = v34[5];
        v33[6] = v34[6];
        v33 += 8;
        *(v33 - 1) = v34[7];
        v34 += 8;
        --v31;
      }
      while ( v31 );
      *v33 = *v34;
      *((_QWORD *)v33 + 2) = *((_QWORD *)v34 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v42,
                       v43,
                       a7,
                       a8);
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return KeyboardLayout;
}
