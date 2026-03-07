char __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *ShellFrameAppThreadsAssociation; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // r15
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _THREADSASSOCIATION **v12; // rcx

  while ( 1 )
  {
    ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(a1);
    if ( !ShellFrameAppThreadsAssociation )
      break;
    v11 = *(_QWORD *)ShellFrameAppThreadsAssociation;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)ShellFrameAppThreadsAssociation + 8LL) != ShellFrameAppThreadsAssociation
      || (v12 = (struct _THREADSASSOCIATION **)*((_QWORD *)ShellFrameAppThreadsAssociation + 1),
          *v12 != ShellFrameAppThreadsAssociation) )
    {
      __fastfail(3u);
    }
    *v12 = (struct _THREADSASSOCIATION *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    Win32FreePool(ShellFrameAppThreadsAssociation);
  }
  LOBYTE(v3) = gpKernelHandleTable;
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = gpKernelHandleTable;
  if ( v4 <= v5 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v4 + 24) == 1 && *(struct tagTHREADINFO **)(v6 + 8) == a1 )
      {
        v7 = *(__int64 **)v6;
        if ( (*(_BYTE *)(v4 + 25) & 1) == 0 )
          goto LABEL_8;
        v3 = v7[5];
        if ( *(_QWORD *)(v3 + 120) || (*(_BYTE *)(v3 + 18) & 4) == 0 )
          break;
      }
LABEL_4:
      v4 += 32LL;
      v6 += 24LL;
      if ( v4 > v5 )
        return v3;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5413LL);
LABEL_8:
    v8 = v7[5];
    v9 = *(unsigned __int16 *)(v8 + 42);
    if ( (unsigned __int16)(v9 - 666) <= 6u )
    {
      v10 = *(_QWORD *)(gpsi + 8LL * ((v9 & 0xFFFF2FFF) - 666) + 272);
    }
    else if ( (_WORD)v9 == 694 )
    {
      v10 = 5LL;
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)(v8 + 120) = v10;
    SetOrClrWF(1, v7, 0x204u, 1);
    LOBYTE(v3) = SetOrClrWF(0, v7, 0x208u, 1);
    goto LABEL_4;
  }
  return v3;
}
