/*
 * XREFs of PspInitPhase2 @ 0x140B64880
 * Callers:
 *     PsInitSystem @ 0x140B42F74 (PsInitSystem.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140205310 (RtlGetSystemTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     RtlRandom @ 0x140797410 (RtlRandom.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PspInitializeProtectedProcessParameters @ 0x14084AAB4 (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x140B649D4 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  char v4; // al
  char v6; // al
  ULONG Seed; // [rsp+38h] [rbp+10h] BYREF

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C03010, 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise();
  PsInitialSystemProcess[2].Affinity.StaticBitmap[7] = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[2].Affinity.StaticBitmap[8] = UnbiasedInterruptTime;
  v2[141] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[288] = PsInitialSystemProcess[2].Affinity.StaticBitmap[7];
  v2[289] = PsInitialSystemProcess[2].Affinity.StaticBitmap[8];
  RtlGetSystemTimePrecise();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandom(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandom(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
  if ( PspSehValidationPolicy )
  {
    v3 = MmWriteableSharedUserData;
    if ( PspSehValidationPolicy == 2 )
      v4 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 8;
    else
      v4 = *(_BYTE *)(MmWriteableSharedUserData + 725) & 0xF3 | 4;
    *(_BYTE *)(MmWriteableSharedUserData + 725) = v4;
  }
  else
  {
    v3 = MmWriteableSharedUserData;
    *(_BYTE *)(MmWriteableSharedUserData + 725) &= 0xF3u;
  }
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v6 = *(_BYTE *)(v3 + 725) & 0xCF | 0x10;
      goto LABEL_15;
    case 2:
      v6 = *(_BYTE *)(v3 + 725) & 0xCF | 0x20;
LABEL_15:
      *(_BYTE *)(v3 + 725) = v6;
      break;
    case -1:
      *(_BYTE *)(v3 + 725) |= 0x30u;
      break;
    default:
      *(_BYTE *)(v3 + 725) &= 0xCFu;
      break;
  }
  PspInitializeSystemDlls();
  return (int)PspInitializeProtectedProcessParameters((__int64)PspHostSiloGlobals) >= 0;
}
