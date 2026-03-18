/*
 * XREFs of ExpProfileInitialization @ 0x140B754F4
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B4D6E4 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14033ABEC (KiInitializeMutant.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObCreateObjectType @ 0x140821750 (ObCreateObjectType.c)
 */

bool ExpProfileInitialization()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  KiInitializeMutant((__int64)&ExpProfileStateMutex, 0, 1, 0);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 336;
  HIDWORD(v2[3]) = 983041;
  *(_OWORD *)((char *)&v2[1] + 4) = ExpProfileMapping;
  v2[9] = ExpProfileDelete;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ExProfileObjectType) >= 0;
}
