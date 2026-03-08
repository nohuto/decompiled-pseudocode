/*
 * XREFs of MiLogSectionObjectEvent @ 0x140A2CAAC
 * Callers:
 *     MiSectionDelete @ 0x1407C8780 (MiSectionDelete.c)
 *     MiCreateSection @ 0x1407D05D0 (MiCreateSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140463406 (MiLogPerfMemoryEvent.c)
 */

void __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v4[0] = v2;
  v4[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  MiLogPerfMemoryEvent(648 - (v3 != 0), 0x20400001u, (__int64)v4, 16, 4200706);
}
