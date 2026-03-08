/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C02B1D30
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 379) )
  {
    if ( *((_QWORD *)this + 480) )
    {
      *((_BYTE *)this + 3848) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3712), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 480), 0, 0LL);
      ZwClose(*((HANDLE *)this + 480));
      *((_QWORD *)this + 480) = 0LL;
    }
  }
}
