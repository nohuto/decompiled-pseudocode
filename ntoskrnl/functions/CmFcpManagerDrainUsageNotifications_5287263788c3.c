__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  _DWORD *v6; // rsi
  int v7; // r12d
  int NextForwardRunSet; // eax
  __int64 result; // rax
  unsigned int v10; // edi
  unsigned int v11; // r15d
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+60h] BYREF

  v22 = 0LL;
  v3 = a1;
  v4 = (_QWORD *)(a1 + 304);
  v5 = *v4 & 1LL;
  RtlUpdateSwapReference(v4, ((_BYTE)v5 - 1) & 1, a3);
  RtlpFcBufferManagerReferenceBuffers(v3 + 112, (__int64)&v21, &v22);
  v6 = *(_DWORD **)(v3 + 8 * v5 + 344);
  v21 = 0;
  v7 = 0;
  v18[0] = 64LL;
  v17 = *(_QWORD *)(v22 + 56);
  v16 = *(_QWORD *)(v22 + 64);
  v18[1] = v6 + 2;
  NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v18, 0, &v21);
  if ( NextForwardRunSet )
  {
    do
    {
      v10 = v21;
      v11 = v21 + NextForwardRunSet;
      if ( v21 < v21 + NextForwardRunSet )
      {
        v12 = v21;
        v13 = 3LL * v21;
        do
        {
          if ( !v6[v13 + 4] || a2 )
          {
            v14 = RtlpFcSendFeatureUsageNotifications(&v6[v13 + 5], v17, v16);
            v15 = v6[v13 + 4] + 1;
            v6[v13 + 4] = v15;
            if ( v14 >= 0 || v14 == -1073741275 || v15 < 5 )
            {
              *(_QWORD *)&v6[v13 + 4] = 0LL;
              v6[v13 + 6] = 0;
              *((_BYTE *)v6 + (v12 >> 3) + 8) &= ~(1 << (v10 & 7));
              --*v6;
            }
            else
            {
              ++v7;
            }
          }
          ++v10;
          ++v12;
          v13 += 3LL;
        }
        while ( v10 < v11 );
      }
      NextForwardRunSet = RtlFindNextForwardRunSet((__int64)v18, v11, &v21);
    }
    while ( NextForwardRunSet );
    v3 = a1;
  }
  result = RtlpFcBufferManagerDereferenceBuffers(v3 + 112, v22);
  if ( v7 )
    return CmFcpManagerArmFeatureUsageRetryTimer(v3);
  return result;
}
