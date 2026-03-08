/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x14074BB70
 * Callers:
 *     CmpCreateLayerLink @ 0x14074BAE4 (CmpCreateLayerLink.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 64LL, 1768705347LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x40uLL);
      v4[2] = a1;
      v4[5] = v4 + 4;
      v4[4] = v4 + 4;
      v4[7] = v4 + 6;
      v4[6] = v4 + 6;
      *(_QWORD *)(a1 + 192) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
