/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x1C0064850
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C01DC510 (NtUserSetCursorIconData.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCursorIconDataEx(__int64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  struct tagCURSOR *v18; // r14
  int v19; // edx
  WCHAR *v20; // r9
  int v21; // ecx
  WCHAR *v22; // r8
  ULONG64 v23; // r10
  ULONG64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-118h]
  int v29; // [rsp+50h] [rbp-E8h]
  int v30; // [rsp+54h] [rbp-E4h]
  struct _UNICODE_STRING v31; // [rsp+60h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v32; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-98h]
  __int128 v35; // [rsp+B0h] [rbp-88h]
  __int128 v36; // [rsp+C0h] [rbp-78h]
  __int128 v37; // [rsp+D0h] [rbp-68h]
  __int128 v38; // [rsp+E0h] [rbp-58h]
  __int128 v39; // [rsp+F0h] [rbp-48h]
  __int128 v40; // [rsp+100h] [rbp-38h]
  __int64 v41; // [rsp+110h] [rbp-28h]

  v32 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 0LL);
  v11 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v9) + 8)
    || (v12 = SGDGetUserSessionState(v10), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  LOBYTE(v15) = 3;
  v16 = HMValidateHandle(a1, v15);
  v18 = (struct tagCURSOR *)v16;
  if ( !v16 )
    goto LABEL_42;
  if ( (*(_DWORD *)(v16 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0);
    goto LABEL_42;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v19 = *(_DWORD *)a2;
  v30 = *(_DWORD *)a2;
  *(_DWORD *)&v32.Length = *(_DWORD *)a2;
  v20 = *(WCHAR **)(a2 + 8);
  v32.Buffer = v20;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v21 = *(_DWORD *)a3;
  v29 = *(_DWORD *)a3;
  *(_DWORD *)&v31.Length = *(_DWORD *)a3;
  v22 = *(WCHAR **)(a3 + 8);
  v31.Buffer = v22;
  if ( ((unsigned __int8)v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = (ULONG64)v20 + (unsigned __int16)v19 + 2;
  if ( v23 <= (unsigned __int64)v20 || v23 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v19 > HIWORD(v30) )
  {
    if ( (v19 & 1) == 0 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( (v19 & 1) != 0 )
  {
LABEL_39:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8028LL);
LABEL_40:
    ExRaiseAccessViolation();
  }
  if ( ((unsigned __int64)v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v22 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = (ULONG64)v22 + (unsigned __int16)v21 + 2;
    if ( v24 <= (unsigned __int64)v22 || v24 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v21 > HIWORD(v29) || (v21 & 1) != 0 )
    {
      if ( (v21 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8029LL);
      ExRaiseAccessViolation();
    }
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v33 = *(_OWORD *)a4;
  v34 = *(_OWORD *)(a4 + 16);
  v35 = *(_OWORD *)(a4 + 32);
  v36 = *(_OWORD *)(a4 + 48);
  v37 = *(_OWORD *)(a4 + 64);
  v38 = *(_OWORD *)(a4 + 80);
  v39 = *(_OWORD *)(a4 + 96);
  v40 = *(_OWORD *)(a4 + 112);
  v41 = *(_QWORD *)(a4 + 128);
  if ( (DWORD2(v34) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_42;
  }
  if ( (BYTE8(v34) & 8) == 0 )
    goto LABEL_19;
  v17 = (unsigned __int64)SDWORD1(v39) >> 16;
  LOWORD(v17) = WORD1(v39) | WORD3(v39);
  if ( !(WORD1(v39) | WORD3(v39)) )
  {
    v17 = *((_QWORD *)&v40 + 1);
    if ( *((_QWORD *)&v40 + 1) == 8LL * (int)v39 && (_QWORD)v40 == *((_QWORD *)&v40 + 1) + 4LL * SDWORD1(v39) )
    {
      v11 = 8 * (DWORD1(v39) + v39);
LABEL_19:
      ProbeForRead(*((volatile void **)&v39 + 1), v11, 4u);
      LODWORD(BugCheckParameter4) = v11;
      v11 = _SetCursorIconDataEx(v18, &v32, &v31, (struct tagCURSORDATA *)&v33, BugCheckParameter4, a5);
    }
  }
LABEL_42:
  v25 = PsGetCurrentThreadWin32Thread(v17);
  --*(_DWORD *)(v25 + 48);
  UserSessionSwitchLeaveCrit(v26);
  return (int)v11;
}
