/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x1402C9C30
 * Callers:
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNtStatusToDosErrorNoTeb(NTSTATUS Status)
{
  ULONG result; // eax
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r11
  unsigned int v6; // eax
  unsigned int v7; // r10d
  int v8; // eax

  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)Status;
    if ( (Status & 0xF0000000) == 0xD0000000 )
      Status &= 0xCFFFFFFF;
    v2 = 0;
    v3 = 324;
    while ( 1 )
    {
      v4 = (v2 + v3) >> 1;
      v5 = v4;
      v6 = RtlpRunTable[v4];
      v7 = Status - v6;
      if ( Status >= v6 )
      {
        if ( v7 < BYTE4(RtlpRunTable[v5]) )
        {
          v8 = HIWORD(RtlpRunTable[v5]);
          if ( BYTE5(RtlpRunTable[v5]) == 1 )
            return (unsigned __int16)RtlpStatusTable[v7 + v8];
          else
            return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v8] << 16);
        }
        v2 = v4 + 1;
      }
      else
      {
        v3 = v4 - 1;
      }
      if ( v2 > v3 )
      {
        if ( (Status & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)Status;
        else
          return 317;
      }
    }
  }
  return result;
}
