/*
 * XREFs of FsFilterAllocateCompletionStack @ 0x140456BDC
 * Callers:
 *     FsFilterCtrlInit @ 0x140343B50 (FsFilterCtrlInit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsFilterAllocateCompletionStack(__int64 a1, char a2)
{
  _QWORD *v4; // rdi
  __int16 *v5; // rsi
  __int64 Pool2; // rbp
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 32LL * *(unsigned __int16 *)(a1 + 72), 1735217990LL);
  if ( Pool2 )
    goto LABEL_13;
  if ( a2 )
    return 3221225626LL;
  switch ( *(unsigned __int8 *)(a1 + 4) )
  {
    case 0xFAu:
      goto LABEL_11;
    case 0xFBu:
      goto LABEL_10;
    case 0xFCu:
LABEL_11:
      v4 = (_QWORD *)ReleaseOpsReservePool;
      v5 = &ReleaseOpsEvent;
      break;
    case 0xFDu:
LABEL_10:
      v4 = AcquireOpsReservePool;
      v5 = &AcquireOpsEvent;
      break;
    case 0xFEu:
      goto LABEL_11;
    case 0xFFu:
      goto LABEL_10;
  }
  KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
  Pool2 = (__int64)(v4 + 1);
  *v4 = KeGetCurrentThread();
  memset(v4 + 1, 0, 0x3C8uLL);
  *(_DWORD *)(a1 + 64) |= 2u;
LABEL_13:
  *(_DWORD *)(a1 + 64) |= 1u;
  result = 0LL;
  *(_QWORD *)(a1 + 80) = Pool2;
  return result;
}
