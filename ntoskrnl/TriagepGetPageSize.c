/*
 * XREFs of TriagepGetPageSize @ 0x140B98E8C
 * Callers:
 *     TriagepVerifyDump @ 0x140B98EC0 (TriagepVerifyDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriagepGetPageSize(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 332;
  if ( v1 )
  {
    v2 = v1 - 120;
    if ( v2 )
    {
      v3 = v2 - 60;
      if ( !v3 )
        return 0x2000LL;
      if ( v3 != 33892 )
        return 0xFFFFFFFFLL;
    }
  }
  return 4096LL;
}
