/*
 * XREFs of SiQuerySystemInformationString @ 0x140785F54
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x140785EF8 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x1409735F0 (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // esi
  int SystemInformation; // eax
  int v9; // ebx
  const void **PoolWithTag; // rax
  const void **v11; // rdi
  unsigned int v12; // eax

  v7 = a1;
  SystemInformation = ZwQuerySystemInformation(a1, 0LL);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, 0LL, 0x4B505953u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ZwQuerySystemInformation(v7, (__int64)PoolWithTag);
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
