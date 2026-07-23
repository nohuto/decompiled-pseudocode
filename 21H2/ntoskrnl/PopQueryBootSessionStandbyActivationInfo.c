/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140568FB8
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x14056760C (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C54448 )
  {
    qword_140C54448(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C500C0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
