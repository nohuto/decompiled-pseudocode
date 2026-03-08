/*
 * XREFs of FONTOBJ_pvTrueTypeFontFile @ 0x1C029B100
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C02B9790 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 */

PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  void *v2; // rbx
  FONTOBJ *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = pfo;
  *pcjFile = 0;
  if ( pfo )
    v2 = RFONTOBJ::pvFile((RFONTOBJ *)&v4, pcjFile);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
