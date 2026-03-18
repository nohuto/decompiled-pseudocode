/*
 * XREFs of KeQueryTimeIncrement @ 0x1403118F0
 * Callers:
 *     sub_1406F2550 @ 0x1406F2550 (sub_1406F2550.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140773CD0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpSendDataBlock @ 0x140781500 (EtwpSendDataBlock.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     sub_1409F9AF0 @ 0x1409F9AF0 (sub_1409F9AF0.c)
 *     sub_140A4C718 @ 0x140A4C718 (sub_140A4C718.c)
 *     sub_140B3C244 @ 0x140B3C244 (sub_140B3C244.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
