/*
 * XREFs of MiDecrementCloneBlockReference @ 0x14066176C
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 * Callees:
 *     MiDecrementCloneBlock @ 0x14029DC04 (MiDecrementCloneBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x140661860 (MiDeleteCloneDescriptor.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v6; // esi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = MiDecrementCloneBlock(
         *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL),
         a3 + 1664,
         BugCheckParameter3,
         *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 344LL) > *(_QWORD *)(BugCheckParameter2 + 96),
         &v8);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v6;
}
