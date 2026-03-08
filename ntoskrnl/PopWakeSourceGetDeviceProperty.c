/*
 * XREFs of PopWakeSourceGetDeviceProperty @ 0x140984AA0
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopWakeSourceGetDeviceProperty(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, struct _DEVICE_OBJECT *a3)
{
  void *Pool2; // rbx
  __int64 v7; // rax
  ULONG BufferLength; // [rsp+68h] [rbp+20h] BYREF

  BufferLength = 0;
  if ( IoGetDeviceProperty(a3, a2, 0, 0LL, &BufferLength) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 544040269LL);
    if ( Pool2 )
    {
      if ( IoGetDeviceProperty(a3, a2, BufferLength, Pool2, &BufferLength) < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x206D654Du);
      }
      else
      {
        *(_WORD *)(a1 + 2) = BufferLength;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_WORD *)Pool2 + v7) );
        *(_QWORD *)(a1 + 8) = Pool2;
        *(_WORD *)a1 = 2 * v7;
      }
    }
  }
}
