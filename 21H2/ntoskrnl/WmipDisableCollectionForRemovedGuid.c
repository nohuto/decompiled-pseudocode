/*
 * XREFs of WmipDisableCollectionForRemovedGuid @ 0x1407582D4
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140757AE0 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1407C44E8 (WmipUpdateDataSource.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x140633FE0 (WmipFindGEByGuid.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     WmipDoDisableRequest @ 0x14077A9AC (WmipDoDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140781B54 (WmipReleaseCollectionEnabled.c)
 */

int __fastcall WmipDisableCollectionForRemovedGuid(_QWORD *a1, __int64 a2)
{
  _QWORD *GEByGuid; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER v11[6]; // [rsp+40h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
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
      v6 = *(_QWORD *)(a2 + 64);
      v11[5].QuadPart = 0LL;
      memset((char *)&v11[0].QuadPart + 4, 0, 20);
      v11[0].LowPart = 48;
      *(_OWORD *)&v11[3].LowPart = *(_OWORD *)a1;
      WmipSendWmiIrp(5u, *(_DWORD *)(v6 + 56), (UNICODE_STRING *)&v11[3], 0x30u, (__int64)v11, &v10);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 22) )
      {
        *((_DWORD *)v5 + 4) &= ~2u;
      }
      else
      {
        LOBYTE(v7) = 1;
        WmipDoDisableRequest(v5, v7);
      }
    }
    if ( *((_DWORD *)v5 + 23) && (*(_DWORD *)(a2 + 16) & 0x4000) != 0 )
    {
      *((_DWORD *)v5 + 4) |= 4u;
      *(_DWORD *)(a2 + 16) &= ~0x4000u;
      KeReleaseMutex(&WmipSMMutex, 0);
      v8 = *(_QWORD *)(a2 + 64);
      v11[5].QuadPart = 0LL;
      memset((char *)&v11[0].QuadPart + 4, 0, 20);
      v11[0].LowPart = 48;
      *(_OWORD *)&v11[3].LowPart = *(_OWORD *)a1;
      WmipSendWmiIrp(7u, *(_DWORD *)(v8 + 56), (UNICODE_STRING *)&v11[3], 0x30u, (__int64)v11, &v10);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *((_DWORD *)v5 + 23) )
      {
        *((_DWORD *)v5 + 4) &= ~4u;
        WmipReleaseCollectionEnabled(v5);
      }
      else
      {
        WmipDoDisableRequest(v5, 0LL);
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, v5);
    LODWORD(GEByGuid) = KeReleaseMutex(&WmipSMMutex, 0);
  }
  return (int)GEByGuid;
}
