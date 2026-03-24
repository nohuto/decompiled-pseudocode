/*
 * XREFs of vDrawGlyph @ 0x1C016BEEC
 * Callers:
 *     vStringBitmapTextOut @ 0x1C016C0AC (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // r9d
  int v7; // r11d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // rcx
  char v17; // r14
  __int64 v18; // rbp
  unsigned int v19; // r8d
  __int64 v20; // r14
  _BYTE *v21; // r9
  _BYTE *v22; // rcx
  unsigned int i; // edx
  __int64 v24; // r12
  unsigned int v25; // ebp
  unsigned __int8 *v26; // r8
  _BYTE *v27; // r9
  unsigned int v28; // edi
  unsigned __int16 v29; // dx
  unsigned __int8 *v30; // r8
  __int64 v32; // [rsp+40h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 8);
  v5 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 12LL);
  if ( v6 && v7 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = *(_DWORD *)(a3 + 20);
    v10 = *(_QWORD *)v3 + 16LL;
    v11 = (unsigned int)(v6 + 7) >> 3;
    if ( v8 < 0 )
    {
      LODWORD(v3) = -v8;
      if ( v6 <= -v8 )
        return v3;
      v6 -= v8;
      v8 = 0;
    }
    if ( v9 < 0 )
    {
      LODWORD(v3) = -v9;
      if ( v7 <= -v9 )
        return v3;
      v7 -= v9;
      v9 = 0;
    }
    if ( (unsigned int)v8 < *a1 )
    {
      v12 = a1[1];
      if ( v9 < v12 )
      {
        v13 = *a1 - v8;
        if ( v13 >= v6 )
          v13 = v6;
        v14 = v12 - v9;
        if ( v14 >= v7 )
          v14 = v7;
        v15 = (__int64)a1 + (unsigned int)(v5 * v9) + ((__int64)v8 >> 3) + 8;
        v16 = v5;
        v32 = v5;
        v17 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
          v24 = ((_BYTE)v13 + (_BYTE)v8) & 7;
          v25 = ((v13 + v8) >> 3) - (v8 >> 3);
          do
          {
            v26 = (unsigned __int8 *)v10;
            v27 = (_BYTE *)v15;
            v10 += v11;
            v15 += v16;
            v28 = v25;
            v29 = *v26;
            v30 = v26 + 1;
            while ( v28 )
            {
              LOWORD(v3) = v29 >> v17;
              --v28;
              *v27++ |= v29 >> v17;
              v29 <<= 8;
              if ( v30 != (unsigned __int8 *)v10 )
              {
                LOWORD(v3) = *v30;
                v29 |= v3;
                ++v30;
              }
            }
            if ( (_DWORD)v24 )
              *v27 |= byte_1C02EEE30[v24] & (unsigned __int8)(v29 >> v17);
            v16 = v32;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v18 = v13 & 7;
          v19 = v13 >> 3;
          v20 = v16;
          do
          {
            v21 = (_BYTE *)v10;
            v22 = (_BYTE *)v15;
            v10 += v11;
            v15 += v20;
            for ( i = v19; i; --i )
            {
              LOBYTE(v3) = *v21++;
              *v22++ |= v3;
            }
            if ( (_DWORD)v18 )
            {
              LOBYTE(v3) = byte_1C02EEE30[v18] & *v21;
              *v22 |= v3;
            }
            --v14;
          }
          while ( v14 );
        }
      }
    }
  }
  return v3;
}
