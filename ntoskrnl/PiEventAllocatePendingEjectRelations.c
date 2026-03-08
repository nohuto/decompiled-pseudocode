/*
 * XREFs of PiEventAllocatePendingEjectRelations @ 0x14096E830
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiEventAllocatePendingEjectRelations(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  void *v4; // rsi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  bool v11; // cl

  v4 = *(void **)(a1 + 152);
  Pool2 = ExAllocatePool2(64LL, 112LL, 538996816LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 48) = a1;
    ObfReferenceObject(v4);
    *(_QWORD *)(v10 + 56) = v4;
    *(_QWORD *)(v10 + 64) = a2;
    *(_BYTE *)(v10 + 88) = a3;
    v11 = (*(_DWORD *)(a1 + 144) & 8) != 0;
    *(_QWORD *)(v10 + 96) = a4;
    *(_BYTE *)(v10 + 89) = v11;
  }
  return v10;
}
