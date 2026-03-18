/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FC54C
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C01E7790 (CancelCapturedMipOverride.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMiPActive @ 0x1C003C2F4 (IsMiPActive.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 v5; // r8
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
  {
    v3 = (char *)this + 3576;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3576, 2LL, a3);
    if ( PtiFromInputDest )
    {
      if ( IsMiPActive(PtiFromInputDest, 0LL) )
      {
        Queue = CInputDest::GetQueue((__int64)v3, 2, v5);
        if ( Queue )
          *(_QWORD *)(Queue + 432) = 0LL;
      }
    }
  }
}
