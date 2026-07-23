/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x1407539C8
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingDir @ 0x140964550 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964E74 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140753AB4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     SdbpGetProcessHistory @ 0x14096649C (SdbpGetProcessHistory.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 ProcessHistory; // r15
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // rax
  __int64 v6; // rsi
  size_t v7; // rdi
  __int64 result; // rax
  const char *v9; // r9
  int v10; // r8d

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(_QWORD *)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v3 = -1LL;
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v4) );
      do
        ++v3;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v3) );
      v5 = (void *)AslAlloc(a1, 2LL * (unsigned int)(v3 + v4 + 1));
      ProcessHistory = (__int64)v5;
      if ( !v5 )
      {
        v9 = "Failed to allocate process history buffer";
        v10 = 503;
        goto LABEL_17;
      }
      v6 = (unsigned int)v4;
      v7 = 2LL * (unsigned int)v4;
      memmove(v5, *(const void **)(v1 + 32), v7);
      memmove((void *)(v7 + ProcessHistory), *(const void **)(v1 + 40), 2LL * (unsigned int)v3);
      *(_WORD *)(ProcessHistory + 2 * ((unsigned int)v3 + v6)) = 0;
    }
    else
    {
      ProcessHistory = SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        v9 = "Failed to retrieve process history";
        v10 = 518;
LABEL_17:
        AslLogCallPrintf(1, (unsigned int)"SdbpInitializeSearchDBContext", v10, (_DWORD)v9);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, v1 + 72);
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
