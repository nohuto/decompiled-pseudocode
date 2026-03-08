/*
 * XREFs of PspInitPhase1 @ 0x140B422C8
 * Callers:
 *     PsInitSystem @ 0x140B42F74 (PsInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     strcpy_s @ 0x1403D9D10 (strcpy_s.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x140549E3C (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B42368 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B423C0 (PspInitializeSecExtensionHost.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B42418 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B42470 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B424D0 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B42530 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B42590 (PspInitializeCpuPartitionsPhase1.c)
 *     PspInitializeNetRateControl @ 0x140B42660 (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  bool result; // al
  NTSTATUS v1; // eax
  HANDLE v2; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle) < 0
    || (int)PspInitializeCpuPartitionsPhase1() < 0 )
  {
    KeBugCheck(0x60u);
  }
  result = 0;
  if ( (unsigned __int8)PspInitializeNetRateControl() )
  {
    if ( (int)PspInitializeBackgroundActivityModeratorCallouts() >= 0
      && (int)PspInitializeDesktopActivityModeratorCallouts() >= 0
      && (int)PspInitializeMMCSSCallouts() >= 0
      && (int)PspInitializeHwTraceCallouts() >= 0
      && (int)PspInitializeOctagonExtensionHost() >= 0
      && (int)PspInitializeSecExtensionHost() >= 0 )
    {
      if ( !VslVsmEnabled )
        return 1;
      v2 = 0LL;
      if ( (int)PsCreateMinimalProcess(
                  (__int64)PsInitialSystemProcess,
                  0LL,
                  0LL,
                  BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                  0LL,
                  0,
                  0,
                  0LL,
                  0LL,
                  0LL,
                  &v2) >= 0 )
      {
        Object = 0LL;
        v1 = ObReferenceObjectByHandle(v2, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PsSecureSystemProcess = (ULONG_PTR)Object;
        if ( v1 >= 0 )
        {
          strcpy_s((char *)Object + 1448, 0xFuLL, "Secure System");
          if ( (int)VslRegisterSecureSystemProcess() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
