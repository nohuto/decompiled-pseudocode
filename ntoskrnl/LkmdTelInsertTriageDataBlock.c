/*
 * XREFs of LkmdTelInsertTriageDataBlock @ 0x14067A064
 * Callers:
 *     WheapReportLiveDump @ 0x140A0663C (WheapReportLiveDump.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall LkmdTelInsertTriageDataBlock(__int64 *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rbp
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // esi
  unsigned int v12; // r11d
  _DWORD *v13; // r10
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // esi

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    return 3221225485LL;
  v7 = *a1;
  if ( (*(_DWORD *)(*a1 + 4152) & 0x800) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 8316);
    if ( v8 )
    {
      v9 = *(unsigned int *)(v7 + 8312);
      if ( v9 + 16 * (unsigned __int64)v8 <= 0x40000 )
      {
        v10 = 0x40000;
        v11 = 0;
        v12 = 0;
        v13 = (_DWORD *)(v9 + v7 + 12);
        while ( 1 )
        {
          v14 = *(v13 - 1);
          if ( v14 != ((v14 + 7) & 0xFFFFFFF8) )
            break;
          v15 = (v14 + *v13 + 7) & 0xFFFFFFF8;
          if ( v14 >= v10 )
            v14 = v10;
          v10 = v14;
          if ( v15 <= v11 )
            v15 = v11;
          v13 += 4;
          ++v12;
          v11 = v15;
          if ( v12 >= v8 )
          {
            v16 = 262140 - v15;
            if ( 262140 - v11 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > v16 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((void *)(v7 + v14 + 16), (const void *)(v7 + v14), v11 - v14);
              v17 = 0;
              v18 = *(_DWORD *)(v7 + 8316);
              v19 = v7 + *(unsigned int *)(v7 + 8312);
              if ( v18 )
              {
                do
                {
                  *(_DWORD *)(v19 + 8) += 16;
                  ++v17;
                  v18 = *(_DWORD *)(v7 + 8316);
                  v19 += 16LL;
                }
                while ( v17 < v18 );
              }
              v20 = v11 + 16;
              *(_DWORD *)(v7 + 8316) = v18 + 1;
              *(_QWORD *)v19 = a2;
              *(_DWORD *)(v19 + 8) = v20;
              *(_DWORD *)(v19 + 12) = v4;
              memmove((void *)(v7 + v20), a2, v4);
            }
            return v3;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
