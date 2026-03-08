/*
 * XREFs of ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED910
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C03078EC (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 */

void __fastcall vSrcCopyS16D16Identity(struct BLTINFO *a1)
{
  int v2; // ebp
  int v3; // r14d
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebp

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  if ( *((int *)a1 + 6) < 0 )
  {
    v6 = 2LL * (unsigned int)(v2 - 1);
    v4 -= v6;
    v5 -= v6;
  }
  v7 = 2 * v2;
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 16) )
      vSrcAlignCopyMemory(v5, v4, v7);
    else
      memmove(v5, v4, v7);
    if ( !--v3 )
      break;
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
