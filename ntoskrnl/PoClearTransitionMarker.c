/*
 * XREFs of PoClearTransitionMarker @ 0x14085A768
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     ExIsSoftBoot @ 0x140380700 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpSystemBootStatusRequest @ 0x14073AEEC (RtlpSystemBootStatusRequest.c)
 *     RtlUnlockBootStatusData @ 0x14073D1B0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14073DD00 (RtlLockBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14085A8FC (RtlInitializeBootStatusDataBlackBox.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14085A9C0 (PopRecordLongPowerButtonPressDetected.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  int v2; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v7; // [rsp+30h] [rbp-9h] BYREF
  __int128 *v8; // [rsp+38h] [rbp-1h]
  int v9; // [rsp+40h] [rbp+7h]
  int v10; // [rsp+48h] [rbp+Fh]
  __int128 *v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+60h] [rbp+27h]
  char *v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v5 = 0;
  if ( (int)RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v7 = 7;
  v8 = &PopBsdPowerTransition;
  v0 = 2;
  v9 = 32;
  v11 = &PopBsdPowerTransitionExtension;
  v1 = 1;
  v10 = 16;
  v12 = 32;
  if ( ExIsSoftBoot() )
  {
    v13 = 5;
    v14 = &v5;
    v1 = 0;
    v0 = 3;
    v15 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140C6A3D0 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140CF7850 = 0LL;
  HIDWORD(xmmword_140C6A3D0) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140C39C8C = 3;
  *(_QWORD *)&xmmword_140C6A3D0 = MEMORY[0xFFFFF78000000014];
  v2 = RtlComputeCrc32(0, (char *)&xmmword_140C6A3D0, 8LL);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140C6A3D0) = v2;
  RtlpSystemBootStatusRequest(32, (__int64)&v7, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  LOBYTE(v3) = v1;
  result = PopRecordLongPowerButtonPressDetected(0LL, v3);
  PopAcpiPdttSupportEnabled = 0;
  return result;
}
