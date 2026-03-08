/*
 * XREFs of ??1HMGRTABLE@@QEAA@XZ @ 0x1C03116B8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

void __fastcall HMGRTABLE::~HMGRTABLE(void **this)
{
  operator delete(*this);
}
