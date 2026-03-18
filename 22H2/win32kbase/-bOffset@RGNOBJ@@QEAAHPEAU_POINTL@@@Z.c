/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C005C000
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0153F90 (-vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bOffset(int **this, struct _POINTL *a2)
{
  int *v2; // r11
  unsigned int v3; // r8d
  __int64 x; // r15
  __int64 y; // rbp
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v14; // r10d
  unsigned int *v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // r9
  __int128 v18; // [rsp+20h] [rbp-48h]

  v2 = *this;
  v3 = 1;
  x = a2->x;
  y = a2->y;
  if ( (*this)[13] != 1 )
  {
    v7 = v2[14];
    v8 = v2[16];
    v9 = v2[15];
    v10 = v2[17];
    if ( (int)v7 < (int)v8 && (int)v9 < (int)v10 )
    {
      if ( (unsigned __int64)(x + v7 + 0x80000000LL) > 0xFFFFFFFF
        || (unsigned __int64)(v10 + y + 0x80000000LL) > 0xFFFFFFFF
        || (v11 = x + v8, (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF)
        || (v12 = y + v9, DWORD2(v18) = v11, (unsigned __int64)(v12 + 0x80000000LL) > 0xFFFFFFFF)
        || (DWORD1(v18) = v12,
            (((_DWORD)x + (_DWORD)v7) & 0xF8000000) != 0 && (((_DWORD)x + (_DWORD)v7) & 0xF8000000) != -134217728)
        || (((((_DWORD)v10 + (_DWORD)y) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v11 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
        || (((v12 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
      {
        EngSetLastError(0x216u);
        return 0;
      }
      else
      {
        LODWORD(v18) = x + v7;
        HIDWORD(v18) = v10 + y;
        *(_OWORD *)(v2 + 14) = v18;
        v14 = (*this)[13];
        v15 = (unsigned int *)*((_QWORD *)*this + 4);
        while ( v14 )
        {
          v15[1] += y;
          --v14;
          v15[2] += y;
          v16 = *v15;
          if ( (_DWORD)v16 )
          {
            v17 = &v15[v16 + 3];
            do
            {
              *--v17 += x;
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          v15 += *v15 + 4;
        }
        v15[-*(v15 - 1) - 2] = 0x7FFFFFFF;
        *(_DWORD *)(*((_QWORD *)*this + 4) + 4LL) = 0x80000000;
      }
    }
  }
  return v3;
}
