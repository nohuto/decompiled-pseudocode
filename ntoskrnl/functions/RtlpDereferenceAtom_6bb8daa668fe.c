char __fastcall RtlpDereferenceAtom(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v5; // zf
  __int64 *v7; // rcx
  __int64 **v8; // rax

  if ( (*((_BYTE *)a2 + 22) & 1) != 0 )
    return 0;
  v5 = (*((_WORD *)a2 + 10))-- == 1;
  if ( !v5 )
    return 0;
  if ( a2 != (__int64 *)(a1 + 16) )
  {
    v7 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v8 = (__int64 **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    RtlpFreeAtom(a2);
    if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
      return 0;
    v5 = (*(_WORD *)(a1 + 36))-- == 1;
    if ( !v5 )
      return 0;
  }
  RtlpFreeAllAtom(a1, a3);
  return 1;
}
