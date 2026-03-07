__int64 __fastcall ColorMatch(__int64 a1, int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  unsigned int v8; // r10d
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ecx

  if ( (a2 & 0x2000000) != 0 )
  {
    result = (unsigned __int16)a2 & (unsigned int)-((unsigned int)(unsigned __int16)a2 < *(_DWORD *)(a1 + 28));
    *a3 = 0;
  }
  else if ( (a2 & 0x1000000) != 0 )
  {
    *a3 = 0xFFFFFFF;
    return 0LL;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 28);
    v6 = 0;
    v7 = 0LL;
    v8 = 0xFFFFFFF;
    if ( v5 )
    {
      v9 = *(_QWORD *)(a1 + 112);
      do
      {
        v10 = *(_DWORD *)(v9 + 4 * v7);
        v11 = v8;
        if ( (v10 & 0x10000000) != 0 && (v10 & 0x1000000) == 0 )
        {
          v12 = (unsigned __int8)v10 - (unsigned __int8)a2;
          v13 = (BYTE1(v10) - BYTE1(a2)) * (BYTE1(v10) - BYTE1(a2));
          v14 = (BYTE2(v10) - BYTE2(a2)) * (BYTE2(v10) - BYTE2(a2));
          v15 = v7;
          v16 = v13 + v12 * v12 + v14;
          if ( v16 < v8 )
            v8 = v16;
          if ( v16 >= v11 )
            v15 = v6;
          v6 = v15;
          if ( !v8 )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v5 );
    }
    result = v6;
    if ( (a2 & 0x4000000) != 0 )
      v8 = 0xFFFFFFF;
    *a3 = v8;
  }
  return result;
}
