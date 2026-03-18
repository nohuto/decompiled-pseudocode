/*
 * XREFs of ?vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D8(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  _BYTE *v2; // r9
  __int64 v3; // r15
  int v4; // r14d
  int v5; // r11d
  unsigned __int8 *v6; // rdx
  int v7; // r8d
  _BYTE *v8; // rsi
  char v9; // bl
  unsigned __int8 *v10; // r10
  unsigned __int64 v11; // rax

  LOBYTE(v1) = 0;
  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 13);
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  do
  {
    v7 = *((_DWORD *)a1 + 12);
    v8 = v2;
    if ( (v7 & 1) != 0 )
      LOBYTE(v1) = *v6;
    if ( v7 < v5 )
    {
      v9 = v1;
      v10 = v6 + 1;
      if ( (*((_DWORD *)a1 + 12) & 1) == 0 )
        v10 = v6;
      do
      {
        if ( (v7 & 1) != 0 )
        {
          v11 = v9 & 0xF;
        }
        else
        {
          v1 = *v10++;
          v9 = v1;
          v11 = (unsigned __int64)v1 >> 4;
        }
        ++v7;
        *v8++ = *(_BYTE *)(v3 + 4 * v11);
        v5 = *((_DWORD *)a1 + 13);
      }
      while ( v7 < v5 );
    }
    v6 += *((int *)a1 + 10);
    v2 += *((int *)a1 + 11);
    --v4;
  }
  while ( v4 );
}
