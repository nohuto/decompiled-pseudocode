/*
 * XREFs of MiFinalizeDriverImage @ 0x14075B278
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 * Callees:
 *     KseDriverLoadImage @ 0x14075AD50 (KseDriverLoadImage.c)
 *     VfDriverLoadImage @ 0x1409C20A0 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
