__int64 __fastcall VidSchiComputeWorkerThreadPriority(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r10d
  int v6; // eax
  unsigned int v7; // eax

  v2 = 16;
  if ( a2 >= 16 )
    v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(int *)(a1 + 392);
  if ( (_DWORD)v4 != v2 )
  {
    v5 = 0;
    if ( (int)v4 > 16 && (*(_DWORD *)(v3 + 4 * v4 + 2408))-- == 1 )
    {
      v5 = 1;
      *(_DWORD *)(v3 + 2472) &= ~(1 << *(_DWORD *)(a1 + 392));
    }
    if ( v2 > 16 && (v6 = *(_DWORD *)(v3 + 4LL * v2 + 2408) + 1, *(_DWORD *)(v3 + 4LL * v2 + 2408) = v6, v6 == 1) )
    {
      *(_DWORD *)(v3 + 2472) |= 1 << v2;
      *(_DWORD *)(a1 + 392) = v2;
    }
    else
    {
      *(_DWORD *)(a1 + 392) = v2;
      if ( !v5 )
        return *(unsigned int *)(v3 + 220);
    }
    v7 = *(_DWORD *)(v3 + 2472);
    if ( v7 )
      *(_DWORD *)(v3 + 220) = RtlFindMostSignificantBit(v7);
    else
      *(_DWORD *)(v3 + 220) = 16;
  }
  return *(unsigned int *)(v3 + 220);
}
