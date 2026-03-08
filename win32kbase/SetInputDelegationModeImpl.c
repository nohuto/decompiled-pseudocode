/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C021882C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     DisableDelegation @ 0x1C00C8990 (DisableDelegation.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00CBBC4 (ApiSetEditionInternalSetCursorPos.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C00DDF28 (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     ApiSetEditionKeyboardInputDelegationChanged @ 0x1C00E13EC (ApiSetEditionKeyboardInputDelegationChanged.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C020A5C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C020AF94 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(CCursorClip *a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  CCursorClip *v16; // rcx
  int v18; // [rsp+40h] [rbp-18h] BYREF
  int v19; // [rsp+44h] [rbp-14h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  v6 = (int)a1;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    v21 = a3;
    v18 = v7;
    v19 = v6;
    LODWORD(v20) = a4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029CB5C,
      v7,
      v8,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v21);
  }
  if ( a4 )
  {
    Feature_KIDV2__private_IsEnabledDeviceUsage();
    if ( (a4 & 2) != 0 )
    {
      CCursorClip::OverrideClip(v16, 1u);
      *(struct tagPOINT *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 2) = a4;
    InputDelegation::CInputDelegationInfo::gInstance = v6;
    if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() && (a4 & 1) != 0 )
    {
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a3;
      v14 = 1LL;
      v15 = a3;
      goto LABEL_19;
    }
  }
  else
  {
    v9 = *(&InputDelegation::CInputDelegationInfo::gInstance + 8);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 2) )
    {
      v10 = *(&InputDelegation::CInputDelegationInfo::gInstance + 3);
      v11 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      v20 = *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12);
      DisableDelegation(a1);
      if ( (v9 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v10, HIDWORD(v20), 1LL);
      v12 = v9 & 1;
      if ( v12 && gpqForeground )
        *(_DWORD *)(gpqForeground + 396) |= 1u;
      if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() && v12 )
      {
        v14 = 0LL;
        v15 = v11;
LABEL_19:
        ApiSetEditionKeyboardInputDelegationChanged(v15, v14, v13);
      }
    }
  }
  return 1LL;
}
