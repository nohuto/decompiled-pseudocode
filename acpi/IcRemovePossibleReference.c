/*
 * XREFs of IcRemovePossibleReference @ 0x1C009F660
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C009CE20 (IrqArbBacktrackAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E890 (IrqArbpUnreferenceArbitrationList.c)
 * Callees:
 *     <none>
 */

void __fastcall IcRemovePossibleReference(unsigned int a1, char a2)
{
  __int64 i; // r8
  unsigned int v3; // eax
  __int64 v4; // rcx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v3 = *(_DWORD *)(i + 16);
      if ( v3 <= a1 && *(_DWORD *)(i + 20) >= a1 )
      {
        v4 = 200LL * (a1 - v3);
        --*(_DWORD *)(v4 + i + 36);
        if ( a2 )
          --*(_DWORD *)(v4 + i + 44);
        return;
      }
    }
  }
}
