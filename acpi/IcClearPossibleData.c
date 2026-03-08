/*
 * XREFs of IcClearPossibleData @ 0x1C009EFD0
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0098DAC (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1C009CF90 (IrqArbBootAllocation.c)
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C009E540 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 */

void *IcClearPossibleData()
{
  __int64 i; // rbx
  unsigned int v1; // r14d
  unsigned int v2; // edi
  _DWORD *v3; // rsi
  char *v4; // rbp
  void *result; // rax
  unsigned int v6; // ecx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v1 = 0;
      v2 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v3 = (_DWORD *)(i + 136);
        v4 = (char *)(i + 136);
        do
        {
          *(v3 - 25) = 0;
          result = memset(v4, 0, 0x58uLL);
          *v3 = 0;
          v4 += 200;
          v3 += 50;
          v6 = v1 + *(_DWORD *)(i + 16);
          ++v1;
          *(v3 - 36) = v6;
        }
        while ( v1 < v2 );
      }
    }
  }
  return result;
}
