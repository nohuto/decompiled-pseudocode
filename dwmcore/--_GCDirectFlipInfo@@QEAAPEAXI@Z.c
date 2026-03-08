/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801D84B4
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800CA25C (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800C7E18 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
