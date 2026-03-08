/*
 * XREFs of vDrawGlyph @ 0x1C02A2B58
 * Callers:
 *     vStringBitmapTextOut @ 0x1C02A2F94 (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // r9d
  int v7; // r11d
  unsigned int v8; // edx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int64 v14; // r13
  unsigned int v15; // r10d
  unsigned __int64 v16; // r11
  char v17; // r14
  __int64 v18; // r14
  unsigned int v19; // r8d
  _BYTE *v20; // r9
  _BYTE *v21; // rcx
  unsigned int i; // edx
  unsigned int v23; // ebp
  __int64 v24; // r12
  unsigned __int8 *v25; // r8
  _BYTE *v26; // r9
  unsigned int v27; // edi
  unsigned __int16 v28; // dx
  unsigned __int8 *v29; // r8
  __int64 v31; // [rsp+40h] [rbp+18h]

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
    if ( (v8 & 0x80000000) != 0 )
    {
      LODWORD(v3) = -v8;
      if ( v6 <= (signed int)-v8 )
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
    if ( v8 < *a1 )
    {
      v12 = a1[1];
      if ( v9 < v12 )
      {
        v13 = *a1 - v8;
        v14 = v5;
        if ( v13 >= v6 )
          v13 = v6;
        v15 = v12 - v9;
        if ( v15 >= v7 )
          v15 = v7;
        v16 = (unsigned __int64)a1 + ((unsigned __int64)v8 >> 3) + (unsigned int)(v5 * v9) + 8;
        v17 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
          v3 = (unsigned int)v11;
          v23 = ((v13 + v8) >> 3) - (v8 >> 3);
          v31 = (unsigned int)v11;
          v24 = ((_BYTE)v13 + (_BYTE)v8) & 7;
          do
          {
            v25 = (unsigned __int8 *)v10;
            v26 = (_BYTE *)v16;
            v10 += v3;
            v16 += v14;
            v27 = v23;
            v28 = *v25;
            v29 = v25 + 1;
            if ( v23 )
            {
              do
              {
                --v27;
                *v26++ |= v28 >> v17;
                v28 <<= 8;
                if ( v29 != (unsigned __int8 *)v10 )
                  v28 |= *v29++;
              }
              while ( v27 );
              v3 = v31;
            }
            if ( (_DWORD)v24 )
              *v26 |= byte_1C032A698[v24] & (unsigned __int8)(v28 >> v17);
            --v15;
          }
          while ( v15 );
        }
        else
        {
          v18 = v13 & 7;
          v19 = v13 >> 3;
          do
          {
            v20 = (_BYTE *)v10;
            v21 = (_BYTE *)v16;
            v10 += v11;
            v16 += v5;
            for ( i = v19; i; --i )
            {
              LOBYTE(v3) = *v20++;
              *v21++ |= v3;
            }
            if ( (_DWORD)v18 )
            {
              LOBYTE(v3) = byte_1C032A698[v18] & *v20;
              *v21 |= v3;
            }
            --v15;
          }
          while ( v15 );
        }
      }
    }
  }
  return v3;
}
