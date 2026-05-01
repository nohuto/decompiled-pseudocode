/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180069134
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x180063CE0 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x1800410C4 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180063330 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18006DF78 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  int v6; // edi
  struct _RM_CPU_SET_CLIENT_CONTEXT *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD v10; // ebx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v12; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-7Dh] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp+17h] BYREF

  RmpUtilCheckStartLockTracking(&v14, (struct _CEM_LOCK_TRACKER *)v15);
  v12 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BBEC,
      0LL,
      0LL,
      2u,
      &v16);
  RmpAcquireGlobalLock();
  v6 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680), a2, &v12);
  if ( v6 < 0 )
  {
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
    *a3 = v12;
    v6 = 0;
  }
  if ( v7 )
    RmpCpuSetManagerReleaseClientContext(v7);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v13 = a2;
    LODWORD(v12) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800B31E0,
      byte_18009B64E,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v13);
  }
  if ( v14 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return (unsigned int)v6;
}
