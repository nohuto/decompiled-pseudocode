__int64 __fastcall VmpProcessUpdateSlat(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  char *v7; // rdi
  int v8; // ebp
  __int64 v9; // r8
  unsigned int v10; // r10d
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r9
  int v14; // edx
  int v15; // ecx
  int v16; // r15d
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-148h] BYREF
  char v20; // [rsp+40h] [rbp-138h] BYREF

  v19[0] = 0LL;
  v6 = a3;
  if ( a4 )
  {
    v7 = *(char **)(a4 + 24);
    v8 = *(_DWORD *)a4;
  }
  else
  {
    v7 = &v20;
    v8 = 16;
  }
  v9 = 0LL;
  v10 = 0;
  if ( a2 < 48 * v6 + a2 )
  {
    v11 = (unsigned __int64 *)(a2 + 32);
    v12 = (48 * v6 - 1) / 0x30uLL + 1;
    do
    {
      v13 = *v11;
      if ( (*v11 & 0x80000000000000LL) == 0 )
      {
        v14 = (v13 >> 51) & 2 | 0xD;
        if ( (v13 & 0x20000000000000LL) == 0 )
          v14 = (v13 >> 51) & 2 | 1;
        v15 = v14 | 0x200000;
        if ( (*v11 & 0x40000000000000LL) == 0 )
          v15 = v14;
        v16 = v15 | 0x2000000;
        if ( a5 )
          v16 = v15;
        if ( v10 != v16 || (_DWORD)v9 == v8 )
        {
          if ( (_DWORD)v9 )
          {
            VmpFillSlat(a1, v10, v9, v7, v19);
            v13 = *v11;
            LODWORD(v9) = 0;
          }
          v10 = v16;
        }
        v17 = 2LL * (unsigned int)v9;
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)&v7[8 * v17] = v13 & 0xFFFFFFFFFFFFFLL;
        *(_QWORD *)&v7[8 * v17 + 8] = v11[1];
      }
      v11 += 6;
      --v12;
    }
    while ( v12 );
    if ( (_DWORD)v9 )
      VmpFillSlat(a1, v10, v9, v7, v19);
  }
  return 0LL;
}
