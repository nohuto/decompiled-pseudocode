/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C016C2DC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  GdiHandleManager *v7; // rbp
  unsigned int NextEntryIndex; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  struct _ENTRY *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  struct _ENTRY *v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, (__int64)a2, (__int64)a3);
  v18 = 0LL;
  v7 = gpHandleManager;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v6, v5, &v18);
    v5 = NextEntryIndex;
    if ( !NextEntryIndex )
      break;
    v11 = v18;
    if ( *((_DWORD *)v18 + 2) == -2147483630 )
    {
      v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      v13 = *((_QWORD *)v7 + 2);
      v14 = v12;
      v10 = *(_DWORD *)(v13 + 2056);
      v6 = v10 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16);
      if ( v12 < (unsigned int)v6 )
      {
        v6 = v12 >= v10 ? ((v12 - v10) >> 16) + 1 : 0LL;
        v15 = *(_QWORD *)(v13 + 8 * v6 + 8);
        if ( (_DWORD)v6 )
          v14 = ((1 - (_DWORD)v6) << 16) - v10 + v12;
        if ( (unsigned int)v14 < *(_DWORD *)(v15 + 20) )
        {
          v6 = 2LL * (unsigned __int8)v14;
          v16 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
          if ( v16 )
          {
            if ( _bittest16((const signed __int16 *)(v16 + 14), 0xEu) )
            {
              LODWORD(v6) = (unsigned __int16)v5;
              v9 = (unsigned __int16)v5 | (unsigned __int64)(*((unsigned __int16 *)v11 + 6) << 16);
              *a3 = *((_BYTE *)v11 + 14);
              *a2 = v9;
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_15:
  GreReleaseHmgrSemaphore(v6, v9, v10);
  return v5;
}
