char __fastcall CmpFindRedirectedDriverServiceStateNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // edi
  char result; // al
  char KnownHivePathNode; // di
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12[2]; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0xFFFFFFFFLL;
  v7 = BugCheckParameter4;
  *(_OWORD *)v12 = 0LL;
  result = CmpGetStateSepKeysRedirectionPathValue(BugCheckParameter3, (__int64)&v11);
  if ( result )
  {
    KnownHivePathNode = CmpGetKnownHivePathNode(BugCheckParameter3, v7, (__int64)v12, a5, a6, a7);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
    return KnownHivePathNode;
  }
  return result;
}
