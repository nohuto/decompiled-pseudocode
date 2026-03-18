/*
 * XREFs of WmipProbeWnodeSingleItem @ 0x1409DDFF0
 * Callers:
 *     WmipIoControl @ 0x1406C3540 (WmipIoControl.c)
 * Callees:
 *     WmipProbeWnodeWorker @ 0x1406C3918 (WmipProbeWnodeWorker.c)
 */

__int64 __fastcall WmipProbeWnodeSingleItem(_DWORD *a1, UINT a2)
{
  __int64 result; // rax
  int v5; // eax

  if ( a2 < 0x44 )
    return 3221225473LL;
  result = WmipProbeWnodeWorker((__int64)a1, 0x44u, a1[12], a1[15], a1[16], a2, 0, 0, 1);
  if ( (int)result < 0 )
    return result;
  v5 = a1[11];
  if ( (v5 & 4) != 0 && a2 == *a1 && (v5 & 0xFFFFFF7B) == 0 )
    return 0LL;
  else
    return 3221225473LL;
}
