/*
 * XREFs of ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02B89F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RestartInactiveHelper(struct RFONT *a1)
{
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v3 = (struct _FONTOBJ *)a1;
  v2[0] = v1;
  RFONTOBJ::vDeleteRFONT(&v3, 0LL, (struct PFFOBJ *)v2, 0);
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
}
