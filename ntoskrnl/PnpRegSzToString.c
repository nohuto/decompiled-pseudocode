/*
 * XREFs of PnpRegSzToString @ 0x1407707FC
 * Callers:
 *     PiFindDevInstMatch @ 0x1407705F4 (PiFindDevInstMatch.c)
 *     PipApplyFunctionToServiceInstances @ 0x140847BFC (PipApplyFunctionToServiceInstances.c)
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x140950328 (PipGetDriverKsrGuidRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1409553B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095BA4C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PipGetDriverTagPriority @ 0x140B57DAC (PipGetDriverTagPriority.c)
 *     PpInitGetGroupOrderIndex @ 0x140B591EC (PpInitGetGroupOrderIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpRegSzToString(_WORD *a1, unsigned int a2, int *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // r9d

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  v5 = (_DWORD)v3 - (_DWORD)a1;
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
