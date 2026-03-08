/*
 * XREFs of BiGetSystemPartition @ 0x14082B9D0
 * Callers:
 *     BcdGetSystemStorePath @ 0x14082C8E8 (BcdGetSystemStorePath.c)
 * Callees:
 *     SyspartGetFirmwarePartition @ 0x14082BA5C (SyspartGetFirmwarePartition.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  __int64 Pool2; // rax
  void *v5; // rdi
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  FirmwarePartition = SyspartGetFirmwarePartition(0LL, 0LL, &v7);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    Pool2 = ExAllocatePool2(258LL, v7, 1262764866LL);
    v5 = (void *)Pool2;
    if ( Pool2 )
    {
      v3 = SyspartGetFirmwarePartition(Pool2, v7, &v7);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( FirmwarePartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
