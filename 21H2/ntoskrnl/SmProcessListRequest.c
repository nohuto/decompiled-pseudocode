/*
 * XREFs of SmProcessListRequest @ 0x140929CE4
 * Callers:
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmProcessListRequestExtended @ 0x140929EB4 (SmProcessListRequestExtended.c)
 *     SmKmGetStoreList @ 0x14092B6F8 (SmKmGetStoreList.c)
 */

__int64 __fastcall SmProcessListRequest(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // esi
  struct _PRIVILEGE_SET *NonPaged; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int StoreList; // ebx
  __int64 v13; // rcx

  v9 = 4228;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged(0x1084uLL, 0x524C6D73u);
  v11 = NonPaged;
  if ( NonPaged )
  {
    memset(NonPaged, 0, 0x1084uLL);
    if ( a3 < 0x84 )
      goto LABEL_4;
    if ( a5 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v13 = a2;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 131) = *(_BYTE *)(v13 + 131);
    }
    *(_OWORD *)&v11->PrivilegeCount = *(_OWORD *)a2;
    *(_OWORD *)&v11->Privilege[0].Attributes = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v11[1].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v11[2].Privilege[0].Luid.LowPart = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v11[3].Control = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v11[4].PrivilegeCount = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v11[4].Privilege[0].Attributes = *(_OWORD *)(a2 + 96);
    *(_OWORD *)&v11[5].Privilege[0].Luid.HighPart = *(_OWORD *)(a2 + 112);
    v11[6].Privilege[0].Luid.LowPart = *(_DWORD *)(a2 + 128);
    if ( (v11->PrivilegeCount & 0x10000) != 0 )
    {
      if ( a5 )
        ProbeForWrite((volatile void *)a2, 0x1084uLL, 4u);
    }
    else
    {
      v9 = 132;
    }
    if ( a3 == v9 )
    {
      if ( __PAIR16__(BYTE1(v11->PrivilegeCount), v11->PrivilegeCount) == 2 && v11->PrivilegeCount < 0x20000 )
      {
        StoreList = SmKmGetStoreList(a1, v11);
        if ( StoreList >= 0 )
        {
          if ( (v11->PrivilegeCount & 0x10000) == 0
            || (StoreList = SmProcessListRequestExtended(a1, v11), StoreList >= 0) )
          {
            memmove((void *)a2, v11, v9);
            *a4 = v9;
          }
        }
      }
      else
      {
        StoreList = -1073741811;
      }
    }
    else
    {
LABEL_4:
      StoreList = -1073741306;
    }
  }
  else
  {
    StoreList = -1073740716;
  }
  if ( v11 )
    CmSiFreeMemory(v11);
  return (unsigned int)StoreList;
}
