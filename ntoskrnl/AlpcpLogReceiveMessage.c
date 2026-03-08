/*
 * XREFs of AlpcpLogReceiveMessage @ 0x14097743C
 * Callers:
 *     AlpcpReceiveDirectMessagePort @ 0x140769704 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407CFC50 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x1409771E8 (AlpcpInvokeLogCallbacks.c)
 */

signed __int32 __fastcall AlpcpLogReceiveMessage(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  LODWORD(v5) = 2;
  v4 = v1;
  DWORD2(v5) = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
