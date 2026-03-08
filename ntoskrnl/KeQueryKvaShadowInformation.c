/*
 * XREFs of KeQueryKvaShadowInformation @ 0x140972498
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x140B903AC (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x1402FE9A0 (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x140576D60 (KeQueryImplementedPhysicalBits.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(BOOL *a1, unsigned int a2, _DWORD *a3)
{
  int ImplementedPhysicalBits; // eax
  int v6; // edi
  char v7; // si
  BOOL v8; // ebx
  int v9; // edi
  char v10; // al
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // esi

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v6 = 0;
  v7 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v7 = ImplementedPhysicalBits - 1;
  *a1 = 0;
  v8 = KiKvaShadow != 0;
  *a1 = v8;
  if ( (unsigned int)KeKvaShadowingActive() == 2 )
    v6 = 2;
  v9 = v8 | v6;
  *a1 = v9;
  v10 = KiFlushPcid;
  v11 = v9 | (4 * (KiFlushPcid & 1));
  *a1 = v11;
  v12 = v11 | (4 * (v10 & 2));
  *a1 = v12;
  v13 = (KiKvaLeakage != 0 ? 0x10 : 0) | v12;
  *a1 = v13;
  v13 |= 0x20u;
  *a1 = v13;
  v13 |= 0x2000u;
  *a1 = v13;
  v14 = v13 | ((v7 & 0x3F) << 6);
  *a1 = v14;
  *a1 = v14 | ((KeFeatureBits2 & 1) << 12);
  return 0LL;
}
