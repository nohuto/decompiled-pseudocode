/*
 * XREFs of MiInitializePartitionSpecialPurposeMemoryCallout @ 0x14065E110
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 */

void __fastcall MiInitializePartitionSpecialPurposeMemoryCallout(_DWORD *Parameter)
{
  Parameter[4] = MiInitializePartitionSpecialPurposeMemory(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}
