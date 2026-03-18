/*
 * XREFs of WmipEnableCollectionForNewGuid @ 0x14075DA88
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x14075D8DC (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1409DE80C (WmipUpdateDataSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     WmipDoDisableRequest @ 0x1406D8814 (WmipDoDisableRequest.c)
 *     WmipUnreferenceEntry @ 0x1407838E0 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1407839B4 (WmipSendWmiIrp.c)
 *     WmipFindGEByGuid @ 0x140783CD8 (WmipFindGEByGuid.c)
 *     WmipReleaseCollectionEnabled @ 0x1408119C4 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipEnableCollectionForNewGuid(_OWORD *a1, __int64 a2)
{
  __int64 GEByGuid; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  LARGE_INTEGER *v8; // rcx
  __int64 v9; // rax
  LARGE_INTEGER *v10; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v13[6]; // [rsp+40h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v5 = (_DWORD *)GEByGuid;
  if ( GEByGuid )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v5[22] )
    {
      v6 = *(_DWORD *)(a2 + 16);
      if ( (v6 & 0x82000) == 0 )
      {
        *(_DWORD *)(a2 + 16) = v6 | 0x2000;
        v5[4] |= 2u;
        KeReleaseMutex(&WmipSMMutex, 0);
        v7 = *(_QWORD *)(a2 + 64);
        v13[5].QuadPart = 0LL;
        memset((char *)&v13[0].QuadPart + 4, 0, 20);
        v8 = v13;
        v13[0].LowPart = 48;
        LOBYTE(v8) = 4;
        *(_OWORD *)&v13[3].LowPart = *a1;
        WmipSendWmiIrp(v8, *(unsigned int *)(v7 + 56), &v13[3], 48LL, v13, v12);
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        if ( v5[22] )
          v5[4] &= ~2u;
        else
          WmipDoDisableRequest(v5, 1, 2LL);
      }
    }
    if ( v5[23] && (*(_DWORD *)(a2 + 16) & 0x4004) == 4 )
    {
      v5[4] |= 4u;
      *(_DWORD *)(a2 + 16) |= 0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v9 = *(_QWORD *)(a2 + 64);
      v13[5].QuadPart = 0LL;
      memset((char *)&v13[0].QuadPart + 4, 0, 20);
      v10 = v13;
      v13[0].LowPart = 48;
      LOBYTE(v10) = 6;
      *(_OWORD *)&v13[3].LowPart = *a1;
      WmipSendWmiIrp(v10, *(unsigned int *)(v9 + 56), &v13[3], 48LL, v13, v12);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( v5[23] )
      {
        v5[4] &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0, 4LL);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return GEByGuid;
}
