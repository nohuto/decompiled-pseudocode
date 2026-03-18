/*
 * XREFs of VerifierEngAllocMem @ 0x1C029CA60
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964 (-VerifierRandomFailure@@YAHK@Z.c)
 */

__int64 __fastcall VerifierEngAllocMem(char a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax

  v4 = a2;
  v6 = a2;
  if ( (unsigned int)VerifierRandomFailure() || !v4 )
    return 0LL;
  if ( (gvs & 8) != 0 )
  {
    if ( v4 > 0xFFFFFFDF )
      return 0LL;
    v4 += 32;
  }
  if ( v4 > 0xFFFFFFDF )
    return 0LL;
  v7 = v4 + 32;
  if ( v7 >= 0x2710000 )
    return 0LL;
  v8 = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFF3CuLL) + 260;
  if ( (a1 & 1) != 0 )
    v9 = Win32AllocPoolWithPriorityZInit(v8, v7, a3, 40LL);
  else
    v9 = Win32AllocPoolWithPriority(v8, v7, a3, 40LL);
  v10 = v9;
  if ( v9 )
  {
    MultiUserGreTrackAddEngResource(v9, 2LL);
    v10 += 32LL;
    if ( (gvs & 8) != 0 )
    {
      *(_QWORD *)(v10 + 16) = v6;
      *(_DWORD *)(v10 + 24) = a3;
      GreAcquireSemaphore(qword_1C032BFE0);
      v11 = (__int64 *)qword_1C032BFF0;
      if ( *(_UNKNOWN **)qword_1C032BFF0 != &unk_1C032BFE8 )
        __fastfail(3u);
      *(_QWORD *)v10 = &unk_1C032BFE8;
      *(_QWORD *)(v10 + 8) = v11;
      *v11 = v10;
      qword_1C032BFF0 = v10;
      EtwTraceGreLockReleaseSemaphore(L"gvs.hsemPoolTracker", qword_1C032BFE0);
      GreReleaseSemaphoreInternal(qword_1C032BFE0);
      v10 += 32LL;
    }
  }
  return v10;
}
