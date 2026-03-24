/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C000ECD4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CC098 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C000F1D0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(unsigned int a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rcx
  GdiHandleManager *v7; // rbp
  unsigned int NextEntryIndex; // eax
  struct _ENTRY *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  struct _ENTRY *v18; // [rsp+58h] [rbp+20h] BYREF

  GreAcquireHmgrSemaphore();
  v18 = 0LL;
  v7 = gpHandleManager;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v6, a1, &v18);
    a1 = NextEntryIndex;
    if ( !NextEntryIndex )
    {
      a1 = 0;
      goto LABEL_9;
    }
    v9 = v18;
    if ( *((_DWORD *)v18 + 2) == -2147483630 )
    {
      v12 = GdiHandleManager::DecodeIndex(gpHandleManager, NextEntryIndex);
      v13 = *((_QWORD *)v7 + 2);
      v14 = v12;
      v15 = *(_DWORD *)(v13 + 2056);
      v6 = v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16);
      if ( v12 < (unsigned int)v6 )
      {
        if ( v12 >= v15 )
          v6 = ((v12 - v15) >> 16) + 1;
        else
          v6 = 0LL;
        v16 = *(_QWORD *)(v13 + 8 * v6 + 8);
        if ( (_DWORD)v6 )
          v14 = ((1 - (_DWORD)v6) << 16) - v15 + v12;
        if ( (unsigned int)v14 >= *(_DWORD *)(v16 + 20) )
        {
          v17 = 0LL;
        }
        else
        {
          v6 = 2LL * (unsigned __int8)v14;
          v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
        }
        if ( v17 )
        {
          v6 = 0x4000LL;
          if ( (*(_WORD *)(v17 + 14) & 0x4000) != 0 )
            break;
        }
      }
    }
  }
  v10 = (unsigned __int16)a1 | (unsigned __int64)(*((unsigned __int16 *)v9 + 6) << 16);
  *a3 = *((_BYTE *)v9 + 14);
  *a2 = v10;
LABEL_9:
  GreReleaseHmgrSemaphore();
  return a1;
}
