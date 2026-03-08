/*
 * XREFs of ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02B9C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0123828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartRemoveAllInactiveRFONTs(struct _FONTOBJ **a1)
{
  struct _FONTOBJ *v1; // rax
  struct _FONTOBJ **v2; // rbx
  struct _FONTOBJ *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1;
  while ( v1 )
  {
    v3 = v1;
    RFONTOBJ::vDeleteRFONT(&v3, 0LL, 0LL, 0);
    v3 = 0LL;
    ++v2;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
    v1 = *v2;
  }
}
