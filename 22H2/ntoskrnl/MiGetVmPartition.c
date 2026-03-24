/*
 * XREFs of MiGetVmPartition @ 0x140535660
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408D2920 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D8F54 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
