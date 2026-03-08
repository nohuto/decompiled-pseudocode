/*
 * XREFs of KdpPromptString @ 0x140AB2D4C
 * Callers:
 *     KdpPrompt @ 0x140AB24E8 (KdpPrompt.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 */

char __fastcall KdpPromptString(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  char *v3; // rcx
  int v5; // eax
  unsigned int v6; // r8d
  char *v7; // rcx
  unsigned int v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-18h] BYREF
  __int16 v13; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  unsigned int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  KdpCopyMemoryChunks(v3, (__int64)&KdpMessageBuffer, v2, 0, 4, &v9);
  if ( (unsigned __int64)v9 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v9 = KdTransportMaxPacketSize - 16;
  v13 = KeProcessorLevel;
  v12 = 12849;
  Number = KeGetPcr()->Prcb.Number;
  v16 = *(unsigned __int16 *)(a2 + 2);
  v15 = v9;
  LOWORD(v10) = v9;
  *((_QWORD *)&v11 + 1) = &v12;
  LOWORD(v11) = 16;
  *((_QWORD *)&v10 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v11, &v10, &KdpContext);
  WORD1(v11) = 16;
  WORD1(v10) = 12288;
  do
  {
    v5 = KdReceivePacket(3LL, &v11, &v10, &v9, &KdpContext);
    if ( v5 == 2 )
      return 1;
  }
  while ( v5 );
  v6 = v9;
  v7 = *(char **)(a2 + 8);
  if ( v9 > *(unsigned __int16 *)(a2 + 2) )
    v6 = *(unsigned __int16 *)(a2 + 2);
  v9 = v6;
  KdpCopyMemoryChunks(v7, (__int64)&KdpMessageBuffer, v6, 0, 5, &v9);
  *(_WORD *)a2 = v9;
  return 0;
}
