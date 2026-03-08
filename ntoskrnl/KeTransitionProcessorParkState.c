/*
 * XREFs of KeTransitionProcessorParkState @ 0x14057B3EC
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x14045B1CC (PpmParkReportUnparkedCore.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14057A918 (KiForceIdleParkUnparkProcessor.c)
 *     PpmParkReportParkedCore @ 0x14059AC6C (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059AD7C (PpmParkReportSoftParkChange.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14057C38C (KiUnparkCurrentProcessor.c)
 */

void __fastcall KeTransitionProcessorParkState(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v3; // r12
  __int64 v5; // rbx
  int v7; // r15d
  __int64 v8; // rbx
  char v9; // al
  char v10; // al
  char v11; // al
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 192);
  v3 = 1;
  v12 = 0LL;
  v5 = *(_QWORD *)(a1 + 200);
  if ( (v5 & *(_QWORD *)(v2 + 88)) != 0 )
    v7 = ((v5 & *(_QWORD *)(v2 + 96)) != 0) + 1;
  else
    v7 = 0;
  SpinLock = (PEX_SPIN_LOCK)(v2 + 112);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 112));
  KiAcquirePrcbLocksForIsolationUnit(a1, 0, &v12);
  if ( !v7 )
  {
    *(_QWORD *)(v2 + 88) |= v5;
    if ( a2 != 2 )
      goto LABEL_12;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    if ( a2 == 2 )
    {
LABEL_6:
      *(_QWORD *)(v2 + 96) |= v5;
      goto LABEL_12;
    }
    v8 = ~v5;
  }
  else
  {
    v8 = ~v5;
    *(_QWORD *)(v2 + 96) &= v8;
    if ( a2 )
      goto LABEL_12;
  }
  *(_QWORD *)(v2 + 88) &= v8;
LABEL_12:
  v9 = *(_BYTE *)(a1 + 35);
  if ( !a2 )
  {
    v10 = v9 & 0xF9;
    *(_BYTE *)(a1 + 35) = v10;
    if ( (v10 & 8) == 0 )
      goto LABEL_21;
    KiUnparkCurrentProcessor(a1, v2, &v12);
    goto LABEL_20;
  }
  if ( a2 == 1 )
    v11 = v9 & 0xF9 | 2;
  else
    v11 = v9 | 6;
  *(_BYTE *)(a1 + 35) = v11;
  if ( (v11 & 8) == 0 )
  {
    KiParkCurrentProcessor(a1, v2, &v12, 0LL);
LABEL_20:
    v3 = 0;
  }
LABEL_21:
  if ( v12 )
    KiReleasePrcbLocksForIsolationUnit(&v12);
  if ( v3 )
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
}
