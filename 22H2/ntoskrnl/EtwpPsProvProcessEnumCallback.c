/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14093EBB0
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14093EB28 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406023FC (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x140602928 (EtwpQueryProcessOtherInfo.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14062B6D8 (PsSetProcessTelemetryAppState.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     EtwpIsProcessZombie @ 0x140792A24 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  _QWORD *v5; // rcx
  bool v6; // zf
  _DWORD *v7; // r9
  struct _DMA_ADAPTER *v8; // r14
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-90h] BYREF

  v11 = 0LL;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  memset(PackageSize, 0, 0x198uLL);
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0 && Process != PsIdleProcess && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        PsSetProcessTelemetryAppState(v5, 5);
    }
    else
    {
      v6 = Process == PsIdleProcess;
      a2[8] = 0;
      if ( !v6
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v12, v7);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v8, (WCHAR *)PackageSize, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v11);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v8);
        EtwpPsProvTraceProcess(Process, v10, PackageSize, (int *)&v11, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v12, 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
