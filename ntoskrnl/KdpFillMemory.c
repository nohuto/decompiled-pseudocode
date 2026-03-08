/*
 * XREFs of KdpFillMemory @ 0x140AB0F00
 * Callers:
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // eax
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v8; // edi
  __int16 v9; // dx
  int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rsi
  char *v13; // rbp
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a1;
  v6 = *(unsigned __int16 *)(a1 + 30);
  v8 = 0;
  v16 = 0LL;
  v9 = *(_WORD *)(v5 + 28);
  v10 = 5;
  v11 = v6 + v2;
  v12 = v2;
  if ( (v9 & 2) != 0 )
  {
    v10 = 7;
  }
  else if ( (v9 & 1) == 0 )
  {
    v3 = -1073741811;
  }
  if ( (_WORD)v6 && *(_WORD *)a2 >= (unsigned __int16)v6 )
  {
    if ( v3 >= 0 )
    {
      v13 = *(char **)(v5 + 16);
      if ( v4 )
      {
        do
        {
          --v4;
          v3 = KdpCopyMemoryChunks(v13, v12, 1u, 0, v10, &v18);
          if ( v3 < 0 )
            break;
          v14 = v12 + 1;
          ++v13;
          ++v8;
          v12 = v2;
          if ( v14 != v11 )
            v12 = v14;
        }
        while ( v4 );
        v5 = a1;
        if ( v8 )
          v3 = 0;
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  *(_DWORD *)(v5 + 8) = v3;
  *(_DWORD *)(v5 + 24) = v8;
  LOWORD(v16) = 56;
  *((_QWORD *)&v16 + 1) = v5;
  return KdSendPacket(2LL, &v16, 0LL, &KdpContext);
}
