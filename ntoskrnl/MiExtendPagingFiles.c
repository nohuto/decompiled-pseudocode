/*
 * XREFs of MiExtendPagingFiles @ 0x140A2FD7C
 * Callers:
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 * Callees:
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 *     MiUpdatePagingFileMinimum @ 0x14063977C (MiUpdatePagingFileMinimum.c)
 *     MiAttemptPageFileExtension @ 0x140A2F9B4 (MiAttemptPageFileExtension.c)
 */

unsigned __int64 __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 result; // rax
  unsigned int v5; // r15d
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  BOOL v8; // r14d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 *v14; // r13
  unsigned int i; // r12d

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  result = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 17048);
  if ( !v5 )
    return result;
  if ( (unsigned int)result < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * result + 17056);
    if ( *(_QWORD *)(v6 + 8) - *(_QWORD *)v6 < v3 )
      return result;
    result = MiAttemptPageFileExtension(a1, *(_QWORD *)(v1 + 8 * result + 17056), v3);
    v7 = result;
    if ( result && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      result = MiUpdatePagingFileMinimum(v6, result);
    v8 = (*(_BYTE *)(v6 + 204) & 0x50) == 0;
    goto LABEL_23;
  }
  v8 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v9 = *(_QWORD *)(v1 + 17576);
    v10 = *(_QWORD *)(v1 + 17816);
    result = v3 + v9 + *(_QWORD *)(v1 + 16432);
    if ( result < v9 )
      return result;
    if ( result <= v10 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return result;
    }
    v3 = result - v10;
  }
  v11 = 0LL;
  v12 = v1 + 17056;
  v13 = *(unsigned int *)(v1 + 17048);
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v12 + 204LL) & 0x50) == 0 )
      v11 += *(_QWORD *)(*(_QWORD *)v12 + 8LL) - **(_QWORD **)v12;
    v12 += 8LL;
    --v13;
  }
  while ( v13 );
  result = v1;
  v14 = (__int64 *)(v1 + 17056);
  if ( v11 >= v3 )
  {
    v7 = 0LL;
    for ( i = 0; i < v5; ++i )
    {
      if ( (*(_BYTE *)(*v14 + 204) & 0x50) == 0 )
      {
        result = MiAttemptPageFileExtension(a1, *v14, v3 - v7);
        v7 += result;
        if ( v7 >= v3 )
          break;
      }
      ++v14;
    }
LABEL_23:
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = v7;
      if ( v8 )
        return MiIncreaseCommitLimits(v1, v7, 0LL, 0, 0LL);
    }
  }
  return result;
}
