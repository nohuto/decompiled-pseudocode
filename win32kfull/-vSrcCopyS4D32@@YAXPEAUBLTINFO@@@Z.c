/*
 * XREFs of ?vSrcCopyS4D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00D0E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D32(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  int v2; // edx
  int v3; // r14d
  int v4; // r10d
  _DWORD *v5; // rsi
  unsigned __int8 *v6; // r8
  __int64 v7; // r15
  _DWORD *v8; // rbx
  char v9; // r11
  unsigned __int8 *v10; // r9
  unsigned __int64 v11; // rax

  LOBYTE(v1) = 0;
  v2 = *((_DWORD *)a1 + 12);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 13);
  v5 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)v2 >> 1));
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  while ( 1 )
  {
    v8 = v5;
    if ( (v2 & 1) != 0 )
      LOBYTE(v1) = *v6;
    if ( v2 != v4 )
    {
      v9 = v1;
      v10 = v6 + 1;
      if ( (v2 & 1) == 0 )
        v10 = v6;
      do
      {
        if ( (v2 & 1) != 0 )
        {
          v11 = v9 & 0xF;
        }
        else
        {
          v1 = *v10++;
          v9 = v1;
          v11 = (unsigned __int64)v1 >> 4;
        }
        ++v2;
        *v8++ = *(_DWORD *)(v7 + 4 * v11);
        v4 = *((_DWORD *)a1 + 13);
      }
      while ( v2 != v4 );
      v2 = *((_DWORD *)a1 + 12);
    }
    if ( !--v3 )
      break;
    v6 += *((int *)a1 + 10);
    v5 = (_DWORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
