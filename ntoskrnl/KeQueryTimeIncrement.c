/*
 * XREFs of KeQueryTimeIncrement @ 0x140351FF0
 * Callers:
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     sub_1406DF1C0 @ 0x1406DF1C0 (sub_1406DF1C0.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407D7750 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     sub_1409F6C60 @ 0x1409F6C60 (sub_1409F6C60.c)
 *     sub_140A49A48 @ 0x140A49A48 (sub_140A49A48.c)
 *     sub_140B53C00 @ 0x140B53C00 (sub_140B53C00.c)
 * Callees:
 *     <none>
 */

ULONG KeQueryTimeIncrement(void)
{
  return KeMaximumIncrement;
}
