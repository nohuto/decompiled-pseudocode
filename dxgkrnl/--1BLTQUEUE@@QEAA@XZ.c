/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C03CC1B8
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0056428 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006D150 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C03CC424 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  unsigned int v2; // edx

  BLTQUEUE::Cleanup(this);
  CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>((char *)this + 968, v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 728));
}
