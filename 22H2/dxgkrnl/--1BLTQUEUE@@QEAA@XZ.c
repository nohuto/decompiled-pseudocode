/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C03D0A08
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00572C8 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006DD80 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C03D0C74 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  unsigned int v2; // edx

  BLTQUEUE::Cleanup(this);
  CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>((char *)this + 968, v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 728));
}
