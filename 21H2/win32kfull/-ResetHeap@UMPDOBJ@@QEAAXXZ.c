/*
 * XREFs of ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C015E2F0
 * Callers:
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C02A7C80 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::ResetHeap(UMPDOBJ *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 49);
  if ( v1 )
    *(_DWORD *)(v1 + 48) = 0;
}
