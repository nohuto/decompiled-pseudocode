/*
 * XREFs of ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C035D628
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVAILOBJECT::NotifyVailAdapter(int a1)
{
  _BOOL8 v1; // rbx
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF
  __int128 v3; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  v1 = a1 != 0;
  v3 = 0LL;
  do
  {
    SMgrGdiCallout(&v2, 0x100000000LL, 0LL, &DXGVAILOBJECT::NotifyVailSessionCallback, v1, 0LL);
    if ( DWORD2(v3) != -1073741816 )
      break;
    ZwYieldExecution();
  }
  while ( DWORD2(v3) == -1073741816 );
}
