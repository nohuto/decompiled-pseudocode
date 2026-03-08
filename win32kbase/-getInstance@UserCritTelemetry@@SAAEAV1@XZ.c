/*
 * XREFs of ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004FA98
 * Callers:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

struct UserCritTelemetry *UserCritTelemetry::getInstance(void)
{
  if ( (dword_1C02D1900 & 1) == 0 )
  {
    dword_1C02D1900 |= 1u;
    memset(&unk_1C02D1910, 0, 0x1128uLL);
    word_1C02D2A38 = 0;
    byte_1C02D2A3A = 0;
    memset(&unk_1C02D2A40, 0, 0x168uLL);
    qword_1C02D2BB8 = 0LL;
    qword_1C02D2BD0 = 0LL;
    xmmword_1C02D2BA8 = 0LL;
    qword_1C02D2BE8 = 0LL;
    xmmword_1C02D2BC0 = 0LL;
    xmmword_1C02D2BF0 = 0uLL;
    xmmword_1C02D2BD8 = 0LL;
  }
  return (struct UserCritTelemetry *)&unk_1C02D1910;
}
