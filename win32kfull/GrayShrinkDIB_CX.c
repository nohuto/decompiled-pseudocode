/*
 * XREFs of GrayShrinkDIB_CX @ 0x1C014C7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  int v7; // r10d
  unsigned __int16 v8; // bp
  _WORD *v9; // r11
  int v10; // r9d
  __int64 v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ecx
  _BYTE v24[12]; // [rsp+0h] [rbp-28h]

  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 14) )
    {
      v7 = *(unsigned __int16 *)(a1 + 14) * *a2;
      a2 += *(unsigned __int16 *)(a1 + 10);
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_WORD *)(a1 + 12);
    v9 = *(_WORD **)(a1 + 40);
    v10 = v8;
    v11 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      do
      {
        v12 = (unsigned __int16)*v9++;
        v13 = *a2;
        v14 = v11 + ((v12 >> 5) & 0x400);
        ++a2;
        if ( (v12 & 0x4000) != 0 )
        {
          v15 = v13 * (v12 & 0x3FFF);
          *(_DWORD *)&v24[8] = v15 + v7;
          v7 = *(_DWORD *)(v14 + 4 * v13) - v15;
          --v10;
          *(_QWORD *)v24 = *(_QWORD *)&v24[4];
        }
        else
        {
          v7 += *(_DWORD *)(v14 + 4 * v13);
        }
      }
      while ( v10 );
    }
    v16 = *(_DWORD *)v24;
    v17 = *(_DWORD *)&v24[4];
    if ( v8 == 1 )
      v16 = *(_DWORD *)&v24[4];
    while ( 1 )
    {
      v22 = (unsigned __int16)*v9;
      if ( !*v9 )
        break;
      v18 = *a2;
      ++v9;
      v19 = v11 + ((v22 >> 5) & 0x400);
      if ( (v22 & 0x4000) != 0 )
      {
        v20 = v18 * (v22 & 0x3FFF);
        v21 = (6 * v17 - (v20 + v7) - v16) >> 15;
        if ( (v21 & 0xFF00) != 0 )
          LOBYTE(v21) = ~HIBYTE(v21);
        *a3 = v21;
        a3 += a5;
        *(_DWORD *)&v24[8] = v20 + v7;
        *(_QWORD *)v24 = *(_QWORD *)&v24[4];
        v17 = *(_DWORD *)&v24[4];
        v16 = *(_DWORD *)v24;
        v7 = *(_DWORD *)(v19 + 4LL * *a2) - v20;
      }
      else
      {
        v7 += *(_DWORD *)(v19 + 4 * v18);
      }
      ++a2;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v23 = (5 * *(_DWORD *)&v24[4] - v16) >> 15;
      if ( (v23 & 0xFF00) != 0 )
        LOBYTE(v23) = ~HIBYTE(v23);
      *a3 = v23;
    }
  }
}
