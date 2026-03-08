/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C00C5470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0012568 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C00C5990 (-ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(int *a1, ULONG64 a2, ULONG64 a3)
{
  ULONG64 v4; // rdi
  int *v5; // rbx
  __int64 v6; // r14
  int **v7; // rcx
  __int64 *v8; // rax
  int v9; // edx
  _WORD *v10; // rcx
  ULONG64 v11; // r8
  int v12; // edx
  WCHAR *v13; // r8
  __int64 v14; // rcx
  ULONG64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  _WORD *v18; // r8
  NTSTATUS v19; // r11d
  __int64 v20; // r10
  __int16 v21; // r9
  __int16 Atom; // ax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v28; // [rsp+20h] [rbp-2F8h]
  int v29; // [rsp+20h] [rbp-2F8h]
  __int16 v30; // [rsp+24h] [rbp-2F4h]
  __int128 v31; // [rsp+30h] [rbp-2E8h]
  __int64 v32; // [rsp+40h] [rbp-2D8h]
  __int64 v33; // [rsp+58h] [rbp-2C0h]
  struct _UNICODE_STRING v34; // [rsp+78h] [rbp-2A0h] BYREF
  _WORD *v35; // [rsp+90h] [rbp-288h]
  __int64 v36; // [rsp+98h] [rbp-280h]
  __int64 v37; // [rsp+A0h] [rbp-278h]
  __int128 v38; // [rsp+A8h] [rbp-270h]
  _BYTE v39[512]; // [rsp+D0h] [rbp-248h] BYREF

  v4 = a2;
  v5 = a1;
  v38 = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v7 = (int **)MmUserProbeAddress;
  v8 = (__int64 *)MmUserProbeAddress;
  if ( a3 < MmUserProbeAddress )
    v8 = (__int64 *)a3;
  v31 = *(_OWORD *)v8;
  v32 = v8[2];
  if ( *v8 )
  {
    v33 = HMValidateHandle(*v8, 3u);
    if ( !v33 )
      goto LABEL_66;
    v7 = (int **)MmUserProbeAddress;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v5 >= *v7 )
    v5 = *v7;
  v9 = *v5;
  v28 = *v5;
  LODWORD(v38) = *v5;
  v10 = (_WORD *)*((_QWORD *)v5 + 1);
  *((_QWORD *)&v38 + 1) = v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (ULONG64)v10 + (unsigned __int16)v9 + 2;
  if ( v11 <= (unsigned __int64)v10 || v11 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v9 > HIWORD(v28) )
  {
    if ( (v9 & 1) == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  if ( (v9 & 1) != 0 )
  {
LABEL_31:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7931LL);
LABEL_32:
    ExRaiseAccessViolation();
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v12 = *(_DWORD *)v4;
  v29 = *(_DWORD *)v4;
  *(_DWORD *)&v34.Length = *(_DWORD *)v4;
  v13 = *(WCHAR **)(v4 + 8);
  v34.Buffer = v13;
  if ( ((unsigned __int64)v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
    if ( v15 <= (unsigned __int64)v13 || v15 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v12 > HIWORD(v29) || (v12 & 1) != 0 )
    {
      if ( (v12 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7934LL);
      ExRaiseAccessViolation();
    }
  }
  v16 = 2147483646LL;
  v37 = 2147483646LL;
  v35 = v10;
  v17 = 256LL;
  v36 = 256LL;
  v18 = v39;
  v19 = 0;
  v20 = 0LL;
  while ( v17 )
  {
    if ( !v16 )
      goto LABEL_38;
    v21 = *v10;
    if ( !*v10 )
      goto LABEL_38;
    v35 = ++v10;
    *v18++ = v21;
    v36 = --v17;
    v37 = --v16;
    ++v20;
  }
  --v18;
  v19 = -2147483643;
LABEL_38:
  *v18 = 0;
  if ( v19 < 0 )
  {
    UserSetLastStatus(v19, 1);
    goto LABEL_66;
  }
  Atom = UserFindAtom(v39);
  v30 = Atom;
  if ( Atom )
  {
    v23 = 0LL;
    if ( !DWORD2(v31) )
      goto LABEL_64;
    v24 = SGDGetUserSessionState(v14);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 8)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v25 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v25 = *ThreadWin32Thread;
    if ( (*(_DWORD *)(v25 + 1272) & 0x8000000) != 0 )
      v25 = *(_QWORD *)(v25 + 1520);
    v23 = *(_QWORD *)(*(_QWORD *)(v25 + 424) + 728LL);
    if ( v23 )
    {
      while ( !v33 || v23 != v33 )
      {
        if ( v30 == *(_WORD *)(v23 + 72)
          && (*(_DWORD *)(v23 + 80) & 0x1004) == 4
          && *(_WORD *)(v23 + 74) == WORD4(v31)
          && (unsigned int)ResStrCmp(&v34, (struct _UNICODE_STRING *)(v23 + 56))
          && ((*(_DWORD *)(v23 + 80) & 8) != 0
           || (!HIDWORD(v31) || *(_DWORD *)(v23 + 140) == HIDWORD(v31))
           && (!(_DWORD)v32 || *(_DWORD *)(v23 + 144) >> 1 == (_DWORD)v32)
           && (!HIDWORD(v32) || *(_DWORD *)(v23 + 136) == HIDWORD(v32))) )
        {
          goto LABEL_63;
        }
        v23 = *(_QWORD *)(v23 + 32);
        if ( !v23 )
          goto LABEL_51;
      }
      v23 = v33;
    }
    else
    {
LABEL_51:
      v23 = gpcurFirst;
      if ( !gpcurFirst )
      {
LABEL_58:
        v6 = 0LL;
        v23 = 0LL;
        goto LABEL_64;
      }
      while ( !v33 || v23 != v33 )
      {
        if ( v30 == *(_WORD *)(v23 + 72)
          && (*(_DWORD *)(v23 + 80) & 0x1004) == 4
          && *(_WORD *)(v23 + 74) == WORD4(v31)
          && (unsigned int)ResStrCmp(&v34, (struct _UNICODE_STRING *)(v23 + 56))
          && ((*(_DWORD *)(v23 + 80) & 8) != 0
           || (!HIDWORD(v31) || *(_DWORD *)(v23 + 140) == HIDWORD(v31))
           && (!(_DWORD)v32 || *(_DWORD *)(v23 + 144) >> 1 == (_DWORD)v32)
           && (!HIDWORD(v32) || *(_DWORD *)(v23 + 136) == HIDWORD(v32))) )
        {
          goto LABEL_63;
        }
        v23 = *(_QWORD *)(v23 + 32);
        if ( !v23 )
          goto LABEL_58;
      }
      v23 = v33;
    }
LABEL_63:
    v6 = 0LL;
LABEL_64:
    if ( v23 )
      v6 = *(_QWORD *)v23;
  }
LABEL_66:
  UserSessionSwitchLeaveCrit(v14);
  return v6;
}
