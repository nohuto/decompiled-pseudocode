/*
 * XREFs of ?vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02EB620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D1(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  char v2; // dl
  int v3; // r12d
  _BYTE *v4; // rbx
  __int64 v5; // r13
  unsigned __int8 *v6; // r10
  int v7; // r11d
  _BYTE *v8; // r14
  int v9; // r9d
  unsigned __int8 *v10; // rsi
  char v11; // bp
  char v12; // r15
  int v13; // r9d

  LOBYTE(v1) = 0;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  while ( 1 )
  {
    v7 = *((_DWORD *)a1 + 12);
    v8 = v4;
    v9 = *((_DWORD *)a1 + 14);
    if ( (v7 & 1) != 0 )
      LOBYTE(v1) = *v6;
    v10 = v6 + 1;
    if ( (*((_DWORD *)a1 + 12) & 1) == 0 )
      v10 = v6;
    if ( (v9 & 7) != 0 )
      v2 = *v4 >> (8 - (v9 & 7));
    if ( v7 != *((_DWORD *)a1 + 13) )
    {
      v11 = v1;
      do
      {
        v2 *= 2;
        v12 = v2;
        if ( (v7 & 1) != 0 )
        {
          v2 |= 1u;
          if ( !*(_DWORD *)(v5 + 4LL * (v11 & 0xF)) )
            v2 = v12;
        }
        else
        {
          v1 = *v10++;
          v11 = v1;
          if ( *(_DWORD *)(v5 + 4 * ((unsigned __int64)v1 >> 4)) )
            v2 |= 1u;
        }
        LOBYTE(v9) = v9 + 1;
        ++v7;
        if ( (v9 & 7) == 0 )
          *v8++ = v2;
      }
      while ( v7 != *((_DWORD *)a1 + 13) );
    }
    v13 = v9 & 7;
    if ( v13 )
    {
      v1 = 255 >> v13;
      v2 <<= 8 - v13;
      *v8 = (255 >> v13) & *v8 | v2 & ~(255 >> v13);
    }
    if ( !--v3 )
      break;
    v6 += *((int *)a1 + 10);
    v4 += *((int *)a1 + 11);
  }
}
