/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800680DC
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x1800637C0 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180004464 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180063440 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180073F14 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        DWORD a5)
{
  ExecutionModel::ResourceManager *v5; // r13
  int v6; // edi
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DWORD v15; // edi
  _BYTE v17[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v18; // [rsp+44h] [rbp-9Dh] BYREF
  unsigned int v19; // [rsp+48h] [rbp-99h] BYREF
  DWORD v20; // [rsp+4Ch] [rbp-95h] BYREF
  int v21[4]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v22[144]; // [rsp+60h] [rbp-81h] BYREF

  v5 = g_pResourceManager;
  v6 = a4;
  v18 = a4;
  v17[0] = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( a3 )
  {
    RmpAcquireGlobalLock();
    v10 = 0;
    if ( a2 )
    {
      v11 = a3;
      while ( 1 )
      {
        v9 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld((struct _RM_SERVICE_GLOBALS **)v5, *v11, a5, 1);
        if ( v9 < 0 )
          break;
        ++v10;
        v11 += 6;
        if ( v10 >= a2 )
          goto LABEL_7;
      }
      v6 = v18;
    }
    else
    {
LABEL_7:
      v6 = v18;
      v9 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v5, *((_QWORD *)v5 + 3), a2, a3, v18, a5, v17);
      if ( v9 >= 0 && !v17[0] )
        v9 = -2147467259;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v18 = v6;
    v19 = a2;
    v20 = a5;
    v21[0] = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_18009B0C6,
      v13,
      v14,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return (unsigned int)v9;
}
