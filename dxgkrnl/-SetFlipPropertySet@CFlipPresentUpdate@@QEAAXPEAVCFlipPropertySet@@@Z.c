/*
 * XREFs of ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0087E10
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0081E44 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0082C58 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipPresentUpdate::SetFlipPropertySet(CFlipPresentUpdate *this, struct CFlipPropertySet *a2)
{
  CFlipPropertySetBase *v4; // rcx

  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v4 )
    CFlipPropertySetBase::Release(v4);
  *((_QWORD *)this + 7) = a2;
}
