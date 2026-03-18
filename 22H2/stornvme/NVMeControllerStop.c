/*
 * XREFs of NVMeControllerStop @ 0x1C000EC50
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003550 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C00094DC (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0009A38 (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C0009AF8 (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C000ABE4 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C000AE84 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000ED24 (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EF00 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000FCA4 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerStop(__int64 a1)
{
  char v2; // si
  __int64 i; // rdi
  __int64 v4; // r8

  v2 = IoQueuesDeletion(a1);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 4000) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1);
  AdminQueuesFreeResources(a1);
  FreeProcessorInfo(a1);
  FreeMsiInfo(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 232); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(a1 + 8 * i + 1952);
      if ( v4 )
        StorPortExtendedFunction(1LL, a1, v4);
    }
  }
  memset((void *)(a1 + 1952), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  NVMeDisableThrottling(a1);
  return v2;
}
