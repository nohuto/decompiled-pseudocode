/*
 * XREFs of KdpRestoreBreakPointEx @ 0x140AB1530
 * Callers:
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpoint @ 0x140AAEB50 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, char **a2)
{
  unsigned int v3; // edx
  unsigned int v5; // edx
  int *v6; // rsi
  unsigned int v7; // edi
  int v9; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v11[128]; // [rsp+50h] [rbp-A8h] BYREF

  v9 = 0;
  v3 = *(_DWORD *)(a1 + 16);
  v10[0] = 56LL;
  v10[1] = a1;
  if ( *(unsigned __int16 *)a2 == 4LL * v3
    && (KdpCopyMemoryChunks(a2[1], (__int64)v11, 4 * v3, 0, 4, &v9), v5 = *(_DWORD *)(a1 + 16), v9 == 4LL * v5) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v6 = (int *)v11;
    v7 = 0;
    if ( v5 )
    {
      do
      {
        if ( !KdpDeleteBreakpoint(*v6) )
          *(_DWORD *)(a1 + 8) = -1073741823;
        ++v7;
        ++v6;
      }
      while ( v7 < *(_DWORD *)(a1 + 16) );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v10, a2, &KdpContext);
}
