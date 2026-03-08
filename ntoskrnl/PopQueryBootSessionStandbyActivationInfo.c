/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140584D84
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1403D1420 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140C6ABE8 )
  {
    qword_140C6ABE8(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140CF7A00);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
