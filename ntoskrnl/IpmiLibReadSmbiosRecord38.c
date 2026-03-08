/*
 * XREFs of IpmiLibReadSmbiosRecord38 @ 0x1406754B4
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406751C8 (IpmiHwInitializeContext.c)
 * Callees:
 *     ExGetSystemFirmwareTable @ 0x14085CED0 (ExGetSystemFirmwareTable.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IpmiLibReadSmbiosRecord38(__int64 a1)
{
  char *Pool2; // rdi
  int SystemFirmwareTable; // ebx
  _WORD *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  _WORD *v7; // rcx
  _WORD *i; // rax
  __int16 v10; // ax
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  Pool2 = 0LL;
  SystemFirmwareTable = ExGetSystemFirmwareTable(1381190978LL, 0LL, 0LL, 0LL, &v11);
  if ( SystemFirmwareTable == -1073741789 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, v11, 1229803593LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SystemFirmwareTable = ExGetSystemFirmwareTable(1381190978LL, 0LL, Pool2, v11, &v11);
  }
  if ( SystemFirmwareTable >= 0 )
  {
    v4 = Pool2 + 8;
    v5 = (unsigned __int64)&Pool2[v11];
    while ( 1 )
    {
      if ( (unsigned __int64)v4 >= v5 )
        goto LABEL_17;
      if ( (unsigned __int64)(v4 + 2) > v5 )
        goto LABEL_24;
      if ( *(_BYTE *)v4 == 127 )
      {
LABEL_17:
        SystemFirmwareTable = -1073741275;
        goto LABEL_18;
      }
      v6 = *((unsigned __int8 *)v4 + 1);
      if ( *(_BYTE *)v4 == 38 )
        break;
      v7 = (_WORD *)((char *)v4 + v6);
      if ( (unsigned __int64)v7 > v5 )
        goto LABEL_24;
      for ( i = v7 + 1; (unsigned __int64)i < v5 && *v7; i = (_WORD *)((char *)i + 1) )
        v7 = (_WORD *)((char *)v7 + 1);
      v4 = v7 + 1;
    }
    if ( (unsigned __int8)v6 >= 0x12u && (unsigned __int64)v4 + v6 <= v5 )
    {
      v10 = v4[8];
      SystemFirmwareTable = 0;
      *(_OWORD *)a1 = *(_OWORD *)v4;
      *(_WORD *)(a1 + 16) = v10;
      goto LABEL_18;
    }
LABEL_24:
    SystemFirmwareTable = -1073741762;
  }
LABEL_18:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x494D5049u);
  return (unsigned int)SystemFirmwareTable;
}
