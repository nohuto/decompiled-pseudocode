/*
 * XREFs of MiInitializePartitionSpecialPurposeMemoryCallout @ 0x140660760
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A473DC (MiInitializePartitionSpecialPurposeMemory.c)
 */

void __fastcall MiInitializePartitionSpecialPurposeMemoryCallout(_DWORD *Parameter)
{
  Parameter[4] = MiInitializePartitionSpecialPurposeMemory(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}
