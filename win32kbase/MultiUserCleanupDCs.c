void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  unsigned int v1; // esi
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r14
  GdiHandleEntryDirectory **v6; // rbp
  unsigned int NextEntryIndex; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rax
  int v11; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v13 = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  if ( *(_QWORD *)(v5 + 8008) )
  {
    while ( 1 )
    {
      v6 = *(GdiHandleEntryDirectory ***)(v5 + 8008);
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v6, v1, &v13);
      v1 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v9 = GdiHandleManager::DecodeIndex(v6, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(v6[2], v9, 0);
      v13 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v11 = *((_DWORD *)Entry + 2);
        if ( (v11 & 0xFFFFFFFE) != v3 )
        {
          *((_DWORD *)Entry + 2) = v3 | v11 & 1;
          ++v2;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v2;
    vCleanupDCs(v3);
  }
}
