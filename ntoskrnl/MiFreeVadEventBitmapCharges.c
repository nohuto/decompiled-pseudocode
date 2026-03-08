/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x140703AFC
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x140A2F248 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
