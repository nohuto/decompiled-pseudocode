/*
 * XREFs of MiGetVmPartition @ 0x140629460
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48868 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
