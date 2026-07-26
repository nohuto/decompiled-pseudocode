/*
 * XREFs of ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C0122728
 * Callers:
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C00AB414 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0138C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

char __fastcall ndisWaitForKernelObject(void *a1, __int64 a2)
{
  NTSTATUS v2; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -10000 * a2;
  v2 = KeWaitForSingleObject(a1, Executive, 0, 0, &Timeout);
  if ( !v2 )
    return 1;
  if ( v2 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v2, 0LL);
  return 0;
}
