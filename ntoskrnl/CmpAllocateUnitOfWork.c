/*
 * XREFs of CmpAllocateUnitOfWork @ 0x140784388
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 CmpAllocateUnitOfWork()
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, 120LL, 2002079043LL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 56) = 0LL;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 15;
  }
  return result;
}
