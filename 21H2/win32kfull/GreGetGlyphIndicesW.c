/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C0114AC8
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C01148E0 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C02BC4D0 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00997C0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(HDC a1, WCHAR *a2, unsigned int a3, _WORD *a4, unsigned int a5, int a6)
{
  _WORD *v7; // rsi
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int16 v12; // r12
  unsigned int *v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // r13d
  int v16; // eax
  unsigned __int64 v17; // rax
  __int16 v18; // cx
  unsigned __int64 v19; // rcx
  unsigned int *v21; // [rsp+30h] [rbp-78h]
  _QWORD v22[14]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  v7 = a4;
  v8 = -1;
  v9 = (unsigned __int64)&a4[a3];
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v10 = 0LL;
  if ( v22[0] )
  {
    v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, (struct XDCOBJ *)v22, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v24 + 504));
    if ( v24 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v24 + 120) + 32LL);
      v12 = *(unsigned __int8 *)(v11 + 108);
      if ( a3 )
      {
        v13 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v21 = v13;
        v14 = v13;
        if ( v13 )
        {
          v15 = a5;
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v24, a2, a3, v13, a5, a6);
          v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 120) + 16LL) + 4LL);
          if ( (v16 & 6) != 0 )
          {
            if ( (v16 & 2) != 0 && v12 )
            {
              v17 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  v18 = *(_WORD *)v14;
                  if ( *(_WORD *)v14 != 0xFFFF || v15 != 1 )
                    v18 += v12;
                  *v7 = v18;
                  ++v14;
                  ++v7;
                  ++v10;
                }
                while ( v10 < v17 );
              }
            }
            else
            {
              v19 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v19 = 0LL;
              if ( v19 )
              {
                do
                {
                  ++v10;
                  *v7++ = *(_WORD *)v14++;
                }
                while ( v10 < v19 );
              }
            }
            v8 = a3;
          }
          Win32FreePool(v21);
        }
      }
      else if ( *(_DWORD *)(v11 + 4) <= 8u )
      {
        v8 = 0;
      }
      else
      {
        v8 = *(_DWORD *)(v11 + 200);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v8;
}
