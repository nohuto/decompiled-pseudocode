/*
 * XREFs of ACPIRegLocalCopyString @ 0x1C008D388
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D15C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3DC (ACPIRegReadAMLRegistryEntry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A9FEC (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIRegLocalCopyString(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  char *v5; // r10
  __int64 v6; // rdx
  char v7; // r8
  char v8; // al
  char *result; // rax

  v3 = 0;
  if ( a3 )
  {
    v5 = a1;
    v6 = a2 - (_QWORD)a1;
    do
    {
      v7 = v5[v6];
      if ( !v7 )
        break;
      v8 = v5[v6];
      if ( v7 == 32 )
        v8 = 95;
      ++v3;
      *v5++ = v8;
    }
    while ( v3 < a3 );
  }
  result = &a1[v3];
  *result = 0;
  return result;
}
