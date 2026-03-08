/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C006D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete(this[63]);
  operator delete(this[29]);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)(this + 4));
}
