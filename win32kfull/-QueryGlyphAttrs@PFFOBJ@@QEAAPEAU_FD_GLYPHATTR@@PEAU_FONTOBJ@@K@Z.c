/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02E3190
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C029B010 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C011E5E4 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C011FE34 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, unsigned int a3)
{
  __int64 (__fastcall *v5)(struct _FONTOBJ *, _QWORD); // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3352LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v7, this);
  if ( v5 )
    v5 = (__int64 (__fastcall *)(struct _FONTOBJ *, _QWORD))v5(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v7);
  return (struct _FD_GLYPHATTR *)v5;
}
