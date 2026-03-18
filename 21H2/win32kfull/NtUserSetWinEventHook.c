/*
 * XREFs of NtUserSetWinEventHook @ 0x1C00E5B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _SetWinEventHook @ 0x1C00E5D30 (_SetWinEventHook.c)
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00E6220 (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0159D88 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C0159E2C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rbx
  ULONG64 v14; // rdi
  unsigned int v15; // esi
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int64 v19; // rcx
  ULONG64 v20; // rdx
  _BYTE **v21; // rax
  char v22[4]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-A4h]
  int v24; // [rsp+48h] [rbp-A0h]
  int v25; // [rsp+4Ch] [rbp-9Ch]
  ULONG64 v26; // [rsp+50h] [rbp-98h]
  __int64 v27; // [rsp+58h] [rbp-90h]
  __int128 v28; // [rsp+60h] [rbp-88h]
  _BYTE v29[48]; // [rsp+78h] [rbp-70h] BYREF

  v27 = a5;
  v25 = a6;
  v23 = a7;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v22, 6LL, 0LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL, v12);
    v13 = 0LL;
    goto LABEL_6;
  }
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v29);
  v28 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v26 = 0LL;
  if ( (a8 & 4) != 0 && a3 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    v19 = *a4;
    v24 = v19;
    LODWORD(v28) = v19;
    v14 = *((_QWORD *)a4 + 1);
    *((_QWORD *)&v28 + 1) = v14;
    if ( (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (unsigned __int16)v19 + v14 + 2;
    v21 = (_BYTE **)MmUserProbeAddress;
    if ( v20 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v24) )
    {
      if ( (v19 & 1) != 0 )
        goto LABEL_19;
      if ( v20 > v14 )
      {
LABEL_16:
        v26 = v14;
        goto LABEL_3;
      }
    }
    if ( (v19 & 1) == 0 )
    {
LABEL_20:
      **v21 = 0;
      goto LABEL_16;
    }
LABEL_19:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
    v21 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_20;
  }
LABEL_3:
  v15 = v25;
  v16 = (__int64 *)SetWinEventHook(a1, a2, a3, v14, v27, v25, v23, a8);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v29);
  if ( v16 )
    v13 = *v16;
  EtwTraceAuditApiSetWinEventHook(a1, a2, v15, v23, a8, v13);
LABEL_6:
  UserSessionSwitchLeaveCrit(v17);
  return v13;
}
