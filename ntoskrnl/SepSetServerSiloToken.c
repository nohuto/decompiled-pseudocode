/*
 * XREFs of SepSetServerSiloToken @ 0x1409C6A80
 * Callers:
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C6570 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402BE52C (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x140773DF8 (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x1409CD020 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x1409CD544 (SepRemoveTokenLogonSession.c)
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
    if ( v5 >= 0 )
    {
      if ( HIDWORD(NlsMbOemCodePageTag) )
        SepRemoveTokenLogonSession(a1);
      SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
      *(_QWORD *)(a1 + 216) = v8;
      if ( HIDWORD(NlsMbOemCodePageTag) )
        SepAddTokenLogonSession(a1);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    }
  }
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
