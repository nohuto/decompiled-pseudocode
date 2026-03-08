/*
 * XREFs of IcAddPossibleReference @ 0x1C009EB74
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0098DAC (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall IcAddPossibleReference(unsigned int a1, char a2)
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
        ++*(_DWORD *)(v4 + i + 36);
        if ( a2 )
          ++*(_DWORD *)(v4 + i + 44);
        return;
      }
    }
  }
}
