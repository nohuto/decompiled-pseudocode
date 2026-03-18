/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C01E8E9C
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C0141F60 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     DisableDelegation @ 0x1C00B8A90 (DisableDelegation.c)
 *     ApiSetEditionKeyboardInputDelegationChanged @ 0x1C00D56B4 (ApiSetEditionKeyboardInputDelegationChanged.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C01DB7E0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01DC1A4 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C020688C (ApiSetEditionInternalSetCursorPos.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(CCursorClip *a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  int v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+44h] [rbp-14h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = (int)a1;
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
  {
    v18 = a3;
    v15 = v7;
    v16 = v6;
    LODWORD(v17) = a4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0289810,
      byte_1C025E1CE,
      v7,
      v8,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18);
  }
  if ( a4 )
  {
    if ( (a4 & 2) != 0 )
    {
      if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) == 0 )
      {
        CCursorClip::OverrideClip(a1, 1u);
        *(struct tagPOINT *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12) = gptCursorAsync;
      }
    }
    else if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    {
      a4 |= 2u;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 2) = a4;
    InputDelegation::CInputDelegationInfo::gInstance = v6;
    if ( (a4 & 1) != 0 )
    {
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a3;
      v12 = 1;
      v13 = a3;
LABEL_19:
      ApiSetEditionKeyboardInputDelegationChanged(v13, v12);
    }
  }
  else
  {
    v9 = *(&InputDelegation::CInputDelegationInfo::gInstance + 8);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 2) )
    {
      v10 = *(&InputDelegation::CInputDelegationInfo::gInstance + 3);
      v11 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      v17 = *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12);
      DisableDelegation(a1);
      if ( (v9 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v10, HIDWORD(v17), 1LL);
      if ( (v9 & 1) != 0 )
      {
        if ( gpqForeground )
          *(_DWORD *)(gpqForeground + 396) |= 1u;
        v12 = 0;
        v13 = v11;
        goto LABEL_19;
      }
    }
  }
  return 1LL;
}
