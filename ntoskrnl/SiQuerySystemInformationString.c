/*
 * XREFs of SiQuerySystemInformationString @ 0x14082BAB8
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x14082BA5C (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x140A5C67C (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // esi
  int SystemInformation; // eax
  int v9; // ebx
  __int64 Pool2; // rax
  const void **v11; // rdi
  unsigned int v12; // eax

  v7 = a1;
  SystemInformation = ZwQuerySystemInformation(a1, 0LL);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = ExAllocatePool2(256LL, 0LL, 1263556947LL);
    v11 = (const void **)Pool2;
    if ( Pool2 )
    {
      v9 = ZwQuerySystemInformation(v7, Pool2);
      if ( v9 >= 0 )
      {
        v12 = *(unsigned __int16 *)v11 + 2;
        *a4 = v12;
        if ( v12 <= a3 )
          memmove(a2, v11[1], v12);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
