/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C009612C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C0095E50 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     DisableDelegation @ 0x1C00AA0D0 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00B1834 (ApiSetEditionInternalSetCursorPos.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01A1EB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01A2C3C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, int a2)
{
  CCursorClip *v4; // rcx
  char v5; // di
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // ebx
  int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  GetDomainLockRef(18);
  if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 2LL) )
  {
    v10 = a1;
    LODWORD(v11) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024BA90,
      (unsigned int)&unk_1C021FF72,
      v7,
      v8,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( a2 )
  {
    if ( (a2 & 2) != 0 )
    {
      CCursorClip::OverrideClip(v4, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a2;
    InputDelegation::CInputDelegationInfo::gInstance = a1;
  }
  else
  {
    v5 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v9 = *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
      v11 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      DisableDelegation();
      if ( (v5 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v9, HIDWORD(v11), 1LL);
      if ( (v5 & 1) != 0 )
        *(_DWORD *)(gpqForeground + 388) |= 1u;
    }
  }
  return 1LL;
}
