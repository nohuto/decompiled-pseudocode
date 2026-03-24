/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x180179E58
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800E0538 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800E040C (--1CDirectFlipInfo@@QEAA@XZ.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this, __int64 a2)
{
  CDirectFlipInfo::~CDirectFlipInfo(this, a2);
  operator delete(this);
  return this;
}
