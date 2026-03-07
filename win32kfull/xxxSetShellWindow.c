__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, struct tagWND *a2)
{
  _QWORD *v4; // rsi
  struct tagWND **v5; // r14
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 **v13; // rcx
  __int64 v14; // rbx
  void *v15; // rax
  _QWORD *v17; // [rsp+40h] [rbp-18h] BYREF
  struct tagWND *v18; // [rsp+48h] [rbp-10h]

  v4 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 464LL);
  v5 = (struct tagWND **)(v4 + 21);
  if ( v4[21] )
  {
    v6 = 5;
LABEL_18:
    UserSetLastError(v6);
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v6 = 87;
    goto LABEL_18;
  }
  if ( !(unsigned int)Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v7) )
    _RegisterHotKey(a1, 0LL, 61744LL, 2, 0x1Bu, 0LL);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v8 && (!v4[22] || (*(_DWORD *)(v8 + 812) & 0x30) == 0x20) )
  {
    v4[22] = v8;
    if ( grpdeskRitInput )
    {
      if ( v4 == *(_QWORD **)(grpdeskRitInput + 8LL) )
        SynchronizeContext();
    }
  }
  v9 = *v4;
  v10 = *((_QWORD *)a1 + 6);
  v17 = v4 + 21;
  v18 = a1;
  *(_QWORD *)(v9 + 24) = v10;
  HMAssignmentLock(&v17, 0LL);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v11 = *((_QWORD *)a1 + 3);
    v12 = *(_QWORD *)a1;
    v13 = *(__int64 ***)(v11 + 8);
    v14 = **v13;
    v15 = (void *)ReferenceDwmApiPort(v13);
    DwmAsyncShellWindowChange(v15, v12, v14);
  }
  v18 = a2;
  v17 = v4 + 23;
  HMAssignmentLock(&v17, 0LL);
  SetOrClrWF(1LL, *v5, 1056LL, 1LL);
  xxxSetWindowPos(*v5, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}
