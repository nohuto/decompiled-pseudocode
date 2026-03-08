/*
 * XREFs of ?vTransparentCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C014DAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vTransparentCopyS24D24Identity(struct BLTINFO *a1)
{
  int v1; // esi
  int v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  _BYTE *v6; // r10
  unsigned __int8 *v7; // rdi
  int v8; // eax
  int v9; // edx
  int v10; // edx

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v2 )
  {
    --v2;
    v5 = v1;
    if ( v1 )
    {
      v6 = (_BYTE *)(v4 + 2);
      v7 = (unsigned __int8 *)(v3 + 1);
      do
      {
        v8 = *v7;
        --v5;
        v9 = v7[1];
        v7 += 3;
        v10 = *(v7 - 4) | ((v8 | (v9 << 8)) << 8);
        if ( v10 != *((_DWORD *)a1 + 37) )
        {
          *(v6 - 2) = v10;
          *v6 = BYTE2(v10);
          *(v6 - 1) = BYTE1(v10);
        }
        v6 += 3;
      }
      while ( v5 );
    }
    v3 += *((int *)a1 + 10);
    v4 += *((int *)a1 + 11);
  }
}
