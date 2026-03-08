/*
 * XREFs of ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED580
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C03078EC (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 */

void __fastcall vSrcCopyS8D8IdentityLtoR(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // rdi
  unsigned __int8 *v3; // rsi
  size_t v4; // r14
  int v5; // ebp

  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v4 = *((unsigned int *)a1 + 7);
  v5 = *((_DWORD *)a1 + 8);
  do
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v3, v2, v4);
    else
      memmove(v3, v2, v4);
    v2 += *((int *)a1 + 10);
    v3 += *((int *)a1 + 11);
    --v5;
  }
  while ( v5 );
}
