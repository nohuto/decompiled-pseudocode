__int64 *KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  char *v2; // rdx
  __int64 v3; // rcx
  __int64 *result; // rax
  __int64 v5; // [rsp+40h] [rbp-9h] BYREF
  int v6; // [rsp+48h] [rbp-1h]
  __int64 v7; // [rsp+4Ch] [rbp+3h]
  __int64 v8; // [rsp+58h] [rbp+Fh] BYREF
  int v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+64h] [rbp+1Bh]
  __int64 v11; // [rsp+70h] [rbp+27h] BYREF
  int v12; // [rsp+78h] [rbp+2Fh]
  __int64 v13; // [rsp+7Ch] [rbp+33h]
  char v14; // [rsp+B0h] [rbp+67h] BYREF
  char v15; // [rsp+B8h] [rbp+6Fh] BYREF

  v14 = 0;
  v15 = 0;
  if ( !KiBugcheckRecoveryActive && KiRecoveryCallbackCount > 0 )
  {
    if ( KiBugcheckOwnerKeepsOthersFrozen )
      __fastfail(5u);
    if ( !(unsigned __int8)KiIsRecoveryPossibleOnCurrentStack() )
    {
      v0 = 1LL;
LABEL_26:
      KiRecordRecoveryFailure(v0);
      goto LABEL_27;
    }
    v5 = 2LL;
    v7 = 0LL;
    v6 = 0x8000;
    if ( (int)KiUpdateBugcheckRecoveryProgress(&v5) < 0
      || (KiGetRecoveryInformation(&KiBugcheckRecoveryInformation),
          (int)KiSaveBugCheckRecoveryStatusPhase0(KeGetCurrentIrql(), (unsigned int)dword_140C40FA4, qword_140C40FA8) < 0)
      || (KiInvokeBugCheckEntryCallbacks(0x3FFu, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu),
          LOBYTE(v1) = byte_140C40F87,
          (int)KiSaveBugCheckRecoveryStatusPhase1(v1, (unsigned int)dword_140C40FC8) < 0) )
    {
      v0 = 5LL;
      goto LABEL_26;
    }
    if ( !byte_140C40F87 )
    {
      v0 = 2LL;
      goto LABEL_26;
    }
    word_140C021D6 |= 2u;
    v2 = 0LL;
    KiBugcheckRecoveryActive = 1;
    KiBugcheckRecoveryActiveEvaluated = 1;
    KiBugcheckRecoveryDumpPolicy = dword_140C40FC8;
    if ( byte_140C40F95 )
    {
      v14 = 0;
      v2 = &v14;
    }
    if ( KiBugCheckShouldEnterPostBugCheckDebugger(dword_140C40FA4, (__int64)v2) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "*******************************************************************************\n"
        "                           Bugcheck Recovery\n"
        "*******************************************************************************\n");
      DbgPrintEx(
        0x65u,
        0,
        " You are seeing this message because the system has bugchecked and\n is attempting a bugcheck recovery.\n");
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " System Error Info:\n"
        "     Bugcheck Code: 0x%08lx\n"
        "     Parameter 1: 0x%p\n"
        "     Parameter 2: 0x%p\n"
        "     Parameter 3: 0x%p\n"
        "     Parameter 4: 0x%p\n",
        dword_140C40FA4,
        (const void *)qword_140C40FA8,
        (const void *)qword_140C40FB0,
        (const void *)qword_140C40FB8,
        (const void *)qword_140C40FC0);
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        " Bugcheck Recovery Info Location: 0x%p\n"
        "*******************************************************************************\n"
        "\n",
        &KiBugcheckRecoveryInformation);
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( !(_BYTE)KdDebuggerNotPresent )
          KiBugCheckDebugBreak(3u);
      }
    }
    if ( (int)KiCaptureDumpPreRecovery(v3, &v15) < 0 )
      KiBugcheckRecoveryDumpPolicy |= 0x10u;
    v8 = 1LL;
    v10 = 0LL;
    v9 = 194;
    if ( (int)KiUpdateBugcheckRecoveryProgress(&v8) < 0
      || (KiScheduleBugcheckRecovery(), v11 = 1LL, v13 = 0LL, v12 = 195, (int)KiUpdateBugcheckRecoveryProgress(&v11) < 0) )
    {
      KiRecordRecoveryFailure(5LL);
    }
    if ( v15 )
      IoRevertFromDemotedDumpType();
  }
LABEL_27:
  result = &KeBugCheckTriageDumpDataArrayListHead;
  qword_140C41EB8 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  IoPreparedTriageDumpData = 0LL;
  KiBugcheckRecoveryActiveEvaluated = 1;
  return result;
}
