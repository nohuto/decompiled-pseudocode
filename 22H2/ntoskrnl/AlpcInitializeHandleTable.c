/*
 * XREFs of AlpcInitializeHandleTable @ 0x140717C10
 * Callers:
 *     AlpcpCreateClientPort @ 0x1407177B4 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC8A8 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B00 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140D0BF80);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
