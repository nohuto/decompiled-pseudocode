/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007CAF8
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180042E30 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x18007BC74 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009DA8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED7C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180063440 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007E84C (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        NTSTATUS a3,
        unsigned int a4,
        _BYTE *a5)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char v9; // si
  __int64 v10; // rdx
  NTSTATUS v11; // edi
  int HostByProcessHandle; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF
  NTSTATUS v21; // [rsp+A0h] [rbp+40h] BYREF

  v21 = a3;
  LOBYTE(v21) = 0;
  Handle[0] = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v9 = 0;
  v11 = RmpSystemOpenProcess(Handle, 0x1000u, a2);
  if ( v11 >= 0 )
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(a1, Handle[0], &v19);
    v7 = v19;
    v11 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
      v11 = 0;
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( v11 >= 0 )
  {
    HampHostTerminateIfSuspended(v7, v10, a4, &v21);
    v9 = v21;
  }
  else if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v21 = v11;
    v18 = a4;
    LODWORD(v19) = 1;
    LODWORD(Handle[0]) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_1800A07C6,
      v14,
      v15,
      (__int64)Handle,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v21);
  }
  if ( a5 )
    *a5 = v9;
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64), v16);
    RmpReleaseGlobalLock();
  }
}
