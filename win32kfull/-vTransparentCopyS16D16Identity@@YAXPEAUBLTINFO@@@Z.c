/*
 * XREFs of ?vTransparentCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0298DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS16D16Identity(struct BLTINFO *a1)
{
  int v1; // esi
  int v2; // r10d
  __int64 v3; // rax
  int v4; // r8d
  _WORD *v5; // rdx
  _WORD *v6; // r9
  _WORD *v7; // rdi
  _WORD *v8; // r11
  int i; // ebx
  int v10; // eax

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  if ( v3 )
    v4 = **(_DWORD **)(v3 + 112) | *(_DWORD *)(*(_QWORD *)(v3 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v3 + 112) + 8LL);
  else
    LOWORD(v4) = -1;
  v5 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v6 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    --v2;
    v7 = v5;
    v8 = v6;
    for ( i = v1; i; ++v8 )
    {
      --i;
      v10 = (unsigned __int16)(v4 & *v7++);
      if ( v10 != *((_DWORD *)a1 + 37) )
        *v8 = v10;
    }
    v5 = (_WORD *)((char *)v5 + *((int *)a1 + 10));
    v6 = (_WORD *)((char *)v6 + *((int *)a1 + 11));
  }
}
