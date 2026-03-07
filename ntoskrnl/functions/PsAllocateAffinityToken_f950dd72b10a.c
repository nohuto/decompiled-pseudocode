__int64 __fastcall PsAllocateAffinityToken(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // eax

  Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned __int16)KiMaximumGroups + 40, 1952543568LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v4 = Pool2 + 32;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
  v5 = (unsigned __int16)KiMaximumGroups;
  *(_DWORD *)(v4 + 4) = 0;
  *(_WORD *)v4 = 1;
  *(_WORD *)(v4 + 2) = v5;
  memset((void *)(v4 + 8), 0, 8LL * v5);
  *(_QWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 8) = 0LL;
  *a1 = v3;
  return 0LL;
}
