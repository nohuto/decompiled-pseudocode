/*
 * XREFs of HandleInputDestDestruction @ 0x1C0052E4C
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0052F30 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C01E8150 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0053338 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
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
     || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
     && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
  {
    __int2c();
  }
  if ( (*((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*v5 + 25) & 1) == 0 )
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
        if ( (unsigned int)dword_1C0289810 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 64LL) )
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0289810, (int)&dword_1C025EADA, 0, 0, 2u, &v10);
        }
      }
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
}
