/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C1EEC
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C01AE470 (CancelCapturedMipOverride.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C004438C (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0044484 (QHelper--_anonymous_namespace_--GetQ.c)
 *     IsMiPActive @ 0x1C0095BD8 (IsMiPActive.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this)
{
  char *v1; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 v3; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
  {
    v1 = (char *)this + 3568;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3568, 2);
    if ( PtiFromInputDest )
    {
      if ( IsMiPActive(PtiFromInputDest, 0LL) )
      {
        v3 = QHelper::_anonymous_namespace_::GetQ((__int64)v1);
        if ( v3 )
          *(_QWORD *)(v3 + 440) = 0LL;
      }
    }
  }
}
