/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18006A574
 * Callers:
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x180063C20 (RmtSrv_RS_SetExternalResourcePriorities.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x1800803F8 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 *     ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800804BC (-HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800074D4 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18007341C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v9; // rdi
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  DWORD v13; // edi
  struct ExecutionModel::ResourceSet *v15; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v18[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-58h] BYREF

  RmpUtilCheckStartLockTracking(&v16, (struct _CEM_LOCK_TRACKER *)v18);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BA6E,
      0LL,
      0LL,
      2u,
      &v19);
  v15 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), a2, &v15);
  v9 = v15;
  if ( EmSetById >= 0 )
  {
    RmpReleaseGlobalLock();
    v10 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v9, a3, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v17 = a2;
    LODWORD(v15) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800B31E0,
      byte_18009BC54,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v17);
  }
  if ( v9 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v16 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v10;
}
