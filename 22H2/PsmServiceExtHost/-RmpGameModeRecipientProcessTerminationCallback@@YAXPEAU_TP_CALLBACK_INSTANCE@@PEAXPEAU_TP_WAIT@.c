/*
 * XREFs of ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006EB30 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x18006ED98 (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006FD6C (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRecipientProcessTerminationCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WAIT *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  char v6; // cl
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD v9; // ebx
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  struct _LIST_ENTRY v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+108h] [rbp+0h]
  int v16; // [rsp+110h] [rbp+8h]
  int v17; // [rsp+114h] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v4 = (_DWORD *)a2[4];
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v5 = *((_DWORD *)a2 + 27);
    v17 = 0;
    LODWORD(v10) = v5;
    v16 = 4;
    v15 = &v10;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009CC14,
      0LL,
      0LL,
      3u,
      &v14);
  }
  RtlAcquireSRWLockExclusive(v4 + 18);
  v4[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 170);
  if ( (v6 & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v4 + 2712LL) & 1) != 0 )
  {
    v11.Blink = &v11;
    v11.Flink = &v11;
  }
  else
  {
    RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2, &v11);
    RmpGameModeRemoveRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2);
    v6 = *((_BYTE *)a2 + 170);
  }
  *((_BYTE *)a2 + 170) = v6 & 0xFD;
  v4[20] = 0;
  RtlReleaseSRWLockExclusive(v4 + 18);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x400000000001LL) )
  {
    LODWORD(v10) = *((_DWORD *)a2 + 27);
    v12 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800B31E0,
      byte_18009C9A5,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v12);
  }
  RmpGameModeDereferenceRemovedProcesses(&v11);
  RmpGameModeDereferenceRecipientProcess(a2);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
