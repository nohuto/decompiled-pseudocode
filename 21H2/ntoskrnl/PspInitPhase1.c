/*
 * XREFs of PspInitPhase1 @ 0x140B1E0A8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     PsInitSystem @ 0x140B02300 (PsInitSystem.c)
 * Callees:
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x14054F1B8 (VslRegisterSecureSystemProcess.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B1E364 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B1E3C4 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B1E41C (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B1E47C (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B1E4DC (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B1E534 (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140B1E58C (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  bool result; // al
  NTSTATUS v1; // eax
  HANDLE v2; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  if ( ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle) < 0 )
    KeBugCheck(0x60u);
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
                  PsInitialSystemProcess,
                  0LL,
                  0LL,
                  BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                  0LL,
                  0,
                  0,
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
