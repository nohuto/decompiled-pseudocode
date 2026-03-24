/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00BCD60
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007C740 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007FDD8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C002E1C0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002F680 (HmgDecrementShareReferenceCountEx.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BCE14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00BCE70 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  struct OBJECT *v6; // [rsp+28h] [rbp-80h]

  result = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( a2 != result )
  {
    if ( result )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, *((struct HPATH__ **)this + 25));
      if ( v6 && (*((_DWORD *)v6 + 21) & 1) == 0 )
        HmgDecrementShareReferenceCountEx((__int64)v6, 0LL);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
    }
    *((_QWORD *)this + 25) = a2;
    result = a2;
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, a2);
      if ( v6 )
      {
        if ( (*((_DWORD *)v6 + 21) & 1) == 0 )
          HmgIncrementShareReferenceCount(v6);
      }
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
      return (struct HPATH__ *)*((_QWORD *)this + 25);
    }
  }
  return result;
}
