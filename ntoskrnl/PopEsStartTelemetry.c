/*
 * XREFs of PopEsStartTelemetry @ 0x14085F8B4
 * Callers:
 *     PopEsWorker @ 0x140870CA0 (PopEsWorker.c)
 *     PopEsExitSleep @ 0x14099534C (PopEsExitSleep.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(&v3);
  v1 = 0;
  PopEsAcOnline = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  PopEsLastBatteryThreshold = dword_140C3D4D0;
  result = byte_140C3D4D5;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140C3D4D5;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
