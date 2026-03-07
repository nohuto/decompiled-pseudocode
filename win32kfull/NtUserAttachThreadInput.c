__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

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
      v16 = 5LL;
      goto LABEL_16;
    }
    goto LABEL_8;
  }
  v15 = v11 & 0x40000;
  if ( v15 )
  {
    if ( (*(_DWORD *)(v9 + 1272) & 0x40000) != 0 )
    {
LABEL_19:
      v16 = 87LL;
      goto LABEL_16;
    }
  }
  if ( v15 )
  {
    v17 = v9;
    v18 = v8;
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 1272) & 0x40000) == 0 )
      goto LABEL_8;
    v17 = v8;
    v18 = v9;
  }
  DisassociateShellFrameAppThreads2(v18, v17);
LABEL_8:
  v12 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v12 < 0 )
  {
    v16 = RtlNtStatusToDosError(v12);
LABEL_16:
    UserSetLastError(v16);
    goto LABEL_10;
  }
  v7 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v13);
  return v7;
}
