/*
 * XREFs of SepSetServerSiloToken @ 0x14091CDC4
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140243B50 (SepDeReferenceLogonSessionDirect.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     SepReferenceLogonSessionSilo @ 0x1406CBF7C (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x140923830 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x140923D30 (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( SeTokenLeakTracking )
      SepRemoveTokenLogonSession(a1);
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_QWORD *)(a1 + 216) = v8;
    if ( SeTokenLeakTracking )
      SepAddTokenLogonSession(a1);
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_10:
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
