/*
 * XREFs of PopPowerRequestStatsIsDetailedRequestReason @ 0x14073C588
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x14073C3F4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     strncmp @ 0x1403D3310 (strncmp.c)
 */

char __fastcall PopPowerRequestStatsIsDetailedRequestReason(__int64 a1)
{
  char v1; // bl
  int v4; // ecx
  int v5; // esi
  const char **i; // r14
  const char *v7; // rdx
  size_t v8; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = *(_DWORD *)((a1 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v4 & 1) == 0 && (v4 & 2) != 0 && *(_QWORD *)(a1 + 8) )
      {
        v5 = 0;
        for ( i = (const char **)PopPowerRequestStatsVerboseProcessList; ; ++i )
        {
          v7 = *i;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          if ( !strncmp((const char *)(*(_QWORD *)(a1 + 8) + 1448LL), v7, v8) )
            break;
          if ( (unsigned int)++v5 >= 2 )
            return v1;
        }
        return 1;
      }
    }
  }
  return v1;
}
