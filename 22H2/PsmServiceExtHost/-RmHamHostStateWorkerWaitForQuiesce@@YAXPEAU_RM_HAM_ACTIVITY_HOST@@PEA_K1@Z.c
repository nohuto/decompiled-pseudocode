/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180047C50
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000403C (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x1800054A4 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006630 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017DB0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180029FAC (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A8D4 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18002AE24 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002C1C4 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036F5C (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x180037578 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037948 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180037D10 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180037FD4 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x180063240 (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ??0?$_tlgWrapperByVal@$07@@QEAA@PEBX@Z @ 0x180063250 (--0-$_tlgWrapperByVal@$07@@QEAA@PEBX@Z.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x180068F04 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073DF0 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073DFC (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180073E08 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorkerWaitForQuiesce(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // edx
  const unsigned __int16 *PsmKey; // rax
  void **v5; // rax
  char v6; // [rsp+50h] [rbp-68h] BYREF
  char v7; // [rsp+51h] [rbp-67h] BYREF
  _WORD v8[7]; // [rsp+52h] [rbp-66h] BYREF
  int v9; // [rsp+60h] [rbp-58h]
  int v10; // [rsp+64h] [rbp-54h]
  int v11; // [rsp+68h] [rbp-50h]
  unsigned int IsSuspendWaiter; // [rsp+6Ch] [rbp-4Ch]
  int v13; // [rsp+70h] [rbp-48h]
  int v14[2]; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h] BYREF
  unsigned __int64 Id; // [rsp+88h] [rbp-30h] BYREF
  __int64 v17; // [rsp+90h] [rbp-28h] BYREF
  __int64 v18; // [rsp+98h] [rbp-20h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-18h] BYREF
  _BYTE v20[16]; // [rsp+A8h] [rbp-10h] BYREF

  *(_QWORD *)&v8[3] = RmHostFromHamHost(a1);
  RmAcquireEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
  while ( 1 )
  {
    HampHostUpdateQuiesceState(a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 162)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted(a1) )
    {
      RmReleaseEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
      RmpSystemResourceTimerReset(a1, *((void **)a1 + 99), 0);
      RmAcquireEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
      v11 = 1;
      goto LABEL_12;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(a1) )
    {
      HampHostCheckStartPendingActivities(a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 680, 0LL);
      HampHostReleaseLockExclusive(a1, v3);
      RmAcquireEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
    }
  }
  *((_DWORD *)a1 + 167) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, 0);
  *(_DWORD *)(*(_QWORD *)&v8[3] + 1244LL) |= 0x80u;
  *(_DWORD *)(*(_QWORD *)&v8[3] + 1248LL) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState(a1, IsSuspendWaiter);
  RmReleaseEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
  RmpSystemSetApplicationQuiesceCompleteEvents(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
  RmpSystemResourceTimerReset(a1, *((void **)a1 + 99), 0);
  v11 = 0;
  RmAcquireEnforcementLocks(*(struct _RM_ACTIVITY_HOST **)&v8[3]);
  if ( HampHostIsTerminateQueued(a1) )
  {
    v10 = 5;
    v9 = 10;
  }
  else
  {
    v10 = 3;
    v9 = 8;
  }
  v13 = 1;
  HampHostRevokeQuiesceExtension((__int64)a1, v10, 1 << v9);
LABEL_12:
  HampHostCheckEndQuiesceTurn(a1);
  *(_QWORD *)v14 = HamTlgProvider;
  if ( (unsigned int)*HamTlgProvider > 4 )
  {
    if ( tlgKeywordOn(*(__int64 *)v14, 0x400000000008LL) )
    {
      v15 = 0x1000000LL;
      v6 = v11;
      v7 = (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 162)) >> 5;
      Id = RmHamHostGetId(a1);
      _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(&v17, &v15);
      _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(&v18, a3);
      _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(v8, &v6);
      _tlgWrapperByVal<1>::_tlgWrapperByVal<1>((char *)v8 + 1, &v7);
      _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(&v19, &Id);
      PsmKey = RmHamHostGetPsmKey(a1);
      v5 = (void **)_tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(v20, PsmKey);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v14[0],
        (int)&unk_18009D8BD,
        0,
        0,
        v5,
        (__int64)&v19,
        (__int64)v8 + 1,
        (__int64)v8,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
}
