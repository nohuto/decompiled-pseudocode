/*
 * XREFs of _QuerySendMessage @ 0x1C01FE96C
 * Callers:
 *     NtUserQuerySendMessage @ 0x1C01D9CA0 (NtUserQuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C003855C (IsPointerInputMessageWithState.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01C55AC (TranslateSentPointerMessageForClient.c)
 */

__int64 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned __int64 *v8; // r9
  __int64 *v9; // r10

  v2 = *(_QWORD *)(a1 + 512);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v4 = *(__int64 **)(v2 + 112);
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0LL;
  *(_QWORD *)a2 = v5;
  v6 = *(unsigned int *)(v2 + 104);
  *(_DWORD *)(a2 + 8) = v6;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v2 + 80);
  *(_QWORD *)(a2 + 36) = 0LL;
  if ( !(unsigned int)IsPointerInputMessageWithState(v6) && (v7 != 528 || *(_WORD *)v8 != 582) )
    return 1LL;
  LOBYTE(v3) = TranslateSentPointerMessageForClient(v7, v8, v9);
  return v3;
}
