/*
 * XREFs of xxxComputeInputSinkInfo @ 0x1C0005EBC
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0058830 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     EditionHandleMitSignal @ 0x1C00C10A0 (EditionHandleMitSignal.c)
 * Callees:
 *     memset @ 0x1C016DE00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG xxxComputeInputSinkInfo()
{
  LONG result; // eax
  __int64 v1; // rax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  _OWORD v7[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[112]; // [rsp+A0h] [rbp-60h] BYREF

  result = IsInputThread();
  if ( (_BYTE)result )
  {
    memset(v7, 0, 56);
    LODWORD(v7[0]) = HIDWORD(gInputSinkInfoRetrieval[0]);
    v1 = *(_QWORD *)((char *)gInputSinkInfoRetrieval + 4);
    *(_QWORD *)&v7[3] = 0LL;
    *(_QWORD *)((char *)&v7[1] + 4) = v1;
    result = DCompHitTest(v8, v7, 0LL, 0LL, 0LL);
  }
  if ( !LODWORD(gInputSinkInfoRetrieval[1]) )
  {
    result = (unsigned int)memset(v7, 0, sizeof(v7));
    gInputSinkInfoRetrieval[0] = v7[0];
    v2 = v7[2];
    gInputSinkInfoRetrieval[1] = v7[1];
    v3 = v7[3];
    gInputSinkInfoRetrieval[2] = v2;
    v4 = v7[4];
    gInputSinkInfoRetrieval[3] = v3;
    v5 = v7[5];
    gInputSinkInfoRetrieval[4] = v4;
    v6 = v7[6];
    gInputSinkInfoRetrieval[5] = v5;
    gInputSinkInfoRetrieval[6] = v6;
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    return KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return result;
}
