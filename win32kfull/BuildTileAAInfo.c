_DWORD *BuildTileAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // esi
  int v10; // r13d
  int v11; // r14d
  int v12; // ebp
  int v13; // ebx
  int v14; // r15d
  int v15; // edi
  int v16; // r12d
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // r13d
  int v24; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+90h] [rbp+28h]
  __int64 v28; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v28 = va_arg(va1, _QWORD);
  v24 = 0;
  v9 = 0;
  v10 = 0;
  v11 = *a4;
  v12 = a6;
  if ( *a3 >= 0 )
    v9 = *a3;
  v13 = v9;
  if ( v11 > a5 )
    v11 = a5;
  v14 = a7 - a6;
  if ( v11 - v9 <= 0 )
    return 0LL;
  if ( v14 <= 0 )
    return 0LL;
  v15 = -1;
  v16 = *a8;
  v27 = *a9;
  if ( *a8 >= *a9 || (int)ALIGN_MEM((__int64 *)va, v28) < 0 || (unsigned int)v28 >= 0xFFFFFF10 )
    return 0LL;
  v17 = EngAllocMem(1u, (int)v28 + 240, 0x33355448u);
  v18 = v17;
  if ( v17 )
  {
    *((_QWORD *)v17 + 4) = v17 + 60;
    v19 = a7 - a6;
    do
    {
      --v19;
      if ( v13 < v9 || v13 >= v11 || v12 < v16 || v12 >= v27 )
      {
        if ( v15 != -1 )
          goto LABEL_28;
      }
      else
      {
        v20 = v12;
        v10 = v12;
        if ( v15 != -1 )
          v20 = v24;
        v24 = v20;
        v21 = v13;
        if ( v15 != -1 )
          v21 = v15;
        v15 = v21;
      }
      if ( ++v13 >= v11 )
        v13 = v9;
      ++v12;
    }
    while ( v19 );
    if ( v15 == -1 )
    {
      EngFreeMem(v18);
      return 0LL;
    }
LABEL_28:
    v18[6] = v15 - v9;
    *a3 = v9;
    v18[30] = v9;
    *a4 = v11 - 1;
    *a8 = v24;
    *a9 = v10;
    v23 = v10 - v24;
    *v18 = v11 - v9;
    v18[31] = v11 - v9;
    v18[29] = v14;
    v18[1] = v23 + 1;
    v18[5] = v23 + 1;
    v18[4] = v23 + 1;
    v18[28] = v11 - v9;
  }
  return v18;
}
