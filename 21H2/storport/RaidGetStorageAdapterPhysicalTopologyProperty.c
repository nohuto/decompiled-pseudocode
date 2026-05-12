/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0002F24
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0072880 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002E4C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0020280 (memmove.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0052EB8 (StorpLogPhysicalTopologyInfo.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, __int64 a2, size_t *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  _DWORD *v7; // rsi
  size_t v8; // rbp
  int v9; // eax
  char *v10; // r15
  int v11; // edi
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  P = 0LL;
  v5 = a2;
  v13 = 0;
  *a3 = 0LL;
  v7 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(v3 + 8);
  if ( *(_DWORD *)(v3 + 16) < 8u )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)v8 < 0x38 )
  {
    if ( (unsigned int)v8 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v11 = 0;
      *v7 = 56;
      v7[1] = 56;
    }
  }
  else
  {
    v9 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v13);
    v10 = (char *)P;
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = RaidAdapterSendSrbIoControlSynchronously(a1, v5, (_DWORD)P, v13, 0LL, 0, 64);
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        memmove(v7, v10 + 28, v8);
        *v7 = 56;
        *a3 = v8;
        if ( v11 >= 0 && !*(_BYTE *)(a1 + 5472) && v7[1] <= (unsigned int)v8 )
        {
          *(_BYTE *)(a1 + 5472) = 1;
          StorpLogPhysicalTopologyInfo(a1, v7, (unsigned int)v8);
        }
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72536152u);
  }
  return (unsigned int)v11;
}
