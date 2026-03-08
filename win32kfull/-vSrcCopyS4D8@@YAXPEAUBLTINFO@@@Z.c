/*
 * XREFs of ?vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D8(struct BLTINFO *a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  _BYTE *v3; // rdi
  int v4; // r15d
  __int64 v5; // r14
  int v6; // r10d
  unsigned __int8 *v7; // r8
  _BYTE *v8; // rsi
  char v9; // r11
  unsigned __int8 *v10; // r9
  unsigned __int64 v11; // rax

  v1 = *((_DWORD *)a1 + 12);
  LOBYTE(v2) = 0;
  v3 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v4 = *((_DWORD *)a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = *((_DWORD *)a1 + 13);
  v7 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)v1 >> 1));
  do
  {
    v8 = v3;
    if ( (v1 & 1) != 0 )
      LOBYTE(v2) = *v7;
    if ( v1 < v6 )
    {
      v9 = v2;
      v10 = v7 + 1;
      if ( (v1 & 1) == 0 )
        v10 = v7;
      do
      {
        if ( (v1 & 1) != 0 )
        {
          v11 = v9 & 0xF;
        }
        else
        {
          v2 = *v10++;
          v9 = v2;
          v11 = (unsigned __int64)v2 >> 4;
        }
        ++v1;
        *v8++ = *(_BYTE *)(v5 + 4 * v11);
        v6 = *((_DWORD *)a1 + 13);
      }
      while ( v1 < v6 );
      v1 = *((_DWORD *)a1 + 12);
    }
    v7 += *((int *)a1 + 10);
    v3 += *((int *)a1 + 11);
    --v4;
  }
  while ( v4 );
}
