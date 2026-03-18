/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C00236D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C00239A0 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(unsigned int *a1, unsigned int *a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  const unsigned __int16 *v9; // rdi
  ULONG64 v10; // rdx
  unsigned int **v11; // rax
  unsigned int *v12; // rax
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v22; // [rsp+20h] [rbp-2A8h]
  unsigned int v23; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v24; // [rsp+40h] [rbp-288h]
  struct _UNICODE_STRING v25; // [rsp+50h] [rbp-278h] BYREF
  __int128 v26; // [rsp+60h] [rbp-268h] BYREF
  __int64 v27; // [rsp+70h] [rbp-258h]
  __int128 v28; // [rsp+78h] [rbp-250h]
  unsigned __int16 v29[256]; // [rsp+A0h] [rbp-228h] BYREF

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterSharedCrit();
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
      goto LABEL_36;
  }
  else
  {
    v24 = 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v8 = *a1;
  v22 = *a1;
  LODWORD(v28) = *a1;
  v9 = (const unsigned __int16 *)*((_QWORD *)a1 + 1);
  *((_QWORD *)&v28 + 1) = v9;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
  v11 = (unsigned int **)MmUserProbeAddress;
  if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v22) )
  {
    if ( (v8 & 1) != 0 )
    {
LABEL_27:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      v11 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_28;
    }
    if ( v10 > (unsigned __int64)v9 )
      goto LABEL_12;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_27;
LABEL_28:
  *(_BYTE *)*v11 = 0;
  v11 = (unsigned int **)MmUserProbeAddress;
LABEL_12:
  v12 = *v11;
  if ( a2 >= v12 )
    a2 = v12;
  v13 = *a2;
  v23 = *a2;
  *(_DWORD *)&v25.Length = *a2;
  v14 = (WCHAR *)*((_QWORD *)a2 + 1);
  v25.Buffer = v14;
  if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v23) )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_21:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v16 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_22;
    }
    if ( v15 > (unsigned __int64)v14 )
      goto LABEL_30;
  }
  if ( (v13 & 1) != 0 )
    goto LABEL_21;
LABEL_22:
  **v16 = 0;
LABEL_30:
  v18 = RtlStringCchCopyW(v29, 0x100uLL, v9);
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
LABEL_36:
  UserSessionSwitchLeaveCrit(v17);
  return v7;
}
