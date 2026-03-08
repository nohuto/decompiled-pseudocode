/*
 * XREFs of KdpCreateRemoteFile @ 0x140AADE64
 * Callers:
 *     KdPullRemoteFileEx @ 0x140AADD80 (KdPullRemoteFileEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCreateRemoteFile(_QWORD *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v6; // si
  _QWORD *v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  char *v10; // rcx
  int v11; // eax
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-79h] BYREF
  __int128 v15; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v17[8]; // [rsp+60h] [rbp-49h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v6 = KdEnterDebugger(0LL);
  v7 = KdpRemoteFiles;
  v8 = 0;
  while ( *v7 )
  {
    ++v8;
    ++v7;
    if ( v8 >= 0x10 )
    {
      HIDWORD(v17[0]) = -1073741801;
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    v9 = *a3;
    v16[1] = v17;
    v16[0] = 4194368LL;
    v10 = (char *)*((_QWORD *)a3 + 1);
    v15 = 0LL;
    v14 = 0;
    v17[0] = 13360LL;
    v17[1] = 0x8000120089LL;
    LODWORD(v17[2]) = 1;
    *(_QWORD *)((char *)&v17[2] + 4) = 1LL;
    KdpCopyMemoryChunks(v10, (__int64)&KdpMessageBuffer, v9, 0, 4, &v14);
    LOWORD(v15) = v14 + 2;
    *((_QWORD *)&v15 + 1) = &KdpMessageBuffer;
    *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v14 + 2) - 2) = 0;
    KdSendPacket(11LL, v16, &v15, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      break;
    WORD1(v15) = 12288;
    *((_QWORD *)&v15 + 1) = &KdpMessageBuffer;
    if ( !(unsigned int)KdReceivePacket(11LL, v16, &v15, &v14, &KdpContext) )
    {
      v11 = HIDWORD(v17[0]);
      goto LABEL_8;
    }
  }
  v11 = -1073740972;
  HIDWORD(v17[0]) = -1073740972;
LABEL_8:
  if ( v11 >= 0 )
  {
    KdpRemoteFiles[v8] = v17[4];
    *a1 = v8 + 1;
    if ( a2 )
    {
      v13 = v17[5];
      if ( v17[5] >= 0x10000000uLL )
        v13 = 4096LL;
      *a2 = v13;
    }
  }
LABEL_9:
  KdExitDebugger(v6);
  return HIDWORD(v17[0]);
}
