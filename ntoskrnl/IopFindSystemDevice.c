/*
 * XREFs of IopFindSystemDevice @ 0x14094E90C
 * Callers:
 *     IoQuerySystemDeviceName @ 0x1407827D0 (IoQuerySystemDeviceName.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140784278 (SiGetSystemDeviceName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFindSystemDevice(__int64 a1, _QWORD *a2)
{
  int SystemDeviceName; // eax
  int v4; // ebx
  void *Pool2; // rax
  void *v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(a1);
  v8 = 0;
  SystemDeviceName = SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk, 0LL, 0, &v8);
  v4 = SystemDeviceName;
  if ( SystemDeviceName == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v8, 1146318665LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v4 = SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk, Pool2, v8, &v8);
      if ( v4 >= 0 )
        *a2 = v6;
      else
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemDeviceName >= 0 )
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}
