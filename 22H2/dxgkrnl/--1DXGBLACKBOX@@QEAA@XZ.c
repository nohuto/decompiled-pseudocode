/*
 * XREFs of ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C0307A00
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  operator delete(this[7]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1));
}
