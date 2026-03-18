/*
 * XREFs of sub_1403F94E0 @ 0x1403F94E0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapReservedMapping @ 0x1405858A0 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403F94E0(__int64 a1, ULONG a2)
{
  void *v3; // rcx
  struct _MDL *v4; // rdi
  void *v5; // rsi
  ULONG v6; // edx

  v3 = *(void **)(a1 + 8);
  v4 = *(struct _MDL **)a1;
  v5 = *(void **)(a1 + 24);
  if ( v3 )
    MmUnmapReservedMapping(v3, *(_DWORD *)(a1 + 16), v4);
  if ( v4 )
  {
    MmFreePagesFromMdl(v4);
    ExFreePoolWithTag(v4, v6);
  }
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  ExFreePoolWithTag(v5, a2);
}
