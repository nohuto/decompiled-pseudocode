/*
 * XREFs of RtlpGetContextFlagsLocation @ 0x140365178
 * Callers:
 *     RtlWow64GetCpuAreaInfo @ 0x14077C93C (RtlWow64GetCpuAreaInfo.c)
 *     RtlCopyContext @ 0x1407EE220 (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetContextFlagsLocation(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( (a2 & 0x10000) == 0 )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      a1 += 48LL;
    }
    else if ( (a2 & 0x200000) == 0 )
    {
      if ( (a2 & 0x400000) != 0 )
        return a1;
      return v2;
    }
  }
  return a1;
}
