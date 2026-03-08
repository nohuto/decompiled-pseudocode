/*
 * XREFs of IoAddPagesForPartialKernelDump @ 0x140559F94
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     IoSaveBugCheckProgress @ 0x14054E5E0 (IoSaveBugCheckProgress.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405502F0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055A46C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055A768 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopCompactRemovePagesArray @ 0x14055AA70 (IopCompactRemovePagesArray.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14060CF78 (ExpHeapDumpEnumLargeAllocs.c)
 */

__int64 __fastcall IoAddPagesForPartialKernelDump(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v11; // ebx
  __int64 *v12; // rdi
  unsigned int v13; // esi
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // ebx
  unsigned __int64 v17; // rcx

  AvailablePagesForPartialDump = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  IopDumpCallRemovePagesCallbacks(a1);
  IoSaveBugCheckProgress(34);
  if ( MmIsAddressValidEx((__int64)IopRemoveLargeAllocsFromPartialDump) )
  {
    v11 = 0;
    if ( dword_140C74660 )
    {
LABEL_3:
      v12 = &qword_140C74680[1048 * v11];
      v13 = 0;
      while ( (int)ExpHeapDumpEnumLargeAllocs(*v12) >= 0 )
      {
        ++v13;
        ++v12;
        if ( v13 > 1 )
        {
          if ( ++v11 < dword_140C74660 )
            goto LABEL_3;
          break;
        }
      }
    }
  }
  IoSaveBugCheckProgress(40);
  IopCompactRemovePagesArray();
  v14 = IopAddMiniDumpPagesToPartialKernelDump(a1, a2, a3, a4, a5, a6, a7);
  v16 = v14;
  if ( v14 >= 0 )
  {
    v14 = IopAddLiveDumpPagesToPartialKernelDump(a1, a2, a3, v15, a5);
    v16 = v14;
  }
  if ( v14 == -1073741789 )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 0x10u;
    v16 = 0;
  }
  v17 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  if ( v17 > AvailablePagesForPartialDump )
    *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 40LL) = v17 - AvailablePagesForPartialDump;
  IoSaveBugCheckProgress(42);
  return v16;
}
