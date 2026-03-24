/*
 * XREFs of CcDeductDirtyPages @ 0x14029346C
 * Callers:
 *     CcDeleteMbcb @ 0x140272FBC (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1402905C0 (CcAcquireByteRangeForWrite.c)
 *     CcDeleteBcbs @ 0x14032B8C0 (CcDeleteBcbs.c)
 * Callees:
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a2;
  if ( a1 )
    result = CcGetPartition(a1);
  else
    result = *((_QWORD *)PspSystemPartition + 1);
  *(_QWORD *)(result + 640) -= v2;
  if ( a1 )
  {
    if ( (_DWORD)v2 == -1 )
      KeBugCheckEx(0x34u, 0x1637uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= v2;
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), -v2);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD *)(a1 + 240);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 24), -v2);
    }
  }
  return result;
}
