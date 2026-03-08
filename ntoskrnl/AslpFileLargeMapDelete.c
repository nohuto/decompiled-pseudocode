/*
 * XREFs of AslpFileLargeMapDelete @ 0x140A57074
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140A56884 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x140A56DFC (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x140A570D4 (AslpFilePartialViewFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 6);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
