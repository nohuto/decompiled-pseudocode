/*
 * XREFs of NtUserDownlevelTouchpad @ 0x1C012DCD0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00413C0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00414F4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A83A8 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall NtUserDownlevelTouchpad(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v12, "DownlevelTouchpad", 0LL, a4);
  EnterCrit(0, 1);
  v7 = 0;
  v11 = 0LL;
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_11;
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v11 = *a2;
  if ( (unsigned int)v11 > 2 )
  {
LABEL_11:
    v9 = 87LL;
    goto LABEL_12;
  }
  v8 = CPTPProcessor::xxxDownlevelInput(a1, (const struct tagPTP_DOWNLEVELED_INPUT *)&v11);
  if ( v8 < 0 )
  {
    v9 = RtlNtStatusToDosError(v8);
LABEL_12:
    UserSetLastError(v9, v6);
    goto LABEL_13;
  }
  v7 = 1;
LABEL_13:
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v12);
  return v7;
}
