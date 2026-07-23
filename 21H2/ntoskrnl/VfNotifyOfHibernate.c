/*
 * XREFs of VfNotifyOfHibernate @ 0x1409CDB8C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x1405A0914 (VfIsVerifierExtensionEnabled.c)
 *     VfDisableHalVerifier @ 0x1405A11C8 (VfDisableHalVerifier.c)
 */

void __fastcall VfNotifyOfHibernate(char a1)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v2; // rcx
  int IsVerifierExtensionEnabled; // eax
  __int64 v4; // rcx
  char v5; // r9
  int v6; // r11d

  if ( a1 )
  {
    if ( ViVerifyDma )
    {
      ViEnableAfterHibernate = 1;
      VfDisableHalVerifier();
    }
  }
  else
  {
    if ( !ViEnableAfterHibernate )
      return;
    Flink = ViAdapterList.Flink;
    ViVerifyDma = 1;
    ViEnableAfterHibernate = 0;
    while ( &ViAdapterList != Flink )
    {
      v2 = Flink[1].Flink;
      if ( v2 )
        v2->Blink = (struct _LIST_ENTRY *)&ViDmaOperations;
      Flink = Flink->Flink;
    }
  }
  IsVerifierExtensionEnabled = VfIsVerifierExtensionEnabled();
  if ( IsVerifierExtensionEnabled == v6 )
  {
    if ( ViFnExtensionHiberFunc )
    {
      LOBYTE(v4) = v5;
      ((void (__fastcall *)(__int64))ViFnExtensionHiberFunc)(v4);
    }
  }
}
