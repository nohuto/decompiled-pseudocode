/*
 * XREFs of PpmAllocWmiEvent @ 0x140578690
 * Callers:
 *     PpmFireWmiEvent @ 0x140578738 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1405787C0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x140370AD0 (IoWMIDeviceObjectToProviderId.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PpmAllocWmiEvent(PDEVICE_OBJECT DeviceObject, __int128 *a2, int a3)
{
  unsigned int v3; // esi
  char *PoolWithTag; // rax
  char *v8; // rbx
  __int128 v9; // xmm0

  v3 = a3 + 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(a3 + 64), 0x774D5050u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)v8 = v3;
    *((_DWORD *)v8 + 1) = IoWMIDeviceObjectToProviderId(DeviceObject);
    v9 = *a2;
    *((_DWORD *)v8 + 11) = 138;
    *((_DWORD *)v8 + 14) = 64;
    *(_OWORD *)(v8 + 24) = v9;
    *((_DWORD *)v8 + 15) = a3;
  }
  return v8;
}
