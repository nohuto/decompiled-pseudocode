/*
 * XREFs of NtUserSetCursorIconDataEx @ 0x1C002CD90
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C01DB4E0 (NtUserSetCursorIconData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCursorIconDataEx(__int64 a1, ULONG64 a2, ULONG64 a3, ULONG64 a4, unsigned int a5)
{
  AtomicExecutionCheck *v9; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  struct tagCURSOR *v13; // rsi
  unsigned int v14; // ebx
  int v15; // edx
  WCHAR *v16; // r9
  int v17; // ecx
  WCHAR *v18; // r8
  ULONG64 v19; // r10
  ULONG64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v28; // [rsp+30h] [rbp-D8h]
  int v29; // [rsp+34h] [rbp-D4h]
  struct _UNICODE_STRING v30; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-98h] BYREF
  __int128 v33; // [rsp+80h] [rbp-88h]
  __int128 v34; // [rsp+90h] [rbp-78h]
  __int128 v35; // [rsp+A0h] [rbp-68h]
  __int128 v36; // [rsp+B0h] [rbp-58h]
  __int128 v37; // [rsp+C0h] [rbp-48h]
  __int128 v38; // [rsp+D0h] [rbp-38h]
  __int128 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+F0h] [rbp-18h]

  v31 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v9);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  LOBYTE(v11) = 3;
  v12 = HMValidateHandle(a1, v11);
  v13 = (struct tagCURSOR *)v12;
  v14 = 0;
  if ( !v12 )
    goto LABEL_40;
  if ( (*(_DWORD *)(v12 + 80) & 0x800) == 0 )
  {
    UserSetLastError(0LL);
    goto LABEL_40;
  }
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v15 = *(_DWORD *)a2;
  v29 = *(_DWORD *)a2;
  *(_DWORD *)&v31.Length = *(_DWORD *)a2;
  v16 = *(WCHAR **)(a2 + 8);
  v31.Buffer = v16;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v17 = *(_DWORD *)a3;
  v28 = *(_DWORD *)a3;
  *(_DWORD *)&v30.Length = *(_DWORD *)a3;
  v18 = *(WCHAR **)(a3 + 8);
  v30.Buffer = v18;
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
  if ( v19 <= (unsigned __int64)v16 || v19 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v15 > HIWORD(v29) )
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_37:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7951LL);
LABEL_38:
    ExRaiseAccessViolation();
  }
  if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (ULONG64)v18 + (unsigned __int16)v17 + 2;
    if ( v20 <= (unsigned __int64)v18 || v20 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v17 > HIWORD(v28) || (v17 & 1) != 0 )
    {
      if ( (v17 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7952LL);
      ExRaiseAccessViolation();
    }
  }
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v32 = *(_OWORD *)a4;
  v33 = *(_OWORD *)(a4 + 16);
  v34 = *(_OWORD *)(a4 + 32);
  v35 = *(_OWORD *)(a4 + 48);
  v36 = *(_OWORD *)(a4 + 64);
  v37 = *(_OWORD *)(a4 + 80);
  v38 = *(_OWORD *)(a4 + 96);
  v39 = *(_OWORD *)(a4 + 112);
  v40 = *(_QWORD *)(a4 + 128);
  if ( (DWORD2(v33) & 0xFFFFEFB0) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_40;
  }
  if ( (BYTE8(v33) & 8) == 0 )
    goto LABEL_17;
  if ( !(WORD1(v38) | WORD3(v38))
    && *((_QWORD *)&v39 + 1) == 8LL * (int)v38
    && (_QWORD)v39 == *((_QWORD *)&v39 + 1) + 4LL * SDWORD1(v38) )
  {
    v14 = 8 * (DWORD1(v38) + v38);
LABEL_17:
    ProbeForRead(*((volatile void **)&v38 + 1), v14, 4u);
    LODWORD(Size) = v14;
    v14 = _SetCursorIconDataEx(v13, &v31, &v30, (struct tagCURSORDATA *)&v32, Size, a5);
  }
LABEL_40:
  v21 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v21 + 48);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return (int)v14;
}
