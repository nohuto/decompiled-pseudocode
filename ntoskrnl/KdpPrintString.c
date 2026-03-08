/*
 * XREFs of KdpPrintString @ 0x140AAF4EC
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403ACAF0 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x140AB2368 (KdpPrint.c)
 * Callees:
 *     KdpPollBreakInWithPortLock @ 0x1403ACB6C (KdpPollBreakInWithPortLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  char *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-40h] BYREF
  __int128 v5; // [rsp+38h] [rbp-38h] BYREF
  __int128 v6; // [rsp+48h] [rbp-28h] BYREF
  int v7; // [rsp+58h] [rbp-18h] BYREF
  __int16 v8; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  unsigned int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]

  v1 = *a1;
  v2 = (char *)*((_QWORD *)a1 + 1);
  v4 = 0;
  v11 = 0;
  v5 = 0LL;
  v6 = 0LL;
  KdpCopyMemoryChunks(v2, (__int64)&KdpMessageBuffer, v1, 0, 4, &v4);
  if ( (unsigned __int64)v4 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v4 = KdTransportMaxPacketSize - 16;
  v8 = KeProcessorLevel;
  v7 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  LOWORD(v6) = 16;
  *((_QWORD *)&v6 + 1) = &v7;
  v10 = v4;
  LOWORD(v5) = v4;
  *((_QWORD *)&v5 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v6, &v5, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
