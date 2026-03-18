/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C009DE40
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     DisableDelegation @ 0x1C00BB460 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00BF800 (ApiSetEditionInternalSetCursorPos.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DB33C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DBA00 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(CCursorClip *a1, int a2)
{
  int v3; // edi
  int v4; // r8d
  int v5; // r9d
  char v6; // di
  unsigned int v7; // ebx
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (int)a1;
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
  {
    v9 = v3;
    LODWORD(v10) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C028EE70,
      (unsigned int)&unk_1C02631D6,
      v4,
      v5,
      (__int64)&v10,
      (__int64)&v9);
  }
  if ( a2 )
  {
    if ( (a2 & 2) != 0 )
    {
      CCursorClip::OverrideClip(a1, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a2;
    InputDelegation::CInputDelegationInfo::gInstance = v3;
  }
  else
  {
    v6 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v7 = *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
      v10 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      DisableDelegation();
      if ( (v6 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v7, HIDWORD(v10), 1LL);
      if ( (v6 & 1) != 0 && gpqForeground )
        *(_DWORD *)(gpqForeground + 388) |= 1u;
    }
  }
  return 1LL;
}
