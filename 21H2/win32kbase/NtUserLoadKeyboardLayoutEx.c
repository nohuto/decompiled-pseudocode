/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C01323F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0008570 (xxxSafeLoadKeyboardLayoutEx.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C003D808 (ApiSetEditionGetProcessWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00AACEC (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00CDCF8 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
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
  ULONG64 v10; // rsi
  __int64 v11; // rdx
  HKL KeyboardLayout; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // r15
  int v14; // eax
  char *v15; // rsi
  unsigned __int64 v16; // r14
  ULONG64 v17; // rdx
  _BYTE **v18; // rcx
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  int v25; // [rsp+50h] [rbp-6D8h]
  _BYTE v28[792]; // [rsp+98h] [rbp-690h] BYREF
  _BYTE v29[800]; // [rsp+3B0h] [rbp-378h] BYREF
  unsigned __int16 v30[12]; // [rsp+6D0h] [rbp-58h] BYREF

  v10 = a6;
  memset(v29, 0, 0x318uLL);
  EnterCrit(0, 1);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004LL, v11);
    KeyboardLayout = 0LL;
    goto LABEL_27;
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v14 = *(_DWORD *)v10;
  v25 = *(_DWORD *)v10;
  v15 = *(char **)(v10 + 8);
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (unsigned __int16)v14;
  v17 = (ULONG64)&v15[(unsigned __int16)v14 + 2];
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v25) )
  {
    if ( (v14 & 1) != 0 )
      goto LABEL_13;
    if ( v17 > (unsigned __int64)v15 )
    {
      KeyboardLayout = 0LL;
      goto LABEL_16;
    }
  }
  if ( (v14 & 1) == 0 )
  {
    KeyboardLayout = 0LL;
    goto LABEL_15;
  }
LABEL_13:
  KeyboardLayout = 0LL;
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5736);
  v18 = (_BYTE **)MmUserProbeAddress;
LABEL_15:
  **v18 = 0;
LABEL_16:
  if ( (int)RtlStringCchCopyNW((char *)v30, 9LL, v15, v16 >> 1) >= 0 )
  {
    if ( a4 )
    {
      if ( (_OWORD *)((char *)a4 + 792) < a4 || (unsigned __int64)a4 + 792 > MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      v19 = v28;
      v20 = 6LL;
      v21 = 6LL;
      do
      {
        *v19 = *a4;
        v19[1] = a4[1];
        v19[2] = a4[2];
        v19[3] = a4[3];
        v19[4] = a4[4];
        v19[5] = a4[5];
        v19[6] = a4[6];
        v19 += 8;
        *(v19 - 1) = a4[7];
        a4 += 8;
        --v21;
      }
      while ( v21 );
      *v19 = *a4;
      *((_QWORD *)v19 + 2) = *((_QWORD *)a4 + 2);
      v22 = v29;
      v23 = v28;
      do
      {
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        v22[4] = v23[4];
        v22[5] = v23[5];
        v22[6] = v23[6];
        v22 += 8;
        *(v22 - 1) = v23[7];
        v23 += 8;
        --v20;
      }
      while ( v20 );
      *v22 = *v23;
      *((_QWORD *)v22 + 2) = *((_QWORD *)v23 + 2);
    }
    KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                       ProcessWindowStation,
                       a1,
                       a5,
                       a2,
                       a3,
                       (struct tagKBDTABLE_MULT_INTERNAL *)v29,
                       v30,
                       a7,
                       a8);
  }
LABEL_27:
  UserSessionSwitchLeaveCrit();
  return KeyboardLayout;
}
