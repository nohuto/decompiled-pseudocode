/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C0049740
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00499CC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0049A50 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(ULONG64 a1, _BYTE *a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ecx
  const unsigned __int16 *v10; // rsi
  ULONG64 v11; // rdx
  _BYTE **v12; // rax
  _BYTE *v13; // rax
  int v14; // ecx
  WCHAR *v15; // rdx
  ULONG64 v16; // r8
  _BYTE **v17; // rax
  NTSTATUS v18; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v22; // [rsp+20h] [rbp-2A8h]
  int v23; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v24; // [rsp+48h] [rbp-280h]
  struct _UNICODE_STRING v25; // [rsp+58h] [rbp-270h] BYREF
  __int128 v26; // [rsp+68h] [rbp-260h] BYREF
  __int64 v27; // [rsp+78h] [rbp-250h]
  __int128 v28; // [rsp+80h] [rbp-248h]
  unsigned __int16 v29[256]; // [rsp+A0h] [rbp-228h] BYREF

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v26 = *(_OWORD *)a3;
  v27 = *(_QWORD *)(a3 + 16);
  v7 = 0LL;
  if ( (_QWORD)v26 )
  {
    LOBYTE(v6) = 3;
    v24 = (struct tagCURSOR *)HMValidateHandle(v26, v6);
    if ( !v24 )
      goto LABEL_35;
  }
  else
  {
    v24 = 0LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v9 = *(_DWORD *)a1;
  v22 = *(_DWORD *)a1;
  LODWORD(v28) = *(_DWORD *)a1;
  v10 = *(const unsigned __int16 **)(a1 + 8);
  *((_QWORD *)&v28 + 1) = v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (ULONG64)v10 + (unsigned __int16)v9 + 2;
  v12 = (_BYTE **)MmUserProbeAddress;
  if ( v11 < MmUserProbeAddress && (unsigned __int16)v9 <= HIWORD(v22) )
  {
    if ( (v9 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7637LL);
      v12 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_17;
    }
    if ( v11 > (unsigned __int64)v10 )
      goto LABEL_18;
  }
  if ( (v9 & 1) != 0 )
    goto LABEL_16;
LABEL_17:
  **v12 = 0;
  v12 = (_BYTE **)MmUserProbeAddress;
LABEL_18:
  v13 = *v12;
  if ( a2 >= v13 )
    a2 = v13;
  v14 = *(_DWORD *)a2;
  v23 = *(_DWORD *)a2;
  *(_DWORD *)&v25.Length = *(_DWORD *)a2;
  v15 = (WCHAR *)*((_QWORD *)a2 + 1);
  v25.Buffer = v15;
  if ( ((unsigned __int64)v15 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v15 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v23) )
  {
    if ( (v14 & 1) != 0 )
    {
LABEL_28:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7640LL);
      v17 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_29;
    }
    if ( v16 > (unsigned __int64)v15 )
      goto LABEL_30;
  }
  if ( (v14 & 1) != 0 )
    goto LABEL_28;
LABEL_29:
  **v17 = 0;
LABEL_30:
  v18 = RtlStringCchCopyW(v29, 0x100uLL, v10);
  if ( v18 < 0 )
  {
    UserSetLastStatus(v18);
  }
  else
  {
    Atom = UserFindAtom(v29);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v25, v24, (struct tagCURSORFIND *)&v26);
      if ( ExistingCursorIcon )
        v7 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
