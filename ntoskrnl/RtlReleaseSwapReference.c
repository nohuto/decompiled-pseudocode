/*
 * XREFs of RtlReleaseSwapReference @ 0x1402F03F8
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140614CE8 (CmFcManagerNotifyFeatureUsage.c)
 * Callees:
 *     RtlBackoff @ 0x140241660 (RtlBackoff.c)
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 */

void __fastcall RtlReleaseSwapReference(volatile signed __int64 *a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  volatile signed __int64 *v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  volatile signed __int64 v7; // rtt
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  v9 = 0;
  v4 = a1;
  while ( 1 )
  {
    _m_prefetchw((const void *)v4);
    v5 = *v4;
    v6 = *v4 & 1;
    if ( v6 != v3 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v7 = *v4;
    if ( v7 == _InterlockedCompareExchange64(v4, v6 | (2 * (v5 >> 1) - 2), v5) )
      return;
    RtlBackoff(&v9);
  }
  if ( _InterlockedExchangeAdd64(v4 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    _InterlockedOr(v8, v2);
    if ( *((_QWORD *)v4 + 2) != v2 )
      ExpUnblockPushLock(v4 + 2, 0LL, 0);
  }
}
