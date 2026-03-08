/*
 * XREFs of _PostThreadMessageEx @ 0x1C0037298
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C0037190 (NtUserPostThreadMessage.c)
 *     _PostThreadMessage @ 0x1C009575C (_PostThreadMessage.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C00385AC (IsPointerInputClientMessage.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C0039130 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0048A50 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ProcessSuspendedPostMessage @ 0x1C014322E (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(
        __int16 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  __int16 *v8; // rdi
  BOOL v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct tagQMSG *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  v8 = a1;
  if ( !a1 || (*((_DWORD *)a1 + 122) & 0x1000001) != 0x1000000 )
  {
    v10 = 1444LL;
    goto LABEL_53;
  }
  if ( a2 < 0x400 )
  {
    a1 = MessageTable;
    v9 = _bittest16(&MessageTable[a2], 9u) || a2 == 537 && (a3 & 0x8000) != 0;
    if ( v9 || a2 == 536 && (a3 & 0x8000) != 0 )
    {
      v10 = 1159LL;
LABEL_53:
      UserSetLastError(v10);
      return 0LL;
    }
  }
  v11 = *((_QWORD *)v8 + 53);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v14 = v13 & CurrentProcessWin32Process;
  }
  if ( v11 == v14 )
    goto LABEL_22;
  if ( a2 > 0xD0 )
  {
    if ( a2 != 272 )
    {
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_22;
      goto LABEL_37;
    }
    goto LABEL_41;
  }
  switch ( a2 )
  {
    case 0xD0u:
    case 0xCu:
      goto LABEL_37;
    case 0xDu:
      goto LABEL_22;
    case 0x4Eu:
LABEL_41:
      v10 = 5LL;
      goto LABEL_53;
  }
  if ( a2 != 188 )
    goto LABEL_22;
LABEL_37:
  if ( (!(unsigned __int8)Enforced(v13) || *(_QWORD *)v11 == gpepCSRSS)
    && (*(_DWORD *)(v11 + 772) != *(_DWORD *)(v14 + 772) || *(_DWORD *)(v11 + 776) != *(_DWORD *)(v14 + 776)) )
  {
    goto LABEL_41;
  }
LABEL_22:
  if ( a2 == 576 || a2 == 281 || a2 - 577 <= 3 || (unsigned int)IsPointerInputClientMessage(a2) )
  {
    v10 = 1002LL;
    goto LABEL_53;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 404), 0LL, a2);
  if ( (*((_DWORD *)v8 + 318) & 0x20) != 0
    && v8 != (__int16 *)gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v15 = (struct tagQMSG *)AllocQEntryEx(v8 + 404, 0LL, 1LL);
  if ( !v15 )
    return 0LL;
  v16 = *((_QWORD *)v8 + 54);
  v17 = *(_QWORD *)(v16 + 128);
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 16);
  else
    v18 = *(_QWORD *)(v16 + 104);
  StoreQMessage(v15, 0LL, a2, a3, a4, 0, 0LL, 0, 0LL, 0, a5, *(_DWORD *)(*(_QWORD *)(v18 + 424) + 280LL), 0LL, 0LL);
  if ( (*((_DWORD *)v8 + 122) & 1) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 8LL), 0x108u);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v8 + 56) + 4LL), 0x108u);
    if ( (*(_DWORD *)(*((_QWORD *)v8 + 56) + 16LL) & 0x108) != 0 )
      KeSetEvent(*((PRKEVENT *)v8 + 92), 2, 0);
  }
  if ( a2 == 786 )
    SetWakeBit(v8, 128LL);
  v19 = *((_QWORD *)v8 + 54);
  if ( v8 == *(__int16 **)(v19 + 72) )
    *(_QWORD *)(v19 + 80) = v15;
  return 1LL;
}
