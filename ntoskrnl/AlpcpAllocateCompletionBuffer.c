/*
 * XREFs of AlpcpAllocateCompletionBuffer @ 0x1408A05F0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpAllocateFromBitmap @ 0x1408A06D6 (AlpcpAllocateFromBitmap.c)
 */

__int64 __fastcall AlpcpAllocateCompletionBuffer(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  int v4; // ebp
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v2 = *(_QWORD *)(a1 + 360);
  v3 = (unsigned int)(a2 + 63) >> 6;
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v2 + 96) >> 2;
  v7 = v5 + 4 * ((unsigned __int64)*(unsigned int *)(v2 + 136) >> 5);
  if ( !v6 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v2 + 140);
    if ( v8 >= *(_DWORD *)(v2 + 136) )
      v9 = 0;
    else
      v9 = v8 & 0xFFFFFFE0;
    v10 = AlpcpAllocateFromBitmap(v5 + 4 * ((unsigned __int64)v9 >> 5), v7, v3);
    v11 = v10;
    if ( v10 == -2 )
      goto LABEL_9;
    if ( v10 != -1 )
      break;
    if ( !v9 )
      return 0xFFFFFFFFLL;
    v11 = AlpcpAllocateFromBitmap(v5, v5 + 4 * ((unsigned __int64)v9 >> 5), v3);
    if ( v11 != -2 )
      goto LABEL_12;
LABEL_9:
    if ( (unsigned int)++v4 >= v6 )
      goto LABEL_12;
  }
  v11 = v9 + v10;
LABEL_12:
  if ( v11 <= 0xFFFFFFFD )
  {
    *(_DWORD *)(v2 + 140) = v11 + v3;
    return v11 << 6;
  }
  return 0xFFFFFFFFLL;
}
