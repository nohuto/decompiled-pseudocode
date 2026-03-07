__int64 __fastcall MiScanRelocationPage(int a1, unsigned int a2, int a3, _WORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // rbp
  int v9; // r13d
  unsigned int v10; // r12d
  int v11; // edx
  int v12; // r9d
  int v13; // esi
  unsigned int v14; // r14d
  __int16 v15; // ax
  unsigned __int16 v16; // bx
  int v17; // eax
  int v18; // r8d
  __int64 result; // rax
  int v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  v6 = a5;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = a3;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL);
  if ( a3 )
  {
    while ( 1 )
    {
      --v13;
      v15 = *a4 >> 12;
      v16 = *a4 & 0xFFF;
      switch ( v15 )
      {
        case 10:
          v17 = v16;
          if ( v16 > 0xFF8u )
          {
            v9 = 0;
            v11 = 1;
            v10 = 8;
          }
          break;
        case 0:
          v18 = v8 + v16;
          goto LABEL_8;
        case 3:
          if ( v16 > 0xFFCu )
          {
            v11 = 1;
            v9 = 2;
            v10 = 4;
          }
          v17 = v16;
          break;
        default:
          return 3221226089LL;
      }
      if ( (v8 & 0xFFF) != 0 && v17 + (unsigned int)(v8 & 0xFFF) > 0xFFE )
        return 3221226089LL;
      v18 = v17 + v8;
      if ( v17 + (int)v8 < v14 )
        return 3221226089LL;
      a1 = v20;
LABEL_8:
      if ( v11 )
      {
        if ( v12 )
          return 3221225595LL;
        result = MiCreateFixupRecord(v6, a1, v18, v9, v10, (__int64)a4, a6);
        if ( (int)result < 0 )
          return result;
        if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 )
        {
          a5 = 0LL;
          if ( (MiOffsetToProtos(v6, v8 + v16 + (unsigned __int64)v10, (unsigned __int64 *)&a5)[8] & 4) != 0 )
            return 3221225595LL;
        }
        v11 = 0;
        v12 = 1;
      }
      ++a4;
      if ( !v13 )
        return 0LL;
      a1 = v20;
    }
  }
  return 0LL;
}
