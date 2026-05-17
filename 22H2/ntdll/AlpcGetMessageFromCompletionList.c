/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x180010A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall AlpcGetMessageFromCompletionList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r11
  signed __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rbx

  v2 = a1 + 320;
  RtlAcquireSRWLockExclusive(a1 + 320);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 16) >> 2;
  v7 = a1 + *(unsigned int *)(a1 + 12);
  do
  {
    v8 = v5;
    v9 = v5 & 0xFFFFFF;
    if ( (v5 & 0xFFFFFF) == 0xFFFFFF || v9 >= v6 || (v10 = (v5 >> 24) & 0xFFFFFF, v10 >= v6) )
    {
      v14 = 0LL;
      goto LABEL_13;
    }
    v11 = *(unsigned int *)(v7 + 4 * (v5 & 0xFFFFFF));
    if ( v9 == v10 )
      v12 = v5 | 0xFFFFFFFFFFFFLL;
    else
      v12 = v5 ^ (v5 ^ ((v9 + 1) % v6)) & 0xFFFFFF;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v12, v5);
  }
  while ( v5 != v8 );
  v13 = 0;
  v14 = v11 + a1 + *(unsigned int *)(a1 + 28);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (((_BYTE)v14 + (unsigned __int8)*(_WORD *)(v14 + 2)) & 7) != 0 )
        v13 = 8 - (((_BYTE)v14 + (unsigned __int8)*(_WORD *)(v14 + 2)) & 7);
      *a2 = v14 + *(unsigned __int16 *)(v14 + 2) + v13;
    }
    else
    {
      *a2 = 0LL;
    }
  }
LABEL_13:
  RtlReleaseSRWLockExclusive(v2);
  return v14;
}
