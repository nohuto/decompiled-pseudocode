/*
 * XREFs of ??1CCD_BTL@@MEAA@XZ @ 0x1C03B7E9C
 * Callers:
 *     ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x1C006A990 (--_ECCD_BTL@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C03BAA74 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 112));
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8));
}
