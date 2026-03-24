/*
 * XREFs of KeQueryTimeIncrement @ 0x14024BE00
 * Callers:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405FCB60 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     EtwpSendDataBlock @ 0x1407178F4 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x1407BF500 (PfTInitialize.c)
 *     sub_14094D660 @ 0x14094D660 (sub_14094D660.c)
 *     sub_14096208C @ 0x14096208C (sub_14096208C.c)
 *     sub_140A5B300 @ 0x140A5B300 (sub_140A5B300.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
