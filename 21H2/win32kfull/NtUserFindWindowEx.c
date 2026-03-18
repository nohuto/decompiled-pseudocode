/*
 * XREFs of NtUserFindWindowEx @ 0x1C00706A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C0071408 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     LeaveEditionCrit @ 0x1C011DF80 (LeaveEditionCrit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBGK@Z @ 0x1C015B434 (-_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBGK@Z.c)
 */

__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, ULONG64 a4)
{
  AtomicExecutionCheck *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *Data; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND *v15; // rsi
  __int64 v16; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  struct tagWND *v19; // r12
  int v20; // edx
  char *v21; // rdi
  int v22; // r14d
  const unsigned __int16 *v23; // r15
  ULONG64 v24; // rcx
  ULONG64 v25; // rcx
  __int64 v26; // rdi
  struct tagWND *Window; // rax
  _DWORD *v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-2A8h]
  char v31[4]; // [rsp+30h] [rbp-298h] BYREF
  unsigned __int16 Atom; // [rsp+34h] [rbp-294h]
  int v33; // [rsp+38h] [rbp-290h]
  int v34; // [rsp+3Ch] [rbp-28Ch]
  __int64 v35; // [rsp+50h] [rbp-278h]
  __int128 v36; // [rsp+58h] [rbp-270h]
  __int128 v37; // [rsp+68h] [rbp-260h]
  char v38[512]; // [rsp+80h] [rbp-248h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  if ( (unsigned __int8)ShouldRunShared(1LL) )
    EnterSharedCrit();
  else
    EnterCrit(0LL, 1LL);
  v31[0] = 0;
  AtomicExecutionCheck::EnforceConsistency(v8);
  Data = (_DWORD *)GetData(v10, v9, v11);
  if ( Data )
  {
    ++*Data;
    v31[0] = 1;
  }
  if ( a1 == -3 )
  {
    v15 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v18 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v18 )
        v15 = *(struct tagWND **)(v18 + 104);
    }
  }
  else if ( a1 )
  {
    v15 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v15 )
    {
LABEL_49:
      v26 = 0LL;
      goto LABEL_51;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( a2 )
  {
    v19 = (struct tagWND *)ValidateHwnd(a2);
    if ( !v19 )
      goto LABEL_49;
  }
  else
  {
    v19 = 0LL;
  }
  Atom = 0;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v20 = *(_DWORD *)a3;
  v33 = v20;
  LODWORD(v36) = v20;
  v21 = *(char **)(a3 + 8);
  *((_QWORD *)&v36 + 1) = v21;
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v22 = *(_DWORD *)a4;
  v34 = v22;
  LODWORD(v37) = v22;
  v23 = *(const unsigned __int16 **)(a4 + 8);
  *((_QWORD *)&v37 + 1) = v23;
  if ( ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_32;
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = (ULONG64)&v21[(unsigned __int16)v20 + 2];
  if ( v24 >= MmUserProbeAddress || (unsigned __int16)v20 > HIWORD(v33) )
    goto LABEL_29;
  if ( (v20 & 1) != 0 )
    goto LABEL_30;
  if ( v24 <= (unsigned __int64)v21 )
  {
LABEL_29:
    if ( (v20 & 1) == 0 )
    {
LABEL_31:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_32;
    }
LABEL_30:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
    goto LABEL_31;
  }
LABEL_32:
  if ( ((unsigned __int8)v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (ULONG64)v23 + (unsigned __int16)v22 + 2;
  if ( v25 >= MmUserProbeAddress || (unsigned __int16)v22 > HIWORD(v34) )
    goto LABEL_38;
  if ( (v22 & 1) != 0 )
    goto LABEL_39;
  if ( v25 <= (unsigned __int64)v23 )
  {
LABEL_38:
    if ( (v22 & 1) == 0 )
    {
LABEL_40:
      *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_41;
    }
LABEL_39:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
    goto LABEL_40;
  }
LABEL_41:
  if ( v21 && ((unsigned __int64)v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW(v38, 256LL, v21) >= 0 )
      Atom = UserFindAtom(v38);
    if ( !Atom )
    {
      v26 = 0LL;
      v35 = 0LL;
      goto LABEL_51;
    }
  }
  else
  {
    Atom = (unsigned __int16)v21;
  }
  Window = _FindWindowEx(v15, v19, Atom, v23, v30);
  if ( !Window )
    goto LABEL_49;
  v26 = *(_QWORD *)Window;
LABEL_51:
  if ( v31[0] )
  {
    v28 = (_DWORD *)GetData(v14, v13, v16);
    --*v28;
  }
  LeaveEditionCrit(v31);
  return v26;
}
