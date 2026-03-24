/*
 * XREFs of NVMeControllerStop @ 0x1C000E85C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C0008040 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C000B248 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C000B5A0 (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C000B660 (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C000C3E0 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C000C684 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000E930 (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000EA6C (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000FE54 (NVMePowerCleanUp.c)
 */

char __fastcall NVMeControllerStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 i; // rdi
  __int64 v20; // r8

  v5 = IoQueuesDeletion(a1, a2, a3, a4);
  NVMePowerCleanUp(a1);
  if ( *(_QWORD *)(a1 + 3784) )
    NVMeFreeHostMemoryBuffer(a1);
  IoQueuesFreeResources(a1, v6, v7, v8);
  AdminQueuesFreeResources(a1, v9, v10, v11);
  FreeProcessorInfo(a1, v12, v13, v14);
  FreeMsiInfo(a1, v15, v16, v17);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 208); i = (unsigned int)(i + 1) )
    {
      v20 = *(_QWORD *)(a1 + 8 * i + 1736);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20, v18);
    }
  }
  memset((void *)(a1 + 1736), 0, 0x7F8uLL);
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  NVMeDisableThrottling(a1);
  return v5;
}
