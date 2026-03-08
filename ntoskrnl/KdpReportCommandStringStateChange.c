/*
 * XREFs of KdpReportCommandStringStateChange @ 0x140AB1398
 * Callers:
 *     KdpCommandString @ 0x140AB228C (KdpCommandString.c)
 * Callees:
 *     KdpSetCommonState @ 0x14036B850 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x140AADC30 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(char **a1, char **a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[240]; // [rsp+60h] [rbp-A0h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  v11 = 0;
  do
  {
    KdpSetCommonState(12338, a3, (__int64)v14);
    KdpSetContextState((__int64)v14, a3);
    memset(&v14[32], 0, 0x40uLL);
    v6 = *(unsigned __int16 *)a1;
    v7 = 127;
    *((_QWORD *)&v12 + 1) = &KdpMessageBuffer;
    if ( (unsigned __int16)v6 <= 0x7Fu )
      v7 = v6;
    KdpCopyMemoryChunks(a1[1], (__int64)&KdpMessageBuffer, v7, 0, 4, &v11);
    LOWORD(v12) = v11 + 1;
    *(_BYTE *)((unsigned __int16)(v11 + 1) + *((_QWORD *)&v12 + 1) - 1LL) = 0;
    v8 = *(unsigned __int16 *)a2;
    if ( v8 >= KdTransportMaxPacketSize - (unsigned int)(unsigned __int16)v12 - 240 )
      v8 = KdTransportMaxPacketSize - (unsigned __int16)v12 - 240;
    KdpCopyMemoryChunks(a2[1], *((_QWORD *)&v12 + 1) + (unsigned __int16)v12, v8, 0, 4, &v11);
    LOWORD(v12) = v11 + 1 + v12;
    v9 = (unsigned __int16)v12;
    *(_BYTE *)((unsigned __int16)v12 + *((_QWORD *)&v12 + 1) - 1LL) = 0;
    *((_QWORD *)&v13 + 1) = v14;
    LOWORD(v13) = 240;
    result = KdpSendWaitContinue(v9, (__int64)&v13, (__int64)&v12, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
