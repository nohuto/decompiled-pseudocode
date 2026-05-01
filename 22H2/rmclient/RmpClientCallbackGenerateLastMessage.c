/*
 * XREFs of RmpClientCallbackGenerateLastMessage @ 0x180008620
 * Callers:
 *     RmpClientSubscriptionDeliverPayload @ 0x180008580 (RmpClientSubscriptionDeliverPayload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpClientCallbackGenerateLastMessage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r8
  __int64 v6; // rcx

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  v4 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v4;
  if ( v4 )
  {
    if ( v4 != 1 )
      return result;
    v5 = *(_QWORD *)(a1 + 80);
    v6 = *(_QWORD *)(a1 + 48);
    result = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a2 + 24) = v5;
    *(_DWORD *)(a2 + 32) = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 80);
    result = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a2 + 24) = 0;
  }
  *(_QWORD *)(a2 + 16) = v6;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
