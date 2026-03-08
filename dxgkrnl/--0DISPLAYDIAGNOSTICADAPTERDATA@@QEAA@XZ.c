/*
 * XREFs of ??0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C0049570
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

DISPLAYDIAGNOSTICADAPTERDATA *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  DISPLAYDIAGNOSTICADAPTERDATA *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 10) = 256;
  *((_DWORD *)this + 6) = 0;
  *(_OWORD *)((char *)this + 28) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  `vector constructor iterator'(
    (char *)this + 64,
    224LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::VIDPNSOURCEINFO);
  *((_DWORD *)this + 240) = 0;
  `vector constructor iterator'(
    (char *)this + 964,
    248LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNTARGETINFO::VIDPNTARGETINFO);
  *((_DWORD *)this + 489) = 0;
  memset((char *)this + 2184, 0, 0x428uLL);
  memset((char *)this + 1960, 0, 0xE0uLL);
  *((_DWORD *)this + 546) = 0;
  memset((char *)this + 2188, 0, 0x420uLL);
  *((_DWORD *)this + 811) = 0;
  *((_BYTE *)this + 3248) = 0;
  memset((char *)this + 3256, 0, 0xE8uLL);
  result = this;
  *((_BYTE *)this + 3488) = 0;
  *((_QWORD *)this + 437) = 0LL;
  *((_WORD *)this + 1752) = 256;
  *((_BYTE *)this + 3506) = 1;
  return result;
}
