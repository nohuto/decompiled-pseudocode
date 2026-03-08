/*
 * XREFs of ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C02D237C
 * Callers:
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01A3710 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 * Callees:
 *     <none>
 */

DXGALLOCATION *__fastcall DXGALLOCATION::DXGALLOCATION(DXGALLOCATION *this, struct DXGDEVICE *a2)
{
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 11);
  return this;
}
