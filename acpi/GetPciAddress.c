/*
 * XREFs of GetPciAddress @ 0x1C0034D48
 * Callers:
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0036080 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 */

__int64 __fastcall GetPciAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 72LL, 1181770561LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)Pool2 = a1;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *(_DWORD *)(Pool2 + 48) = -1;
  *(_QWORD *)(Pool2 + 16) = a5;
  *(_QWORD *)(Pool2 + 56) = a2;
  *(_QWORD *)(Pool2 + 64) = a3;
  *(_QWORD *)(Pool2 + 8) = a4;
  return GetPciAddressWorker(a1, 0LL, 0LL);
}
