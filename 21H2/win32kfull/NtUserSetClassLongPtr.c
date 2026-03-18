/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C0115080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C0115194 (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  ULONG64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  ULONG64 v16; // rdx
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  ULONG64 v19; // r8
  ULONG64 v20; // rdx
  _BYTE **v21; // rax
  int v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+38h] [rbp-80h] BYREF
  __int128 *v24; // [rsp+48h] [rbp-70h]
  ULONG64 v25; // [rsp+58h] [rbp-60h]
  __int128 v26; // [rsp+60h] [rbp-58h] BYREF
  __int128 v27; // [rsp+70h] [rbp-48h] BYREF
  __int64 v28; // [rsp+80h] [rbp-38h]
  __int128 v29; // [rsp+98h] [rbp-20h]
  ULONG64 v30; // [rsp+A8h] [rbp-10h]

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  if ( !v9 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v27;
  *((_QWORD *)&v27 + 1) = v9;
  HMLockObject(v9);
  if ( a2 != -26 )
  {
    if ( a2 != -8 )
      goto LABEL_4;
    v25 = a3;
    v16 = a3;
    if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
      v16 = MmUserProbeAddress;
    v29 = *(_OWORD *)v16;
    v30 = *(_QWORD *)(v16 + 16);
    v23 = v29;
    v24 = (__int128 *)v30;
    v17 = (unsigned int *)v30;
    if ( v30 >= MmUserProbeAddress )
      v17 = (unsigned int *)MmUserProbeAddress;
    v18 = *v17;
    v22 = *v17;
    LODWORD(v26) = *v17;
    v19 = *((_QWORD *)v17 + 1);
    *((_QWORD *)&v26 + 1) = v19;
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (unsigned __int16)v18 + v19 + 2;
      v21 = (_BYTE **)MmUserProbeAddress;
      if ( v20 >= MmUserProbeAddress || (unsigned __int16)v18 > HIWORD(v22) )
        goto LABEL_22;
      if ( (v18 & 1) != 0 )
        goto LABEL_23;
      if ( v20 <= v19 )
      {
LABEL_22:
        if ( (v18 & 1) == 0 )
        {
LABEL_24:
          **v21 = 0;
          goto LABEL_25;
        }
LABEL_23:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
        v21 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_24;
      }
    }
LABEL_25:
    v24 = &v26;
    v13 = xxxSetClassLongPtr(v9, 4294967288LL, &v23, a4);
    v24 = 0LL;
    v12 = MmUserProbeAddress;
    v11 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v23;
    *(_QWORD *)(a3 + 16) = v24;
    goto LABEL_5;
  }
  if ( (a3 & 0x10000) != 0 )
  {
    UserSetLastError(13LL, v10);
    v13 = 0LL;
    goto LABEL_5;
  }
LABEL_4:
  v13 = xxxSetClassLongPtr(v9, a2, a3, a4);
LABEL_5:
  ThreadUnlock1(v12, v11, v14);
LABEL_6:
  UserSessionSwitchLeaveCrit(v8);
  return v13;
}
