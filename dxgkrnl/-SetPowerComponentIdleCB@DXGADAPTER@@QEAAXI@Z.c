/*
 * XREFs of ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001CBA8
 * Callers:
 *     DxgSetPowerComponentIdleCB @ 0x1C001CB40 (DxgSetPowerComponentIdleCB.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C03107FC (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0310E7C (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C000F9C0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCB(DXGADAPTER *this, unsigned int a2)
{
  unsigned int v3; // edi

  v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1520);
  if ( v3 >= *((_DWORD *)this + 792) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  if ( *((_BYTE *)this + 3465) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(520LL * v3 + *((_QWORD *)this + 378) + 348));
    DXGADAPTER::SetPowerComponentIdleCBWorker(this, v3, 0LL);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  }
}
