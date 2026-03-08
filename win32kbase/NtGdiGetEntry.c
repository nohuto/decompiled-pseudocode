/*
 * XREFs of NtGdiGetEntry @ 0x1C0185860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall NtGdiGetEntry(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // edi
  GdiHandleEntryDirectory **v4; // rbx
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rdx

  v3 = a1;
  v4 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, v3);
  Entry = GdiHandleEntryDirectory::GetEntry(v4[2], v5, 0);
  if ( !Entry )
    return 3221225473LL;
  if ( a2 + 24 > MmUserProbeAddress || a2 + 24 <= a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)a2 = *(_OWORD *)Entry;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Entry + 2);
  return 0LL;
}
