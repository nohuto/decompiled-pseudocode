/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180071690
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]

  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  RmpReleaseGlobalLock();
  Object[0] = *((HANDLE *)a1 + 164);
  Object[1] = *((HANDLE *)a1 + 163);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v14 = 0;
    v8 = v2;
    v13 = 8;
    v12 = &v8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009CF7F,
      0LL,
      0LL,
      3u,
      &v11);
  }
  v3 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  if ( v3 )
  {
    v4 = 0;
  }
  else
  {
    *((_DWORD *)a1 + 330) = 0;
    NtClearEvent(*((HANDLE *)a1 + 164));
    v4 = 1;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v9 = *((_QWORD *)a1 + 4);
    LODWORD(v8) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B31E0,
      (int)&unk_18009CEDF,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&v8);
  }
  return v4;
}
