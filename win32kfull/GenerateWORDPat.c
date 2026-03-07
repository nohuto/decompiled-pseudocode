__int64 __fastcall GenerateWORDPat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int8 *v13; // r14
  int v14; // r11d
  unsigned __int8 **v15; // r13
  unsigned __int8 *v16; // r10
  unsigned int v17; // r9d
  unsigned __int8 *v18; // rdx
  unsigned int v19; // ecx
  int v20; // r8d
  unsigned __int8 v21; // al
  char *v22; // rdi
  unsigned int v23; // edx
  char v24; // cl
  int v25; // r8d
  unsigned int v26; // r10d
  int v27; // eax
  __int64 v28; // rax
  int v30; // [rsp+20h] [rbp-68h]
  _QWORD v32[3]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a5;
  v8 = 0;
  if ( !a5 )
    return 0LL;
  if ( a5 > a6 )
    return 0LL;
  v9 = a7;
  if ( !a7 )
    return 0LL;
  v32[2] = a1;
  v10 = a7 * (unsigned __int64)a5;
  v32[0] = a3;
  v11 = a6 - a5;
  v32[1] = a2;
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  v12 = 8LL * (unsigned int)v10;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v13 = (unsigned __int8 *)EngAllocMem(1u, v12, 0x32355448u);
  if ( !v13 )
    return 0LL;
  v14 = 3 * v11;
  v30 = 3 * v11;
  v15 = (unsigned __int8 **)v32;
  while ( 1 )
  {
    v16 = *v15;
    v17 = v9;
    v18 = v13;
    v19 = v8;
    do
    {
      v20 = v7;
      --v17;
      do
      {
        v21 = *v16++;
        *((_DWORD *)v18 + 1) = v19;
        v19 += 3;
        *v18 = v21;
        v18 += 8;
        --v20;
      }
      while ( v20 );
      v7 = a5;
      v19 += v14;
    }
    while ( v17 );
    v22 = (char *)v13;
    qsort(v13, (unsigned int)v10, 8uLL, (int (__cdecl *)(const void *, const void *))SCDataCompare);
    v9 = a7;
    LOWORD(v23) = 0;
    v24 = 0;
    v25 = a7 * a5;
    v26 = v13[8 * (unsigned int)(v10 - 1)];
    if ( (_DWORD)v10 )
    {
      do
      {
        v27 = (unsigned __int8)*v22;
        --v25;
        if ( (_BYTE)v27 != v24 )
        {
          v24 = *v22;
          v23 = ((v26 >> 1) + 4095 * v27) / v26;
        }
        v28 = *((unsigned int *)v22 + 1);
        v22 += 8;
        *(_WORD *)&a4[2 * v28] = v23;
      }
      while ( v25 );
      v7 = a5;
    }
    ++v8;
    ++v15;
    if ( v8 >= 3 )
      break;
    v14 = v30;
  }
  ExpandHTPatX(a4, v7, a7, a6);
  EngFreeMem(v13);
  return 1LL;
}
