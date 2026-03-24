/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C0134510
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C0042FA8 (CheckAccessEx.c)
 *     EtwTraceUIPISystemError @ 0x1C004B090 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C011C010 (_SetPrecisionTouchPadConfiguration.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A6B68 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     UserSetLastStatus @ 0x1C01D1E08 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v7[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v7[0] = 0x2000;
  v7[1] = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v7, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v2) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v5 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v3 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v5) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v9 = *(_OWORD *)a1;
      v10 = *(_QWORD *)(a1 + 16);
      LODWORD(v9) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v9);
      if ( v3 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    v3 = 0;
    UserSetLastError(5LL, v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v3;
}
