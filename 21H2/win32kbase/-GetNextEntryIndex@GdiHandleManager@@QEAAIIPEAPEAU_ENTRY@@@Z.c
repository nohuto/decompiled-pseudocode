/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40
 * Callers:
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0061378 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0061450 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0061624 (MultiUserCleanupDCs.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0061A80 (HmgSafeNextObjtByIndex.c)
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     HmgNextGarbageCollectible @ 0x1C016C2DC (HmgNextGarbageCollectible.c)
 *     NtGdiGetStats @ 0x1C016C400 (NtGdiGetStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleManager *v3; // r9
  __int64 v5; // r8
  unsigned int v6; // r11d
  __int64 v7; // rbx
  unsigned int v8; // eax
  struct _ENTRY *v9; // r11

  v3 = gpHandleManager;
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)v3 )
  {
    v5 = *((_QWORD *)v3 + 2);
    v6 = *(_DWORD *)(v5 + 2056);
    if ( a2 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    {
      *a3 = 0LL;
    }
    else
    {
      if ( a2 >= v6 )
      {
        v7 = *(_QWORD *)(v5 + 8LL * (((a2 - v6) >> 16) + 1) + 8);
        v8 = a2 + -65536 * ((a2 - v6) >> 16) - v6;
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        v8 = a2;
      }
      v9 = 0LL;
      if ( v8 >= *(_DWORD *)(v7 + 20) )
      {
        *a3 = 0LL;
      }
      else
      {
        if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                       + 16LL * (unsigned __int8)v8
                       + 8) )
          v9 = (struct _ENTRY *)(*(_QWORD *)v7 + 24LL * v8);
        *a3 = v9;
        if ( v9 )
          return a2;
      }
    }
  }
  return 0LL;
}
