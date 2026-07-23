/*
 * XREFs of ViGetMapRegisterFile @ 0x1409CF914
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1409CC6F0 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     ViSwap @ 0x1409D0A00 (ViSwap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetMapRegisterFile(__int64 a1)
{
  BOOL v1; // eax
  unsigned __int64 v2; // rcx

  v1 = 0;
  v2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 )
    v1 = *(_DWORD *)v2 == -1393569779;
  return v2 & -(__int64)v1;
}
