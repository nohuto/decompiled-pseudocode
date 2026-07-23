/*
 * XREFs of WmipProbeWnodeSingleInstance @ 0x14072AD64
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 * Callees:
 *     WmipProbeWnodeWorker @ 0x14072AE54 (WmipProbeWnodeWorker.c)
 */

__int64 __fastcall WmipProbeWnodeSingleInstance(_DWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  bool v6; // zf
  __int64 result; // rax
  int v8; // eax
  bool v10; // [rsp+40h] [rbp-18h]

  if ( a2 < 0x40 )
    return 3221225473LL;
  v6 = a4 == 0;
  if ( a4 )
  {
    if ( a3 < 0x40 )
      return 3221225473LL;
    v6 = a4 == 0;
  }
  v10 = v6;
  result = WmipProbeWnodeWorker(a1, 64LL, (unsigned int)a1[12], (unsigned int)a1[14], a1[15], a2, a3, a4, v10);
  if ( (int)result < 0 )
    return result;
  v8 = a1[11];
  if ( (v8 & 2) == 0 || a2 != *a1 || (v8 & 0xFFFFFF7D) != 0 )
    return 3221225473LL;
  return 0LL;
}
