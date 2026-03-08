/*
 * XREFs of HandleInputDestDestruction @ 0x1C0079C40
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0079D20 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C0217B50 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C003A33C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003A360 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007A190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

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
