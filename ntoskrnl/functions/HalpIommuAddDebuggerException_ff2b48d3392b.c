__int64 HalpIommuAddDebuggerException()
{
  unsigned int *v0; // rbx
  _OWORD *MemoryInternal; // rax
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v0 = (unsigned int *)KdDebugDevice;
  if ( !KdDebugDevice || *(_DWORD *)(KdDebugDevice + 220) )
    return 0LL;
  MemoryInternal = (_OWORD *)HalpMmAllocateMemoryInternal(32, 1u);
  v2 = MemoryInternal;
  if ( MemoryInternal )
  {
    *MemoryInternal = 0LL;
    MemoryInternal[1] = 0LL;
    *((_DWORD *)MemoryInternal + 4) = *((unsigned __int16 *)v0 + 4);
    v3 = (unsigned __int64)*v0 << 8;
    v2[3] = v3;
    v4 = v3 | (8LL * (v0[1] & 0x1F));
    v2[3] = v4;
    v2[3] = v4 | (v0[1] >> 5) & 7;
    v5 = (_QWORD *)qword_140C61918;
    if ( *(__int64 **)qword_140C61918 != &HalpIommuExceptionList )
      __fastfail(3u);
    *v2 = &HalpIommuExceptionList;
    v2[1] = v5;
    *v5 = v2;
    qword_140C61918 = (__int64)v2;
    return 0LL;
  }
  return 3221225626LL;
}
