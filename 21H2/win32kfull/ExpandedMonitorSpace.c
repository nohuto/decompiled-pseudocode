/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01DEC3C
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01DF8D4 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E01B4 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00B0A88 (ExpandMonitorSpaceVertex.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int16 v6; // di
  __int64 v7; // rcx
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 62LL);
  DpiForSystem = GetDpiForSystem(v7, v5);
  v10 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v6, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v6, *((__int64 *)&v10 + 1));
  a1[1] = result;
  return result;
}
