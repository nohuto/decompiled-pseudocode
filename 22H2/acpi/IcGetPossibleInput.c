/*
 * XREFs of IcGetPossibleInput @ 0x1C0091E28
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0093FBC (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0096AB8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096EE8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B730C (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetPossibleInput(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rcx
  int v7; // eax
  int v8; // eax
  char v9; // al

  v3 = IcListHead;
  if ( &IcListHead == (__int64 *)IcListHead )
    return 3221226021LL;
  while ( 1 )
  {
    if ( *(int *)(v3 + 28) >= 0 )
    {
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 <= a1 && *(_DWORD *)(v3 + 20) >= a1 )
        break;
    }
    v3 = *(_QWORD *)v3;
    if ( &IcListHead == (__int64 *)v3 )
      return 3221226021LL;
  }
  v5 = 200LL * (a1 - v4);
  if ( !*(_DWORD *)(v5 + v3 + 36) )
    return 3221226021LL;
  if ( a3 )
  {
    v8 = *(_DWORD *)(v5 + v3 + 148);
    if ( v8 == 3 )
    {
      v9 = 10;
    }
    else if ( v8 == 4 )
    {
      v9 = 8;
    }
    else
    {
      v9 = v8 != 2 ? 0 : 2;
    }
    *a3 = (*(_DWORD *)(v5 + v3 + 152) == 0) | v9;
  }
  v7 = *(_DWORD *)(v5 + v3 + 40);
  if ( v7 && v7 == *(_DWORD *)(v5 + v3 + 32) && *(_DWORD *)(v5 + v3 + 44) == *(_DWORD *)(v5 + v3 + 36)
    || *(_BYTE *)(v5 + v3 + 224) )
  {
    return 263LL;
  }
  else
  {
    return 0LL;
  }
}
