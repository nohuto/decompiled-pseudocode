int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  volatile signed __int64 *GEByGuid; // rax
  volatile signed __int64 *v5; // rbx
  __int128 v6; // xmm0
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rax
  LARGE_INTEGER *v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF

  *(_OWORD *)&v13[0].LowPart = 0LL;
  memset(v14, 0, sizeof(v14));
  GEByGuid = WmipFindGEByGuid(a1, 0);
  v5 = GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( *((_DWORD *)v5 + 22) && (*(_DWORD *)(a2 + 16) & 0x82000) == 0x2000 )
    {
      *(_DWORD *)(a2 + 16) &= ~0x2000u;
      *((_DWORD *)v5 + 4) |= 2u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v6 = *(_OWORD *)a1;
      v7 = *(_QWORD *)(a2 + 64);
      v8 = v13;
      v13[0].LowPart = 48;
      *(_OWORD *)((char *)v14 + 8) = v6;
      LOBYTE(v8) = 5;
      WmipSendWmiIrp((__int64)v8, *(unsigned int *)(v7 + 56), (__int64)v14 + 8, 48, (__int64)v13, &v12);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
        *((_DWORD *)v5 + 4) &= ~2u;
      else
        WmipDoDisableRequest(v5, 1, 2LL);
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v9 = *(_QWORD *)(a2 + 64);
      *(_OWORD *)&v13[0].LowPart = 0LL;
      v10 = v13;
      v13[0].LowPart = 48;
      memset(v14, 0, sizeof(v14));
      LOBYTE(v10) = 7;
      *(_OWORD *)((char *)v14 + 8) = *(_OWORD *)a1;
      WmipSendWmiIrp((__int64)v10, *(unsigned int *)(v9 + 56), (__int64)v14 + 8, 48, (__int64)v13, &v12);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled((__int64)v5);
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
