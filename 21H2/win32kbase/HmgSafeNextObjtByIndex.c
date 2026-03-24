/*
 * XREFs of HmgSafeNextObjtByIndex @ 0x1C000DCBC
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C000AAF0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0143930 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C000DD60 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjtByIndex(GdiHandleManager *a1, char a2, _QWORD *a3)
{
  GdiHandleManager *v3; // r14
  unsigned int v6; // ebx
  unsigned int NextEntryIndex; // eax
  struct _ENTRY *v8; // rdi
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _ENTRY *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = gpHandleManager;
  v16 = 0LL;
  v6 = (unsigned int)a1;
  while ( 1 )
  {
    do
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, v6, &v16);
      v6 = NextEntryIndex;
      if ( !NextEntryIndex )
        return 0LL;
      v8 = v16;
    }
    while ( *((_BYTE *)v16 + 14) != a2 );
    v10 = GdiHandleManager::DecodeIndex(gpHandleManager, NextEntryIndex);
    v11 = *((_QWORD *)v3 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      break;
    if ( v10 >= v13 )
      a1 = (GdiHandleManager *)(((v10 - v13) >> 16) + 1);
    else
      a1 = 0LL;
    v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)a1 + 8);
    if ( (_DWORD)a1 )
      v12 = ((1 - (_DWORD)a1) << 16) - v13 + v10;
    if ( (unsigned int)v12 >= *(_DWORD *)(v14 + 20) )
    {
      v15 = 0LL;
    }
    else
    {
      a1 = (GdiHandleManager *)(2LL * (unsigned __int8)v12);
      v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
    }
    if ( !v15
      || (*((_BYTE *)v8 + 15) & 0x40) == 0
      || *(_WORD *)(v15 + 12) && *(struct _KTHREAD **)(v15 + 16) == KeGetCurrentThread() )
    {
      goto LABEL_8;
    }
  }
  v15 = 0LL;
LABEL_8:
  *a3 = v15;
  return v6;
}
