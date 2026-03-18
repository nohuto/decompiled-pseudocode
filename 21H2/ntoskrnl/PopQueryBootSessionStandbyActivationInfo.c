/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1405CA044
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x14039A1C4 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C5AD98 )
  {
    qword_140C5AD98(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C542C0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
