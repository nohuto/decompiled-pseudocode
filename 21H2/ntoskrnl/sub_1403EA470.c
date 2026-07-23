/*
 * XREFs of sub_1403EA470 @ 0x1403EA470
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403EA470(void *a1)
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
