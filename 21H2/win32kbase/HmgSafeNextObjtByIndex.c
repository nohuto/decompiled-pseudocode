/*
 * XREFs of HmgSafeNextObjtByIndex @ 0x1C0061A80
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall HmgSafeNextObjtByIndex(GdiHandleManager *a1, char a2, _QWORD *a3)
{
  GdiHandleManager *v3; // r14
  unsigned int v6; // ebx
  unsigned int NextEntryIndex; // eax
  struct _ENTRY *v8; // rdi
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // r9
  struct _ENTRY *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = gpHandleManager;
  v17 = 0LL;
  v6 = (unsigned int)a1;
  while ( 1 )
  {
    do
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, v6, &v17);
      v6 = NextEntryIndex;
      if ( !NextEntryIndex )
        return 0LL;
      v8 = v17;
    }
    while ( *((_BYTE *)v17 + 14) != a2 );
    v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
    v12 = *((_QWORD *)v3 + 2);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 2056);
    if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
      break;
    v15 = v11 >= v14 ? ((v11 - v14) >> 16) + 1 : 0;
    v16 = *(_QWORD *)(v12 + 8LL * v15 + 8);
    if ( v15 )
      v13 = ((1 - v15) << 16) - v14 + v11;
    if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 20) )
      break;
    a1 = (GdiHandleManager *)(2LL * (unsigned __int8)v13);
    v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
    if ( !v10
      || (*((_BYTE *)v8 + 15) & 0x40) == 0
      || *(_WORD *)(v10 + 12) && *(struct _KTHREAD **)(v10 + 16) == KeGetCurrentThread() )
    {
      goto LABEL_8;
    }
  }
  v10 = 0LL;
LABEL_8:
  *a3 = v10;
  return v6;
}
