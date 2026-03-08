/*
 * XREFs of ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0016884
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C00168C0 (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER(ADAPTEROWNERTRACKER *this)
{
  DXGADAPTER *v2; // rcx
  DXGADAPTER *v3; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 1);
  if ( v2 )
    DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v2);
  v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( *((DXGADAPTER **)this + 1) != v3 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v3);
  }
}
