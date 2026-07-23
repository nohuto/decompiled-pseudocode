/*
 * XREFs of PopWakeSourceGetDeviceProperty @ 0x1408E6E8C
 * Callers:
 *     PopProcessWakeSourceWork @ 0x1408E6CC4 (PopProcessWakeSourceWork.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopWakeSourceGetDeviceProperty(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, struct _DEVICE_OBJECT *a3)
{
  _WORD *PoolWithTag; // rbx
  __int64 v7; // rax
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( IoGetDeviceProperty(a3, a2, 0, 0LL, (PULONG)&NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x206D654Du);
    if ( PoolWithTag )
    {
      if ( IoGetDeviceProperty(a3, a2, NumberOfBytes, PoolWithTag, (PULONG)&NumberOfBytes) >= 0 )
      {
        *(_WORD *)(a1 + 2) = NumberOfBytes;
        v7 = -1LL;
        do
          ++v7;
        while ( PoolWithTag[v7] );
        *(_QWORD *)(a1 + 8) = PoolWithTag;
        *(_WORD *)a1 = 2 * v7;
        PoolWithTag = 0LL;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
    }
  }
}
