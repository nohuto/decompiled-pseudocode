/*
 * XREFs of ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1C0090478
 * Callers:
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094D90 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C00954D0 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWakeUpPatternEntry(
        struct _NDIS_PM_PACKET_PATTERN *Src,
        unsigned int a2)
{
  __int64 MaskSize; // r8
  unsigned int v5; // esi
  struct _NDIS_PACKET_PATTERN_ENTRY *PoolWithTag; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v7; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  MaskSize = Src->MaskSize;
  v5 = MaskSize + 24;
  if ( MaskSize + 24 <= (unsigned __int64)(Src->PatternOffset + Src->PatternSize) )
    v5 = Src->PatternOffset + Src->PatternSize;
  PoolWithTag = (struct _NDIS_PACKET_PATTERN_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 296, 0x6B70444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5 + 296);
    memmove(&v7->48, Src, v5);
    v7->Size = v5 + 296;
    v7->Priority = Src->Priority;
    result = v7;
    v7->PortNumber = a2;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x1Cu,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids);
    return 0LL;
  }
  return result;
}
