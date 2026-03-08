/*
 * XREFs of ??0DISPLAYSTATECHECKER@@QEAA@XZ @ 0x1C0049688
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F49D0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

DISPLAYSTATECHECKER *__fastcall DISPLAYSTATECHECKER::DISPLAYSTATECHECKER(DISPLAYSTATECHECKER *this)
{
  DISPLAYSTATECHECKER *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 8) = 0;
  `vector constructor iterator'(
    (char *)this + 40,
    3512LL,
    4LL,
    (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
  *((_DWORD *)this + 3522) = 0;
  result = this;
  *((_WORD *)this + 7046) = 256;
  *((_BYTE *)this + 14094) = 1;
  return result;
}
