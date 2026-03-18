/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0061450
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(GdiHandleManager *a1)
{
  char v1; // bp
  unsigned int NextEntryIndex; // esi
  struct _ENTRY *v3; // rdi
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rax
  char v11; // al
  struct _ENTRY *v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)a1;
  v12 = 0LL;
  NextEntryIndex = 0;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, NextEntryIndex, &v12);
    if ( !NextEntryIndex )
      break;
    v3 = v12;
    if ( v1 )
    {
      if ( v1 == *((_BYTE *)v12 + 14) )
      {
LABEL_5:
        v4 = gpHandleManager;
        v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
        v6 = *((_QWORD *)v4 + 2);
        v7 = v5;
        v8 = *(_DWORD *)(v6 + 2056);
        a1 = (GdiHandleManager *)(v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16));
        if ( v5 >= (unsigned int)a1 )
          goto LABEL_18;
        if ( v5 >= v8 )
          a1 = (GdiHandleManager *)(((v5 - v8) >> 16) + 1);
        else
          a1 = 0LL;
        v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)a1 + 8);
        if ( (_DWORD)a1 )
          v7 = ((1 - (_DWORD)a1) << 16) - v8 + v5;
        if ( (unsigned int)v7 >= *(_DWORD *)(v9 + 20) )
        {
LABEL_18:
          v10 = 0LL;
        }
        else
        {
          a1 = (GdiHandleManager *)(2LL * (unsigned __int8)v7);
          v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
        }
        *(_DWORD *)(v10 + 8) = 0;
        *(_WORD *)(v10 + 12) = 0;
        *(_QWORD *)(v10 + 16) = 0LL;
        *((_DWORD *)v3 + 2) &= ~1u;
        *((_BYTE *)v3 + 15) &= ~1u;
        v11 = *((_BYTE *)v3 + 15);
        if ( (v11 & 0x20) != 0 )
          *((_QWORD *)v3 + 2) = 0LL;
        *((_BYTE *)v3 + 15) = v11 & 0xDF;
      }
    }
    else if ( (unsigned __int8)(*((_BYTE *)v12 + 14) - 1) <= 0x1Du )
    {
      goto LABEL_5;
    }
  }
}
