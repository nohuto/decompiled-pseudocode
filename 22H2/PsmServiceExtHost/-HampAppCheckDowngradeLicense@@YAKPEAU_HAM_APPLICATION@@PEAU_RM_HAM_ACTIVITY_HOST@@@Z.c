/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800198C0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001FBF0 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180020B90 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023100 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002769C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800356DC (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035718 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035A50 (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800374FC (-HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007FD3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800801E8 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18008024C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  int v2; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r14
  unsigned int v10; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdx
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rbp
  struct _RM_HAM_ACTIVITY_HOST *v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // [rsp+88h] [rbp+10h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  char *v22; // [rsp+98h] [rbp+20h]

  v2 = 0;
  if ( (*((_BYTE *)a2 + 772) & 1) == 0 )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) >> 62 )
    return 0LL;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)&v20, (union _RM_OPTIMIZATION_STATE *)&v21);
  if ( (v20 & 0x100) == 0 || (v21 & 0x100) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a2 + 82);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      v7 = *((_QWORD *)a2 + 81);
      if ( (v7 & 0x2000000000000LL) == 0 )
        goto LABEL_11;
    }
    return 0LL;
  }
  v7 = *((_QWORD *)a2 + 81);
LABEL_11:
  v8 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a2 + 82) = v8;
  if ( (v7 & 0x2000000000000LL) == 0 )
    *((_QWORD *)a2 + 82) = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  HampHostReleaseLockExclusiveEx(a2);
  RmpReleaseGlobalLock();
  HampAppAcquireLockExclusive(a1);
  v9 = (unsigned int *)((char *)a1 + 608);
  v10 = *((_DWORD *)a1 + 152);
  if ( (v10 & 0x100000) != 0 )
  {
    do
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v10 = *v9;
    }
    while ( (*v9 & 0x100000) != 0 );
  }
  *v9 = v10 & 0xFE0FFFFF | 0x100000;
  HampAppReleaseLockExclusive(a1);
  FirstHost = HampAppGetFirstHost(a1);
  if ( FirstHost )
  {
    while ( 1 )
    {
      HampHostAcquireLockExclusiveEx(FirstHost, 0);
      if ( *((_QWORD *)FirstHost + 81) >= 0x4000000000000000uLL || HampHostIsRunnable(FirstHost) )
        break;
      v2 |= (*((_QWORD *)FirstHost + 81) >> 49) & 1;
      HampHostReleaseLockExclusiveEx(FirstHost);
      FirstHost = HampAppGetNextHost(FirstHost);
      if ( !FirstHost )
        goto LABEL_18;
    }
    HampHostReleaseLockExclusiveEx(FirstHost);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)FirstHost + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)FirstHost - 64), v16);
    RmpReleaseGlobalLock();
    HampAppAcquireLockExclusive(a1);
    *v9 = v10 & 0x600000 | *v9 & 0xFE1FFFFF | v10 & 0x1800000;
    HampAppReleaseLockExclusive(a1);
  }
  else
  {
LABEL_18:
    HampSystemSuspendStoreLicense(a1, v11);
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v21 = *((_QWORD *)a2 - 4);
      v22 = (char *)a2 + 24;
      v20 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v14,
        &unk_1800A1734);
    }
    if ( !v2 )
    {
      HampSystemRundownStoreLicense(a1, v13);
      if ( (unsigned int)dword_1800B3218 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
        {
          v21 = *((_QWORD *)a2 - 4);
          v22 = (char *)a2 + 24;
          v20 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
            v18,
            &unk_1800A16F1);
        }
      }
    }
    HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
  }
  HampAppAcquireLockExclusive(a1);
  *v9 &= ~0x100000u;
  RtlWakeAddressAll((char *)a1 + 608);
  HampAppReleaseLockExclusive(a1);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a2, 0);
  return 1LL;
}
