void __fastcall sub_1403EBE80(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi

  v2 = *(void **)(a1 + 8);
  v3 = *(struct _MDL **)a1;
  v4 = *(void **)(a1 + 24);
  if ( v2 )
    MmUnmapReservedMapping(v2, *(_DWORD *)(a1 + 16), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePool(v3);
  }
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  ExFreePool(v4);
}
