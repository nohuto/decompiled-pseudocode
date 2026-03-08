/*
 * XREFs of FONTOBJ_pjOpenTypeTablePointer @ 0x1C029B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C02B96E0 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 */

PBYTE __stdcall FONTOBJ_pjOpenTypeTablePointer(FONTOBJ *pfo, ULONG ulTag, ULONG *pcjTable)
{
  BYTE *v3; // rbx
  FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = pfo;
  if ( pfo )
    v3 = RFONTOBJ::pjTable((RFONTOBJ *)&v5, ulTag, pcjTable);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
