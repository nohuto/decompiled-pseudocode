__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, int a3)
{
  __int64 Pool2; // rax
  void *v7; // rdi
  signed int LowPart; // ebx
  int v9; // ebx
  int v10; // edx
  LARGE_INTEGER v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+42h] [rbp-1Eh]
  char v15; // [rsp+43h] [rbp-1Dh]
  int v16; // [rsp+44h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF

  v15 = 0;
  *(_OWORD *)&v12[0].LowPart = 0LL;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1683451251LL);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    v9 = *(_DWORD *)(Pool2 + 8) ^ a3;
    *(_DWORD *)Pool2 = 5;
    *(_DWORD *)(Pool2 + 8) ^= v9 & 7;
    v16 = 0;
    v10 = *(_DWORD *)(a2 + 6016);
    Object = 0;
    v17[1] = v17;
    v17[0] = v17;
    v14 = 6;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v10, Pool2, (unsigned int)&Object, (__int64)v12);
    if ( LowPart < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v12[0].LowPart;
      if ( (v12[0].LowPart & 0x80000000) == 0 )
        return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)LowPart;
}
