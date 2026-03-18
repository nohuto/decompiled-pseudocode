/*
 * XREFs of PnpDetermineResourceListSize @ 0x1407906DC
 * Callers:
 *     IopQueryDeviceResources @ 0x140790134 (IopQueryDeviceResources.c)
 *     IoGetDeviceProperty @ 0x140792EB0 (IoGetDeviceProperty.c)
 *     IopCombineCmResourceList @ 0x140812B38 (IopCombineCmResourceList.c)
 *     IopLegacyResourceAllocation @ 0x140817DC4 (IopLegacyResourceAllocation.c)
 *     PnpBuildCmResourceLists @ 0x1408185D4 (PnpBuildCmResourceLists.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IopChangeInterfaceType @ 0x140957110 (IopChangeInterfaceType.c)
 *     PnpSetRegistryResourceList @ 0x1409585AC (PnpSetRegistryResourceList.c)
 *     IopCombineLegacyResources @ 0x140959E54 (IopCombineLegacyResources.c)
 *     PnpCopyResourceList @ 0x14096C978 (PnpCopyResourceList.c)
 *     PnpRestoreResourcesInternal @ 0x14096D7E4 (PnpRestoreResourcesInternal.c)
 *     IopReportBootResources @ 0x140B441C0 (IopReportBootResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpDetermineResourceListSize(_DWORD *a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  __int64 v3; // r10
  unsigned int v4; // ecx
  _DWORD *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( !a1 )
    return 0LL;
  v2 = a1 + 1;
  result = 4LL;
  if ( *a1 )
  {
    v3 = (unsigned int)*a1;
    do
    {
      v4 = v2[3];
      v5 = v2 + 4;
      v6 = 16;
      if ( v4 )
      {
        v7 = v4;
        do
        {
          v8 = 20LL;
          if ( *(_BYTE *)v5 == 5 )
            v8 = (unsigned int)(v5[1] + 20);
          v6 += v8;
          v5 = (_DWORD *)((char *)v5 + v8);
          --v7;
        }
        while ( v7 );
      }
      result = v6 + (unsigned int)result;
      v2 = (_DWORD *)((char *)v2 + v6);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
