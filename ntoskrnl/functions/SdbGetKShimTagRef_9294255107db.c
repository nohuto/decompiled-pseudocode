__int64 __fastcall SdbGetKShimTagRef(__int64 a1, const WCHAR *a2)
{
  void *v2; // rbx
  unsigned int FirstStringIndexedTag; // edi
  int v6; // eax
  unsigned int v8; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0;
  v2 = *(void **)(a1 + 16);
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( !v2
    || (v8 = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577, a2, (unsigned int *)v9),
        FirstStringIndexedTag = v8,
        *(void **)(a1 + 16) == v2)
    && (unsigned int)SdbFindFirstTag((__int64)v2, v8, 4120LL)
    || !FirstStringIndexedTag )
  {
    v2 = *(void **)(a1 + 8);
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v2, 28709LL, 24577, a2, (unsigned int *)v9);
  }
  v6 = SdbTagIDToTagRef(a1, v2, FirstStringIndexedTag, &v11);
  return v11 & (unsigned int)-(v6 != 0);
}
