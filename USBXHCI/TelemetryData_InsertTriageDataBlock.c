__int64 __fastcall TelemetryData_InsertTriageDataBlock(__int64 *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int v11; // r11d
  _DWORD *v12; // r10
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // esi

  v3 = 0;
  v4 = a3;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v6 = *a1;
  if ( (*(_DWORD *)(*a1 + 4152) & 0x800) != 0 )
  {
    v7 = *(_DWORD *)(v6 + 8316);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v6 + 8312);
      if ( v8 + 16 * (unsigned __int64)v7 <= 0x40000 )
      {
        v9 = 0x40000;
        v10 = 0;
        v11 = 0;
        v12 = (_DWORD *)(v8 + v6 + 12);
        while ( 1 )
        {
          v13 = *(v12 - 1);
          if ( v13 != ((v13 + 7) & 0xFFFFFFF8) )
            break;
          v14 = (v13 + *v12 + 7) & 0xFFFFFFF8;
          if ( v13 >= v9 )
            v13 = v9;
          v9 = v13;
          if ( v14 <= v10 )
            v14 = v10;
          v12 += 4;
          ++v11;
          v10 = v14;
          if ( v11 >= v7 )
          {
            if ( 262140 - v14 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v14 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((void *)(v6 + v13 + 16), (const void *)(v6 + v13), v14 - v13);
              v15 = 0;
              v16 = *(_DWORD *)(v6 + 8316);
              v17 = v6 + *(unsigned int *)(v6 + 8312);
              if ( v16 )
              {
                do
                {
                  *(_DWORD *)(v17 + 8) += 16;
                  ++v15;
                  v16 = *(_DWORD *)(v6 + 8316);
                  v17 += 16LL;
                }
                while ( v15 < v16 );
              }
              v18 = v10 + 16;
              *(_DWORD *)(v6 + 8316) = v16 + 1;
              *(_QWORD *)v17 = a2;
              *(_DWORD *)(v17 + 8) = v18;
              *(_DWORD *)(v17 + 12) = v4;
              memmove((void *)(v6 + v18), a2, v4);
            }
            return v3;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
