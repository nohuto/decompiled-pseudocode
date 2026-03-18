/*
 * XREFs of _PostThreadMessageEx @ 0x1C00AB0F8
 * Callers:
 *     _PostThreadMessage @ 0x1C00AB08C (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00AC9C8 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ProcessSuspendedPostMessage @ 0x1C011907C (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rbp
  struct tagQMSG *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx

  v5 = a2;
  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 488) & 0x1000001) != 0x1000000 )
  {
    v16 = 1444LL;
    goto LABEL_44;
  }
  if ( (unsigned int)a2 < 0x400 )
  {
    a1 = (unsigned __int16)MessageTable[(unsigned int)a2];
    if ( (a1 & 0x200) != 0 || ((_DWORD)a2 == 537 || (_DWORD)a2 == 536) && (a3 & 0x8000) != 0 )
    {
      v16 = 1159LL;
      goto LABEL_44;
    }
  }
  v9 = *(_QWORD *)(v8 + 424);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v9 != CurrentProcessWin32Process )
  {
    if ( v5 > 0xD0 )
    {
      if ( v5 == 272 )
        goto LABEL_31;
      if ( v5 != 353 && v5 != 424 && v5 != 563 && v5 != 648 )
        goto LABEL_8;
    }
    else if ( v5 != 208 )
    {
      v10 = v5 - 12;
      if ( v5 != 12 )
      {
        if ( v5 == 13 )
          goto LABEL_8;
        if ( v5 == 78 )
          goto LABEL_31;
        v10 = v5 - 188;
        if ( v5 != 188 )
          goto LABEL_8;
      }
    }
    if ( (unsigned __int8)Enforced(v10) && *(_QWORD *)v9 != gpepCSRSS
      || *(_DWORD *)(v9 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
      && *(_DWORD *)(v9 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
    {
      goto LABEL_8;
    }
LABEL_31:
    v16 = 5LL;
LABEL_44:
    UserSetLastError(v16, a2);
    return 0LL;
  }
LABEL_8:
  if ( v5 == 576 || v5 == 281 || (unsigned int)IsPointerInputMessage(v5) )
  {
    v16 = 1002LL;
    goto LABEL_44;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 808), 0LL, v5);
  if ( (*(_DWORD *)(v8 + 1256) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, v5, a3) )
  {
    return 0LL;
  }
  v12 = AllocQEntryEx((struct tagMLIST *)(v8 + 808), 0LL, 0);
  if ( !v12 )
    return 0LL;
  v13 = PtiKbdFromQ(*(_QWORD *)(v8 + 432));
  StoreQMessage(v12, 0LL, v5, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v13 + 424) + 280LL), 0LL, 0LL);
  SetWakeBit(v8, 264LL);
  if ( v5 == 786 )
    SetWakeBit(v8, 128LL);
  v14 = *(_QWORD *)(v8 + 432);
  if ( v8 == *(_QWORD *)(v14 + 64) )
    *(_QWORD *)(v14 + 72) = v12;
  return 1LL;
}
