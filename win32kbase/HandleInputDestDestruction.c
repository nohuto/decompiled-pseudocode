void __fastcall HandleInputDestDestruction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 MouseProcessor; // rax
  volatile __int32 *v8; // rbx
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-30h] BYREF

  v5 = *(_DWORD **)(a1 + 80);
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, a2, a3, a4)
     || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  if ( (*((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v5 + 25) & 1) == 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9, a2, a3, a4);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v8 = (volatile __int32 *)(MouseProcessor + 3576);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3576, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v8);
        _InterlockedExchange(v8 + 30, 0);
        if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029D468, 0, 0, 2u, &v10);
      }
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
}
