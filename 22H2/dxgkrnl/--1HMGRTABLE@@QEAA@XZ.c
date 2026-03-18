/*
 * XREFs of ??1HMGRTABLE@@QEAA@XZ @ 0x1C03164E8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 */

void __fastcall HMGRTABLE::~HMGRTABLE(void **this)
{
  operator delete(*this);
}
