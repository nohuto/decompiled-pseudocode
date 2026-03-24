/*
 * XREFs of sub_1403EA300 @ 0x1403EA300
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1402D0000 (MmFreePagesFromMdl.c)
 *     memset @ 0x140414200 (memset.c)
 *     MmUnmapReservedMapping @ 0x140531C90 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403EA300(void *a1)
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
