/*
 * XREFs of MicrocodeSetProcMcLog @ 0x14061327C
 * Callers:
 *     PrExtControlOperations @ 0x140613148 (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x140613378 (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeSetProcMcLog(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *v4; // r11
  __int64 v6; // r9
  int v7; // r10d
  bool v8; // zf
  int v9; // ecx
  int v10; // eax

  v4 = (_DWORD *)a1;
  if ( a2 >= 0x800 )
    return 3221226705LL;
  v6 = 44LL * a2;
  v7 = 2;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)((char *)&MCUpdateRegistryData + v6) != 2 )
      *(_DWORD *)((char *)&MCUpdateRegistryData + v6) = 1;
  }
  else
  {
    *(_DWORD *)((char *)&MCUpdateRegistryData + v6) = 2;
  }
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 8) = a3;
  if ( a2 )
  {
    *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 4) = DWORD1(MCUpdateRegistryData);
  }
  else if ( (unsigned __int8)GetCpuManufacturer(2LL) )
  {
    *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 4) = 1;
  }
  else if ( (unsigned __int8)GetCpuManufacturer(1LL) )
  {
    *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 4) = v7;
  }
  v8 = *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 16) == 0;
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 12) = v4[6];
  if ( v8 )
    *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 16) = v4[4];
  v9 = v4[2];
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 20) = v4[4];
  v10 = v4[7];
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 24) = v9;
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 28) = v10;
  if ( v10 == v9 )
    *((_BYTE *)&MCUpdateRegistryData + v6 + 32) = 1;
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 36) = v4[1];
  *(_DWORD *)((char *)&MCUpdateRegistryData + v6 + 40) = a2 != 0 ? v7 + 1 : 1;
  return 0LL;
}
