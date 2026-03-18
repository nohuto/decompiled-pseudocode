/*
 * XREFs of ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00260C0
 * Callers:
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0025F50 (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  ULONG v4; // r8d
  ULONG ClearBits; // ebp
  unsigned int v6; // eax
  unsigned int v7; // r14d
  void *v9; // r15

  v1 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  v3 = 0LL;
  v4 = 0;
  if ( *((_DWORD *)a1 + 8) < 0xFCu )
    v4 = *((_DWORD *)a1 + 8);
  ClearBits = RtlFindClearBits((PRTL_BITMAP)(a1[3] ^ a1[2]), 1u, v4);
  if ( ClearBits != -1 )
  {
    v6 = *((_DWORD *)a1 + 9);
    v7 = ClearBits / 0x24;
    if ( v6 < 7 && v7 >= v6 )
    {
      v9 = (void *)((v7 << 12) + (a1[2] ^ a1[1]));
      if ( (int)MmCommitSessionMappedView(v9, 4096LL) < 0 )
        goto LABEL_8;
      memset(v9, 0, 0x1000uLL);
      ++*((_DWORD *)a1 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(a1[3] ^ a1[2]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(a1[3] ^ a1[2]), ClearBits);
    if ( ++*((_DWORD *)a1 + 8) >= 0xFCu )
      *((_DWORD *)a1 + 8) = 0;
    v3 = ((ClearBits / 0x24) << 12) + (a1[2] ^ a1[1]) + 112 * (ClearBits % 0x24);
  }
LABEL_8:
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
