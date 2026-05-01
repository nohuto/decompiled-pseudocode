/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180005C00
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800059E8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C750 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006B0FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3)
{
  struct _RM_ACTIVITY_HOST *v4; // r9
  __int64 v5; // rdi
  int v6; // ecx
  struct _RM_ACTIVITY_HOST *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 1LL) )
  {
    v8 = *((_QWORD *)v4 + 4);
    v7 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_18009E97E,
      a3,
      (_DWORD)v4,
      (__int64)&v8,
      (__int64)&v7);
  }
  (*(void (__fastcall **)(void *, void *, __int64, struct _RM_ACTIVITY_HOST *))(v5 + 128))(a2, a2, a3, v4);
}
