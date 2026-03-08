/*
 * XREFs of KdpDeleteBreakpointRange @ 0x140AADCBC
 * Callers:
 *     KdpSetCommonState @ 0x14036B850 (KdpSetCommonState.c)
 * Callees:
 *     KdpDeleteBreakpoint @ 0x140AAEB50 (KdpDeleteBreakpoint.c)
 */

char __fastcall KdpDeleteBreakpointRange(unsigned __int64 a1, unsigned __int64 a2)
{
  char v2; // si
  _DWORD *v3; // rbx
  unsigned int i; // edi

  v2 = 0;
  v3 = &KdpBreakpointTable;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( (v3[8] & 1) != 0 && *(_QWORD *)v3 >= a1 && *(_QWORD *)v3 <= a2 && (unsigned __int8)KdpDeleteBreakpoint(i + 1) )
      v2 = 1;
    v3 += 10;
  }
  return v2;
}
