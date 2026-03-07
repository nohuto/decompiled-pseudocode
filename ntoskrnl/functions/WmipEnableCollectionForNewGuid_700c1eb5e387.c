int __fastcall WmipEnableCollectionForNewGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rax
  LARGE_INTEGER *v9; // rcx
  __int64 v10; // rax
  LARGE_INTEGER *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v14[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF

  *(_OWORD *)&v14[0].LowPart = 0LL;
  memset(v15, 0, sizeof(v15));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        *((_DWORD *)v5 + 4) |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        v7 = *(_OWORD *)a1;
        v8 = *(_QWORD *)(a2 + 64);
        v9 = v14;
        v14[0].LowPart = 48;
        *(_OWORD *)((char *)v15 + 8) = v7;
        LOBYTE(v9) = 4;
        WmipSendWmiIrp((__int64)v9, *(unsigned int *)(v8 + 56), (__int64)v15 + 8, 48, (__int64)v14, &v13);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( *((_DWORD *)v5 + 22) )
          *((_DWORD *)v5 + 4) &= ~2u;
        else
          WmipDoDisableRequest(v5, 1, 2LL);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v10 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)&v14[0].LowPart = 0LL;
      v11 = v14;
      v14[0].LowPart = 48;
      memset(v15, 0, sizeof(v15));
      LOBYTE(v11) = 6;
      *(_OWORD *)((char *)v15 + 8) = *(_OWORD *)a1;
      WmipSendWmiIrp((__int64)v11, *(unsigned int *)(v10 + 56), (__int64)v15 + 8, 48, (__int64)v14, &v13);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
