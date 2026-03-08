/*
 * XREFs of MiGetVmPartition @ 0x140626FC4
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A45B98 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
