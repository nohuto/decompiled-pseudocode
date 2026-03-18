/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801DB784
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800CACBC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C8878 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
