/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1409ECC80
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1409ECBF4 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpQueryProcessOtherInfo @ 0x14071DD1C (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14071DD5C (EtwpQueryTokenPackageInfo.c)
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     EtwpIsProcessZombie @ 0x14080E0B0 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  struct _KPROCESS *v5; // rcx
  bool v6; // zf
  ULONG_PTR v7; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12[104]; // [rsp+70h] [rbp-90h] BYREF

  v10 = 0LL;
  v4 = 0;
  memset(&v11, 0, sizeof(v11));
  memset(v12, 0, 0x198uLL);
  if ( !EtwpIsProcessZombie((__int64)BugCheckParameter1) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0
        && BugCheckParameter1 != PsIdleProcess
        && (HIDWORD(BugCheckParameter1[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        PsSetProcessTelemetryAppState(v5, 5);
      }
    }
    else
    {
      v6 = BugCheckParameter1 == PsIdleProcess;
      a2[8] = 0;
      if ( !v6
        && KeGetCurrentThread()->ApcState.Process != BugCheckParameter1
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v11);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v9 = 0;
        v7 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
        EtwpQueryTokenPackageInfo(v7, (__int64)v12, &v9);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v10);
        ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[1].Affinity.StaticBitmap[5], v7, 0x746C6644u);
        EtwpPsProvTraceProcess((__int64)BugCheckParameter1, v9, v12, (int *)&v10, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess(&v11);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
