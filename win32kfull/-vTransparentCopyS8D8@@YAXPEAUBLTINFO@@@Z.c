/*
 * XREFs of ?vTransparentCopyS8D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0299F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS8D8(struct BLTINFO *a1)
{
  unsigned __int8 *v1; // r8
  __int64 v2; // r14
  int v3; // esi
  int v4; // r10d
  _BYTE *v5; // r9
  unsigned __int8 *v6; // rdi
  _BYTE *v7; // rbx
  int i; // r11d
  __int64 v9; // rax

  v1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  while ( v4 )
  {
    --v4;
    v6 = v1;
    v7 = v5;
    for ( i = v3; i; ++v7 )
    {
      v9 = *v6;
      --i;
      ++v6;
      if ( (_DWORD)v9 != *((_DWORD *)a1 + 37) )
        *v7 = *(_BYTE *)(v2 + 4 * v9);
    }
    v1 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
