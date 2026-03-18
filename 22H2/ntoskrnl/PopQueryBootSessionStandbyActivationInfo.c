/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1405872B4
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D6940 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C6B058 )
  {
    qword_140C6B058(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140CF7E40);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
