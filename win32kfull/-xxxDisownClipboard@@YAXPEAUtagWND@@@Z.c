void __fastcall xxxDisownClipboard(struct tagWND *a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rbx
  __int64 v4; // rax
  int v5; // r9d
  int v6; // edx
  _OWORD *v7; // r8
  int v8; // esi
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v2 = CheckClipboardAccess((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    PushW32ThreadLock((__int64)v2, &v12, UserDereferenceObject);
    ObfReferenceObject(v3);
    xxxSendClipboardMessage(v3, 0x306u);
    v4 = *((_QWORD *)v3 + 16);
    v5 = 0;
    v6 = *((_DWORD *)v3 + 34);
    v7 = (_OWORD *)v4;
    v8 = 0;
    while ( v6 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      --v6;
      if ( v9 && (v9 != 1 || v5) )
      {
        ++v8;
        *v7 = *(_OWORD *)v4;
        v7[1] = *(_OWORD *)(v4 + 16);
        v7 += 2;
        if ( *(_QWORD *)(v4 + 8) != 1LL && *(_DWORD *)v4 <= 0xDu )
        {
          v10 = 8322;
          if ( _bittest(&v10, *(_DWORD *)v4) )
            v5 = 1;
        }
      }
      v4 += 32LL;
    }
    if ( a1 == *((struct tagWND **)v3 + 14) )
      HMAssignmentUnlock((char *)v3 + 112);
    if ( v8 != *((_DWORD *)v3 + 34) )
    {
      *((_DWORD *)v3 + 16) |= 0x40u;
      ++*((_DWORD *)v3 + 36);
    }
    v11 = *((_DWORD *)v3 + 16);
    *((_DWORD *)v3 + 34) = v8;
    if ( (v11 & 0x40) != 0 )
    {
      xxxDrawClipboard(v3);
      MungeClipData(v3);
    }
    if ( a1 == *((struct tagWND **)v3 + 14) )
      HMAssignmentUnlock((char *)v3 + 112);
    PopAndFreeW32ThreadLock((__int64)&v12);
  }
}
