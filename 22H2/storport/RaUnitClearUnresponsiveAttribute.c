/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C00475E8
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0049CB0 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00335F8 (WPP_SF_q.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0046738 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C00555D8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // eax

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0069844 & 1) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 96);
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        v2 >> 8,
        &EventUnitResponsive,
        a1 + 186,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5192LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        4);
    }
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x30u,
        (__int64)&WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
        a1);
    }
  }
  return 0LL;
}
