// write access to const memory has been detected, the output may be wrong!
void __fastcall ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 v4; // rdx
  __int128 *v5; // rcx
  unsigned int v6; // r9d
  int v7; // edx
  char v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[8]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h]

  if ( IsRectEmptyInl(a2) )
  {
    v10 = *(_QWORD *)(v4 + 16);
    if ( v10 )
    {
      v11 = HMValidateHandleNoSecure(v10, 1);
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_BYTE *)(*(_QWORD *)(v11 + 40) + 24LL);
        v18 = 0LL;
        v19 = 0LL;
        ThreadLockAlways(v11, &v18);
        ++gdwDeferWinEvent;
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
        xxxSetWindowPos(a1, v12, 0LL, 0LL, 0, 0, ((~v13 & 8) << 18) | 0x62413);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
        zzzEndDeferWinEventNotify();
        ThreadUnlock1(v15, v14, v16);
      }
    }
    else
    {
      xxxSetForegroundWindowWithOptions((__int64)a1, 0x1Fu, 0, 0);
    }
    if ( (a2[1].bottom & 0x20) == 0 )
      ShellWindowPos::NotifyPosAndStateApplied(a1, 3, a2, a2[2].left);
  }
  else
  {
    v6 = *((_DWORD *)v5 + 8);
    v7 = (*(_DWORD *)(v4 + 28) >> 4) & 1;
    v8 = v7 | 2;
    v9 = (*((_BYTE *)v5 + 28) & 1) == 0;
    v18 = *v5;
    if ( v9 )
      v8 = v7;
    WindowArrangement::xxxSetSnapArrangementPos((__int64)a1, (__int64)&v18, v8, v6);
  }
}
