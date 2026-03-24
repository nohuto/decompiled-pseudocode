/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140568CB8
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x14056730C (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C54408 )
  {
    qword_140C54408(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140C50080);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
