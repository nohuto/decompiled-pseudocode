/*
 * XREFs of ?MultiUserGreHmgOwnAll@@YAXXZ @ 0x1C00A0B00
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C009EFD4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C006F140 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void MultiUserGreHmgOwnAll(void)
{
  unsigned int CurrentProcessId; // eax
  unsigned int NextEntryIndex; // edi
  unsigned int v2; // ebp
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v8 = 0LL;
  NextEntryIndex = 0;
  v2 = CurrentProcessId;
  v3 = 0;
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  if ( *(_QWORD *)(v5 + 8008) )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(*(GdiHandleManager **)(v5 + 8008), NextEntryIndex, &v8);
      if ( !NextEntryIndex )
        break;
      if ( (unsigned __int8)(*((_BYTE *)v8 + 14) - 1) <= 0x1Du )
      {
        *((_DWORD *)v8 + 2) = v2 & 0xFFFFFFFC | *((_DWORD *)v8 + 2) & 1;
        ++v3;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v3;
  }
}
