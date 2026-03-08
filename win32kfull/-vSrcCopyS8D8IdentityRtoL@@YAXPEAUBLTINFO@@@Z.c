/*
 * XREFs of ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED610
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C03078EC (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 */

void __fastcall vSrcCopyS8D8IdentityRtoL(struct BLTINFO *a1)
{
  size_t v1; // r15
  unsigned __int8 *v3; // rbx
  int v4; // ebp
  unsigned __int8 *v5; // rdi

  v1 = *((unsigned int *)a1 + 7);
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12) - v1 + 1);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14) - v1 + 1);
  do
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v5, v3, v1);
    else
      memmove(v5, v3, v1);
    v3 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
    --v4;
  }
  while ( v4 );
}
