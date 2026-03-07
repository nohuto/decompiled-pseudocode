void __fastcall CleanEventMessage(void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagNOTIFY ***v5; // rbx
  tagDomLock *v6; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+28h] [rbp-40h]
  char v8; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      Win32FreePool(a1[4]);
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20), (unsigned int)(*((_DWORD *)a1 + 24) - 9), a3, a4);
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v6);
      v5 = (struct tagNOTIFY ***)a1[5];
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify(v5);
      if ( v8 && v6 )
      {
        if ( v7 )
          tagDomLock::UnLockExclusive(v6);
        else
          tagDomLock::UnLockShared(v6);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(
        (ShellWindowPos *)a1,
        (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 20));
      break;
  }
}
