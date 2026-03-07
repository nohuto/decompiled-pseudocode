__int64 __fastcall PiReleaseDDB(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    SdbReleaseDatabase(v2);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    ZwClose(v4);
  v5 = *(void **)(a1 + 24);
  if ( v5 )
    ZwClose(v5);
  return 0LL;
}
