_DWORD *BuildBltAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // r13d
  int v10; // r14d
  int v11; // edi
  int v12; // r15d
  int v13; // ebp
  int v14; // r12d
  int v15; // esi
  int v16; // eax
  int v17; // ebx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v24; // r14d
  int v25; // eax
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+24h] [rbp-44h]
  int v30; // [rsp+98h] [rbp+30h]
  int v31; // [rsp+A0h] [rbp+38h]
  __int64 v32; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v32 = va_arg(va1, _QWORD);
  v9 = *a4;
  v10 = 0;
  v11 = *a3;
  v12 = 0;
  v13 = a6;
  v14 = *a4 - *a3;
  v26 = 0;
  v15 = a7 - a6;
  if ( a7 - a6 <= 0 )
    return 0LL;
  v16 = 0;
  if ( v11 >= 0 )
    v16 = *a3;
  v31 = v16;
  if ( v9 > a5 )
    v9 = a5;
  v17 = -1;
  v30 = *a8;
  v27 = *a9;
  if ( *a8 >= *a9 || v14 != v15 || (int)ALIGN_MEM((__int64 *)va, v32) < 0 || (unsigned int)v32 >= 0xFFFFFF10 )
    return 0LL;
  v18 = EngAllocMem(1u, (int)v32 + 240, 0x33355448u);
  v19 = v18;
  if ( v18 )
  {
    *((_QWORD *)v18 + 4) = v18 + 60;
    v20 = v15;
    do
    {
      --v20;
      if ( v11 < v31 || v11 >= v9 || v13 < v30 || v13 >= v27 )
      {
        if ( v17 != -1 )
          goto LABEL_26;
      }
      else
      {
        v21 = v13;
        v10 = v11;
        v12 = v13;
        if ( v17 != -1 )
          v21 = v26;
        v26 = v21;
        v22 = v11;
        if ( v17 != -1 )
          v22 = v17;
        v17 = v22;
      }
      ++v11;
      ++v13;
    }
    while ( v20 );
    if ( v17 == -1 )
    {
      EngFreeMem(v19);
      return 0LL;
    }
LABEL_26:
    *a3 = v17;
    v19[30] = v17;
    *a4 = v10;
    v24 = v10 - v17;
    *a8 = v26;
    *a9 = v12;
    *v19 = v24 + 1;
    v19[31] = v24 + 1;
    v19[28] = v14;
    v19[29] = v15;
    v25 = v12 - v26 + 1;
    v19[1] = v25;
    v19[5] = v25;
    v19[4] = v25;
  }
  return v19;
}
