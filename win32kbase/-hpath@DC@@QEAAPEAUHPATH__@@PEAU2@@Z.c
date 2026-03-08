/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C005A1F0
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005A080 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C017F2E4 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C017F36C (--1XEPATHOBJ@@QEAA@XZ.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  int *v7; // [rsp+28h] [rbp-80h]

  v4 = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v4);
      if ( v7 && (v7[21] & 1) == 0 )
        HmgDecrementShareReferenceCountEx(v7, 0LL);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
    *((_QWORD *)this + 25) = a2;
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, a2);
      if ( v7 && (v7[21] & 1) == 0 )
        HmgIncrementShareReferenceCount(v7);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
  }
  return (struct HPATH__ *)*((_QWORD *)this + 25);
}
