/*
 * XREFs of MiTrimPteWorker @ 0x140349308
 * Callers:
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 *     MiTrimWorkingSetEPTCallback @ 0x1406330B0 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     MiTrimWorkingSetBuildup @ 0x1402E2A60 (MiTrimWorkingSetBuildup.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiTrimThisWsle @ 0x1403493EC (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rbp
  unsigned int v11; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v7 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  if ( !(unsigned int)MiTrimThisWsle(v7, a3, a4, a5, a6, a7) )
    return 0LL;
  MiInsertTbFlushEntry(a5 + 64, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
    MI_WSLE_LOG_ACCESS(v7, a2, v13, v14);
  v15 = *(_QWORD *)(a5 + 16) + 1LL;
  *(_QWORD *)(a5 + 16) = v15;
  if ( v15 != *(_QWORD *)(a5 + 8) && *(_DWORD *)(a5 + 76) != *(_DWORD *)(a5 + 72) )
    return 0LL;
  MiTrimWorkingSetBuildup(a1, a5);
  LOBYTE(v11) = *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8);
  return v11;
}
