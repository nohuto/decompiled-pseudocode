/*
 * XREFs of IopAllocateLegacyBootResources @ 0x140B359CC
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     IopCreateCmResourceList @ 0x1408027E8 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x1408028BC (IopCombineCmResourceList.c)
 *     IopAllocateBootResources @ 0x140804670 (IopAllocateBootResources.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateLegacyBootResources(__int64 a1, int a2)
{
  int v3; // r14d
  char *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  void *v8; // rbx
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  if ( IopInitHalDeviceNode )
  {
    if ( IopInitHalResources )
    {
      v11 = 0LL;
      v4 = IopCreateCmResourceList(a1, a1, a2, &v11);
      if ( v4 )
      {
        v8 = v11;
        if ( v11 )
          ExFreePoolWithTag(IopInitHalResources, 0);
        IopInitHalResources = v8;
        v9 = *(_DWORD **)(IopInitHalDeviceNode + 544);
        PipSetDevNodeFlags(IopInitHalDeviceNode, 64);
        IopAllocateBootResources(1u, *(_QWORD *)(IopInitHalDeviceNode + 32));
        *(_QWORD *)(IopInitHalDeviceNode + 544) = IopCombineCmResourceList(v9, v4);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
      }
    }
  }
  v5 = 0LL;
LABEL_5:
  v6 = IopInitReservedResourceList;
  while ( v6 )
  {
    v10 = (_DWORD *)v6[2];
    if ( v10[1] == v3 && v10[2] == a2 )
    {
      IopAllocateBootResources(4u, v6[1]);
      if ( !v6[1] )
        ExFreePoolWithTag(v10, 0);
      if ( v5 )
        *v5 = *v6;
      else
        IopInitReservedResourceList = (PVOID)*v6;
      ExFreePoolWithTag(v6, 0);
      if ( !v5 )
        goto LABEL_5;
      v6 = (_QWORD *)*v5;
    }
    else
    {
      v5 = v6;
      v6 = (_QWORD *)*v6;
    }
  }
  return 0LL;
}
