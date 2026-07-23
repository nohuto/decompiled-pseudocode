/*
 * XREFs of PspInitPhase1 @ 0x140A4C338
 * Callers:
 *     PsInitSystem @ 0x140A4D2F8 (PsInitSystem.c)
 * Callees:
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x1404FD384 (VslRegisterSecureSystemProcess.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140A48BDC (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140A48C3C (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140A48C94 (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140A48CF4 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140A48D54 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140A48DAC (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140A48E04 (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  NTSTATUS inserted; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool result; // al
  NTSTATUS v16; // eax
  HANDLE v17; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  inserted = ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle);
  v2 = 0LL;
  if ( inserted < 0 )
    v2 = (unsigned int)inserted;
  if ( (int)v2 < 0 )
    KeBugCheck(0x60u);
  result = 0;
  if ( PspInitializeNetRateControl(v2, v1) )
  {
    if ( (int)PspInitializeBackgroundActivityModeratorCallouts(v4, v3) >= 0
      && (int)PspInitializeDesktopActivityModeratorCallouts(v6, v5) >= 0
      && (int)PspInitializeMMCSSCallouts(v8, v7) >= 0
      && (int)PspInitializeHwTraceCallouts(v10, v9) >= 0
      && (int)PspInitializeOctagonExtensionHost(v12, v11) >= 0
      && (int)PspInitializeSecExtensionHost(v14, v13) >= 0 )
    {
      if ( !VslVsmEnabled )
        return 1;
      v17 = 0LL;
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
                  &v17) >= 0 )
      {
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(v17, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PsSecureSystemProcess = (ULONG_PTR)Object;
        if ( v16 >= 0 )
        {
          strcpy_s((char *)Object + 1448, 0xFuLL, "Secure System");
          if ( VslRegisterSecureSystemProcess() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
