/*
 * XREFs of sub_1403E9C00 @ 0x1403E9C00
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1403294B0 (MmFreePagesFromMdl.c)
 *     memset @ 0x140413800 (memset.c)
 *     MmUnmapReservedMapping @ 0x140531BD0 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403E9C00(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi
  ULONG v5; // edx
  ULONG v6; // edx

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(v3, v5);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePoolWithTag(v4, v6);
}
