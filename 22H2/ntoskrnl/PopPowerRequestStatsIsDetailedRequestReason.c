/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A84C0
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140317590 (PsGetCurrentProcess.c)
 *     strncmp @ 0x1403D8830 (strncmp.c)
 *     Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994 (Feature_2932140347__private_IsEnabledDeviceUsage.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v3; // ecx
  _KPROCESS *CurrentProcess; // r15
  int v5; // esi
  const char **i; // r14
  const char *v7; // rbp
  BOOL v8; // ecx
  size_t v9; // r8
  const char *v10; // rcx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = *(_DWORD *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v3 & 1) == 0 && (v3 & 2) != 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        if ( (unsigned int)Feature_2932140347__private_IsEnabledDeviceUsage() || *(_QWORD *)(a1 + 8) )
        {
          v5 = 0;
          for ( i = (const char **)PopPowerRequestStatsVerboseProcessList; ; ++i )
          {
            v7 = *i;
            v8 = Feature_2932140347__private_IsEnabledDeviceUsage() != 0;
            v9 = -1LL;
            do
              ++v9;
            while ( v7[v9] );
            v10 = v8 ? (const char *)&CurrentProcess[1].ActiveProcessors : (const char *)(*(_QWORD *)(a1 + 8) + 1448LL);
            if ( !strncmp(v10, v7, v9) )
              break;
            if ( (unsigned int)++v5 >= 2 )
              return v1;
          }
          return 1;
        }
      }
    }
  }
  return v1;
}
