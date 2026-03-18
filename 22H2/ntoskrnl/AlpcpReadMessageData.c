/*
 * XREFs of AlpcpReadMessageData @ 0x14071BF58
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715C44 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BC00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B350 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073DAE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C497C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, char *a2)
{
  __int64 v2; // rbx
  size_t v5; // rbx
  size_t v6; // rsi
  const void *v7; // rdx
  char *v8; // rcx

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32) - 40LL;
  else
    v5 = 512LL;
  v6 = *(unsigned __int16 *)(a1 + 240);
  v7 = (const void *)(a1 + 280);
  v8 = a2;
  if ( v6 > v5 )
  {
    memmove(a2, v7, v5);
    v7 = *(const void **)(a1 + 224);
    v8 = &a2[v5];
    v6 -= v5;
  }
  return memmove(v8, v7, v6);
}
