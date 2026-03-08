/*
 * XREFs of ?vTransparentCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0299DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS8D24(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r9
  int v3; // esi
  __int64 v4; // r14
  int v5; // r11d
  __int64 v6; // r10
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  int v11; // ecx

  v2 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + *((int *)a1 + 12));
  v3 = *((_DWORD *)a1 + 7);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v5 )
  {
    --v5;
    v7 = v2;
    v8 = v3;
    if ( v3 )
    {
      v9 = (_BYTE *)(v6 + 2);
      do
      {
        v10 = *v7;
        --v8;
        ++v7;
        if ( (_DWORD)v10 != *((_DWORD *)a1 + 37) )
        {
          v11 = *(_DWORD *)(v4 + 4 * v10);
          *(v9 - 2) = v11;
          *v9 = BYTE2(v11);
          *(v9 - 1) = BYTE1(v11);
        }
        v9 += 3;
      }
      while ( v8 );
    }
    v2 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
