/*
 * XREFs of ?vTransparentCopyS8D8Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0299FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS8D8Identity(struct BLTINFO *a1)
{
  unsigned __int8 *v1; // rdx
  _BYTE *v2; // r8
  int v3; // edi
  int v4; // r9d
  unsigned __int8 *v5; // rbx
  _BYTE *v6; // rax
  int i; // r10d
  int v8; // r11d

  v1 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  while ( v4 )
  {
    --v4;
    v5 = v1;
    v6 = v2;
    for ( i = v3; i; ++v6 )
    {
      v8 = *v5;
      --i;
      ++v5;
      if ( v8 != *((_DWORD *)a1 + 37) )
        *v6 = v8;
    }
    v1 += *((int *)a1 + 10);
    v2 += *((int *)a1 + 11);
  }
}
