/*
 * XREFs of ??1CCD_BTL@@MEAA@XZ @ 0x1C03BC75C
 * Callers:
 *     ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x1C006B5C0 (--_ECCD_BTL@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0180EE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C03BF334 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 112));
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8));
}
