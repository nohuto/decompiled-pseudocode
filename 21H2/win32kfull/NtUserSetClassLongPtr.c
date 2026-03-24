/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C00FBF70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C00FC1DC (xxxSetClassLongPtr.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, ULONG64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG64 v13; // rdx
  ULONG64 v14; // rdx
  int v15; // ecx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  ULONG64 v19; // rcx
  int v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+38h] [rbp-80h] BYREF
  __int128 *v23; // [rsp+48h] [rbp-70h]
  ULONG64 v24; // [rsp+58h] [rbp-60h]
  __int128 v25; // [rsp+60h] [rbp-58h] BYREF
  __int128 v26; // [rsp+70h] [rbp-48h] BYREF
  __int64 v27; // [rsp+80h] [rbp-38h]
  __int128 v28; // [rsp+98h] [rbp-20h]
  ULONG64 v29; // [rsp+A8h] [rbp-10h]

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v26;
    *((_QWORD *)&v26 + 1) = v9;
    HMLockObject(v9);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL, v11, v12);
        v10 = 0LL;
LABEL_26:
        ThreadUnlock1(v19);
        goto LABEL_27;
      }
    }
    else if ( a2 == -8 )
    {
      v24 = a3;
      v13 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      v28 = *(_OWORD *)v13;
      v29 = *(_QWORD *)(v13 + 16);
      v22 = v28;
      v23 = (__int128 *)v29;
      v14 = v29;
      if ( v29 >= MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      v15 = *(_DWORD *)v14;
      v21 = *(_DWORD *)v14;
      LODWORD(v25) = *(_DWORD *)v14;
      v16 = *(_QWORD *)(v14 + 8);
      *((_QWORD *)&v25 + 1) = v16;
      if ( (v16 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_20;
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int16)v15 + v16 + 2;
      v18 = (_BYTE **)MmUserProbeAddress;
      if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v21) )
      {
        if ( (v15 & 1) != 0 )
          goto LABEL_18;
        if ( v17 > v16 )
        {
LABEL_20:
          v23 = &v25;
          v10 = xxxSetClassLongPtr(v9, 4294967288LL, &v22, a4);
          v23 = 0LL;
          v19 = MmUserProbeAddress;
          if ( a3 >= MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          *(_OWORD *)a3 = v22;
          *(_QWORD *)(a3 + 16) = v23;
          goto LABEL_26;
        }
      }
      if ( (v15 & 1) == 0 )
      {
LABEL_19:
        **v18 = 0;
        goto LABEL_20;
      }
LABEL_18:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1717LL);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_19;
    }
    v10 = xxxSetClassLongPtr(v9, a2, a3, a4);
    goto LABEL_26;
  }
  v10 = 0LL;
LABEL_27:
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
