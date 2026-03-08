/*
 * XREFs of ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C00555F4
 * Callers:
 *     ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C00556B0 (--_EDXGPROCESSVMWP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C00556F4 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01993E0 (--1DXGPROCESS@@MEAA@XZ.c)
 */

void __fastcall DXGPROCESSVMWP::~DXGPROCESSVMWP(DXGPROCESSVMWP *this, unsigned int a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &DXGPROCESSVMWP::`vftable';
  v3 = (void *)*((_QWORD *)this + 76);
  if ( v3 )
    DXGVIRTUALMACHINE::`scalar deleting destructor'(v3, a2);
  DXGPROCESS::~DXGPROCESS(this);
}
