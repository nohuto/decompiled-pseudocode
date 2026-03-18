/*
 * XREFs of NtUserAttachThreadInput @ 0x1C009B9B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C01D98B4 (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  EnterCrit(0LL, 0LL);
  v6 = PtiFromThreadId(a1);
  v8 = 0LL;
  v9 = v6;
  if ( !v6 )
    goto LABEL_19;
  v10 = PtiFromThreadId(a2);
  v11 = v10;
  if ( !v10 || !*(_QWORD *)(v9 + 456) || !*(_QWORD *)(v10 + 456) )
    goto LABEL_19;
  v12 = *(_DWORD *)(v9 + 1256) & 0x40000;
  if ( !a3 )
  {
    if ( !v12 )
    {
      if ( (*(_DWORD *)(v11 + 1256) & 0x40000) == 0 )
        goto LABEL_8;
      v17 = v9;
      v18 = v11;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(v11 + 1256) & 0x40000) == 0 )
    {
      v17 = v11;
      v18 = v9;
LABEL_17:
      DisassociateShellFrameAppThreads2(v18, v17);
      goto LABEL_8;
    }
LABEL_19:
    v16 = 87LL;
    goto LABEL_20;
  }
  if ( v12 || (*(_DWORD *)(v11 + 1256) & 0x40000) != 0 )
  {
    v16 = 5LL;
LABEL_20:
    UserSetLastError(v16, v7);
    goto LABEL_10;
  }
LABEL_8:
  v13 = zzzAttachThreadInput(v9, v11, a3 != 0);
  if ( v13 < 0 )
  {
    v16 = RtlNtStatusToDosError(v13);
    goto LABEL_20;
  }
  v8 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
