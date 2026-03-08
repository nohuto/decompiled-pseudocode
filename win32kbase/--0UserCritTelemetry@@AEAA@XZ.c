/*
 * XREFs of ??0UserCritTelemetry@@AEAA@XZ @ 0x1C00D5944
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

UserCritTelemetry *__fastcall UserCritTelemetry::UserCritTelemetry(UserCritTelemetry *this)
{
  UserCritTelemetry *result; // rax

  memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
  word_1C02D2A38 = 0;
  byte_1C02D2A3A = 0;
  memset(&unk_1C02D2A40, 0, 0x168uLL);
  result = (UserCritTelemetry *)stru_1C02D1910;
  xmmword_1C02D2BF0 = 0LL;
  qword_1C02D2BB8 = 0LL;
  xmmword_1C02D2BA8 = 0LL;
  qword_1C02D2BD0 = 0LL;
  xmmword_1C02D2BC0 = 0LL;
  qword_1C02D2BE8 = 0LL;
  xmmword_1C02D2BD8 = 0LL;
  return result;
}
