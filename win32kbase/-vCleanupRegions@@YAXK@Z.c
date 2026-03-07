void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int v2; // esi
  HRGN v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _ENTRY *EntryFromObject; // rax
  HRGN v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v8);
    if ( !v2 )
      break;
    v3 = v8;
    if ( (BYTE2(v8) & 0x1F) == 4 )
    {
      v5 = HmgLockEx((unsigned int)v8, 4, 0);
      if ( v5 )
      {
        v6 = SGDGetSessionState(v4);
        EntryFromObject = GdiHandleManager::GetEntryFromObject(
                            *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v6 + 24) + 8008LL),
                            (struct OBJECT *)v5);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
        v3 = v8;
      }
      bDeleteRegion(v3);
    }
  }
}
