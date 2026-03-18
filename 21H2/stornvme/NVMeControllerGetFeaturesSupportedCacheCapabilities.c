/*
 * XREFs of NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000793C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeControllerGetFeaturesSupportedCacheCapabilities(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1640);
  if ( (*(_BYTE *)(v2 + 525) & 1) != 0
    && (*(_WORD *)(a1 + 186) > 1u || *(_BYTE *)(a1 + 185))
    && (*(_BYTE *)(v2 + 520) & 0x10) != 0 )
  {
    v3 = *(void **)(a1 + 952);
    *(_BYTE *)(a1 + 867) = 0;
    memset(v3, 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v4 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v4;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v4 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~4u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    v5 = *(_QWORD *)(a1 + 952);
    *(_BYTE *)(v5 + 4136) = 6;
    LODWORD(v4) = *(_DWORD *)(v5 + 4136);
    *(_BYTE *)(v5 + 4096) = 10;
    *(_DWORD *)(v5 + 4136) = v4 & 0xFFFFF8FF | 0x300;
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeGetFeaturesSupportedCacheCapabilitiesCompletion;
    ProcessCommand(a1, a1 + 864);
    result = WaitForCommandCompleteWithCustomTimeout(a1);
    if ( *(_BYTE *)(a1 + 867) != 1 )
      *(_BYTE *)(a1 + 4036) &= ~4u;
  }
  return result;
}
