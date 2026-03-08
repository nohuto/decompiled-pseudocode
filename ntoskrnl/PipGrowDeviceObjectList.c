/*
 * XREFs of PipGrowDeviceObjectList @ 0x140969C70
 * Callers:
 *     PipDeviceObjectListAdd @ 0x140862180 (PipDeviceObjectListAdd.c)
 * Callees:
 *     PipDeviceObjectListAdd @ 0x140862180 (PipDeviceObjectListAdd.c)
 *     PiAllocateDeviceObjectList @ 0x1408636E0 (PiAllocateDeviceObjectList.c)
 *     PiClearDeviceObjectList @ 0x140863824 (PiClearDeviceObjectList.c)
 *     PipDeviceObjectListElementAt @ 0x1408702B8 (PipDeviceObjectListElementAt.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGrowDeviceObjectList(unsigned int **a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  unsigned int *DeviceObjectList; // rax
  unsigned int i; // esi
  int v7; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+38h] BYREF
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v10; // [rsp+78h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = 0;
  v9 = 0LL;
  v8 = 0;
  v7 = 0;
  DeviceObjectList = PiAllocateDeviceObjectList(v1[3], 2 * v1[1]);
  v10 = DeviceObjectList;
  if ( DeviceObjectList )
  {
    for ( i = 0; i < *v1; ++i )
    {
      PipDeviceObjectListElementAt(v1, i, &v9, &v8, &v7);
      PipDeviceObjectListAdd(&v10, v9, v8, v7);
    }
    PiClearDeviceObjectList(v1);
    ExFreePoolWithTag(v1, 0);
    DeviceObjectList = v10;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = DeviceObjectList;
  return v2;
}
