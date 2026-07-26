/*
 * XREFs of ?ndisCreatePMPacketPattern@@YAPEAU_NDIS_PM_PACKET_PATTERN@@PEAU_NDIS_PM_WOL_PATTERN@@PEAK@Z @ 0x1C00901F8
 * Callers:
 *     ?ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096D18 (-ndisXlateWolPatternListToWakeUpPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

struct _NDIS_PM_PACKET_PATTERN *__fastcall ndisCreatePMPacketPattern(struct _NDIS_PM_WOL_PATTERN *a1, unsigned int *a2)
{
  unsigned int v3; // esi
  struct _NDIS_PM_PACKET_PATTERN *result; // rax
  struct _NDIS_PM_PACKET_PATTERN *v6; // rdi
  unsigned int MaskSize; // ecx

  v3 = a1->WoLPattern.WoLBitMapPattern.MaskSize + 24 + a1->WoLPattern.WoLBitMapPattern.PatternSize;
  result = (struct _NDIS_PM_PACKET_PATTERN *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6B70444Eu);
  v6 = result;
  if ( result )
  {
    memset(result, 0, v3);
    v6->Reserved = a1->PatternId;
    v6->Priority = a1->Priority;
    MaskSize = a1->WoLPattern.WoLBitMapPattern.MaskSize;
    v6->MaskSize = MaskSize;
    v6->PatternOffset = MaskSize + 24;
    v6->PatternSize = a1->WoLPattern.WoLBitMapPattern.PatternSize;
    memmove(&v6[1], &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.MaskOffset, MaskSize);
    memmove(
      (char *)v6 + v6->PatternOffset,
      &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.PatternOffset,
      v6->PatternSize);
    result = v6;
    *a2 = v3;
  }
  return result;
}
