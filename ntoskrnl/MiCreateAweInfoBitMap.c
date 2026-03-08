/*
 * XREFs of MiCreateAweInfoBitMap @ 0x140A3E8D0
 * Callers:
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetAweInfoPartition @ 0x1406482AC (MiGetAweInfoPartition.c)
 *     MiGetAwePageSize @ 0x14064836C (MiGetAwePageSize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1)
{
  _KPROCESS *Process; // rsi
  __int64 v3; // rbx
  __int16 v4; // ax
  unsigned __int64 AwePageSize; // rax
  unsigned __int64 v6; // rbx
  PVOID Pool; // rbp
  int v8; // esi
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    v3 = 0xFFFFFFFFFFLL;
  else
    v3 = *(_QWORD *)(MiGetAweInfoPartition(a1) + 17032);
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v4 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( (v4 == 332 || v4 == 452) && (unsigned __int64)(v3 + 1) > 0x100000000LL )
      v3 = 0xFFFFFFFFLL;
  }
  AwePageSize = MiGetAwePageSize(a1);
  if ( AwePageSize == 1 )
    v6 = v3 + 1;
  else
    v6 = (~(AwePageSize - 1) & (v3 + AwePageSize - 1)) / AwePageSize;
  if ( *(_QWORD *)(a1 + 24) == v6 )
    return 3221225626LL;
  Pool = MiAllocatePool(64, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0)), 0x4C646156u);
  if ( !Pool )
    return 3221225626LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0
    && (v8 = PsChargeProcessNonPagedPoolQuota(Process, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0))), v8 < 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v8;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v6;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = Pool;
  }
  return result;
}
