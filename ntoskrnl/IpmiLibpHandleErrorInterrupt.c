/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x140676218
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140675B3C (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IpmiLibpHandleErrorInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ecx

  if ( (dword_140C2C7C0 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140C2C7D0 )
    return 3221225485LL;
  v5 = qword_140C2C7D0(qword_140C2C7D8, &WheaIpmiContext, a2, a3, a4, 0);
  v6 = -1073741811;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return v6;
}
