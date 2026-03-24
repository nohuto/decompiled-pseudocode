/*
 * XREFs of MiLogSectionObjectEvent @ 0x1408C79E0
 * Callers:
 *     MiSectionDelete @ 0x140638220 (MiSectionDelete.c)
 *     MiCreateSection @ 0x140652DA0 (MiCreateSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140530540 (MiLogPerfMemoryEvent.c)
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
  MiLogPerfMemoryEvent((v3 != 1) + 647, 0x20400001u, (__int64)v4, 16, 4200706);
}
