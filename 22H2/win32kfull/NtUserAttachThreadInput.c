/*
 * XREFs of NtUserAttachThreadInput @ 0x1C0011FB0
 * Callers:
 *     <none>
 * Callees:
 *     zzzAttachThreadInput @ 0x1C005BB64 (zzzAttachThreadInput.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01B311C (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx

  EnterCrit(0LL, 0LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_19;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 456) || !*(_QWORD *)(v9 + 456) )
    goto LABEL_19;
  v11 = *(_DWORD *)(v8 + 1272);
  if ( a3 )
  {
    if ( (v11 & 0x40000) != 0 || _bittest((const signed __int32 *)(v9 + 1272), 0x12u) )
    {
      v19 = 5LL;
      goto LABEL_16;
    }
    goto LABEL_8;
  }
  v18 = v11 & 0x40000;
  if ( v18 )
  {
    if ( (*(_DWORD *)(v9 + 1272) & 0x40000) != 0 )
    {
LABEL_19:
      v19 = 87LL;
      goto LABEL_16;
    }
  }
  if ( v18 )
  {
    v20 = v9;
    v21 = v8;
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 1272) & 0x40000) == 0 )
      goto LABEL_8;
    v20 = v8;
    v21 = v9;
  }
  DisassociateShellFrameAppThreads2(v21, v20);
LABEL_8:
  v12 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v12 < 0 )
  {
    v19 = RtlNtStatusToDosError(v12);
LABEL_16:
    UserSetLastError(v19);
    goto LABEL_10;
  }
  v7 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v7;
}
