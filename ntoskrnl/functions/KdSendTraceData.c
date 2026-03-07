__int64 __fastcall KdSendTraceData(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  const void **v8; // rbx
  __int64 result; // rax
  char v10; // r15
  char *v11; // r14
  __int64 v12; // rax
  __int128 v13; // [rsp+28h] [rbp-39h] BYREF
  __int128 v14; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v15[16]; // [rsp+48h] [rbp-19h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  v4 = 0;
  v5 = a2;
  if ( a2 )
  {
    v6 = (_DWORD *)(a1 + 8);
    v7 = a2;
    do
    {
      v4 += *v6;
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
  v8 = (const void **)(a1 + 8);
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v4 <= (unsigned int)result )
  {
    v10 = KdEnterDebugger(0LL);
    v11 = (char *)&KdpMessageBuffer;
    if ( a2 )
    {
      do
      {
        memmove(v11, *(v8 - 1), *(unsigned int *)v8);
        v12 = *(unsigned int *)v8;
        v8 += 2;
        v11 += v12;
        --v5;
      }
      while ( v5 );
    }
    LOWORD(v15[1]) = KeProcessorLevel;
    v15[0] = 13104;
    HIWORD(v15[1]) = KeGetPcr()->Prcb.Number;
    LOWORD(v14) = 64;
    *((_QWORD *)&v14 + 1) = v15;
    v15[2] = v4;
    LOWORD(v13) = v4;
    *((_QWORD *)&v13 + 1) = &KdpMessageBuffer;
    KdSendPacket(9LL, &v14, &v13, &KdpContext);
    return KdExitDebugger(v10);
  }
  return result;
}
