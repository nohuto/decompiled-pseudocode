/*
 * XREFs of KdpLowRestoreBreakpoint @ 0x140AB2934
 * Callers:
 *     KdpRestoreAllBreakpoints @ 0x140AB2B38 (KdpRestoreAllBreakpoints.c)
 * Callees:
 *     KdpIsBreakpoint @ 0x140565C58 (KdpIsBreakpoint.c)
 *     KdpCopyCodeStream @ 0x140AB2660 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140AB28D0 (KdpInsertBreakpoint.c)
 */

char __fastcall KdpLowRestoreBreakpoint(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  int inserted; // eax
  int v5; // ecx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ++KdpBreakpointChangeCount;
  v1 = (char *)&KdpBreakpointTable + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x10) == 0 && (unsigned int)KdpIsBreakpoint((__int64)v1, v1 + 24) == 1 )
      return 1;
    if ( (int)KdpCopyCodeStream(
                (char *)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
                (__int64)&v6,
                (unsigned __int8)v1[36],
                4) >= 0 )
    {
      inserted = KdpInsertBreakpoint((__int64)v1, &v6);
      v5 = *((_DWORD *)v1 + 8);
      if ( inserted )
      {
        *((_DWORD *)v1 + 8) = v5 ^ ((unsigned __int8)inserted ^ (unsigned __int8)v5) & 2;
        return 1;
      }
      *((_DWORD *)v1 + 8) = v5 | 2;
    }
    else
    {
      *((_DWORD *)v1 + 8) |= 2u;
    }
    return 0;
  }
  *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFF7;
  return 1;
}
