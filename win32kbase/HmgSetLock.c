/*
 * XREFs of HmgSetLock @ 0x1C0019CE0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSetLock(__int64 a1)
{
  __int16 v1; // edi^2
  unsigned int v2; // ebp
  GdiHandleManager *v3; // r14
  unsigned int v4; // eax
  __int64 v5; // rsi
  struct _ENTRY *Entry; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v4 = GdiHandleManager::DecodeIndex(v3, v2);
  v5 = *((_QWORD *)v3 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = (unsigned int)Entry;
  if ( Entry && *((_WORD *)Entry + 6) == v1 )
  {
    v8 = GdiHandleManager::DecodeIndex(v3, v2);
    v9 = v8;
    v10 = *(_DWORD *)(v5 + 2056);
    if ( v8 >= v10 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      goto LABEL_12;
    v11 = v8 >= v10 ? ((v8 - v10) >> 16) + 1 : 0;
    v12 = *(_QWORD *)(v5 + 8LL * v11 + 8);
    if ( v11 )
      v9 += ((1 - v11) << 16) - v10;
    if ( v9 >= *(_DWORD *)(v12 + 20) )
LABEL_12:
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                      + 16LL * (unsigned __int8)v9
                      + 8);
    *(_WORD *)(v13 + 12) = 0;
  }
  else
  {
    return 0;
  }
  return v7;
}
