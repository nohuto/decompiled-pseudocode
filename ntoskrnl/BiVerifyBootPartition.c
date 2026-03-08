/*
 * XREFs of BiVerifyBootPartition @ 0x140830EA8
 * Callers:
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiVerifyBootPartition(int *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, unsigned int *a6)
{
  _QWORD *v6; // r11
  unsigned int v7; // r13d
  char *v8; // rdi
  int v9; // eax
  _DWORD *v10; // rbp
  _DWORD *v11; // r14
  _DWORD *v12; // rsi
  unsigned int v13; // eax
  int v14; // ebx
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // r8
  _DWORD *v19; // r11
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  size_t v23; // rbx
  unsigned int v24; // r15d
  char *Pool2; // rax
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+98h] [rbp+10h]
  _QWORD *v28; // [rsp+A0h] [rbp+18h]
  _QWORD *v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = 0;
  v6 = a2;
  v7 = 0;
  v8 = 0LL;
  v9 = *a1;
  if ( *a1 == 2 )
  {
    v11 = a1 + 4;
    v13 = 32;
    v12 = a1 + 8;
  }
  else
  {
    if ( v9 == 6 )
    {
      v10 = a1 + 4;
LABEL_4:
      v11 = 0LL;
      v12 = v10 + 4;
      v13 = 32;
      goto LABEL_5;
    }
    if ( v9 == 10 )
    {
      v16 = (unsigned int)a1[9];
      if ( *(int *)((char *)a1 + v16 + 16) != 6 )
        return (unsigned int)-1073741811;
      v10 = (int *)((char *)a1 + v16 + 32);
      goto LABEL_4;
    }
    if ( v9 != 8 )
      return (unsigned int)-1073741811;
    v17 = a1[6];
    if ( !v17 )
      return (unsigned int)-1073741811;
    v13 = v17 + 16;
    v11 = 0LL;
    v12 = (int *)((char *)a1 + v13);
  }
  v10 = 0LL;
LABEL_5:
  if ( !*v12 )
  {
LABEL_6:
    v14 = 0;
    if ( v6 )
      *v6 = v10;
    if ( a3 )
      *a3 = v11;
    if ( a4 )
      *a4 = v12;
    if ( a6 )
      *a6 = v7;
    if ( a5 )
    {
      *a5 = v8;
      v8 = 0LL;
    }
    goto LABEL_16;
  }
  if ( *v12 != 6 )
    return (unsigned int)-1073741811;
  v18 = (unsigned int)a1[2];
  v7 = v13 + 24;
  v19 = (int *)((char *)a1 + v13 + 24);
  if ( v18 < (unsigned __int64)(v13 + 44) + 16 || (unsigned int)v18 < v7 + v19[2] || *v19 || v19[4] != 5 )
    return (unsigned int)-1073741811;
  v14 = BiConvertBootEnvironmentDeviceToNt((char *)a1 + v7, (__int64)&v26);
  if ( v14 >= 0 )
  {
    if ( v26 >= 0x2E && MEMORY[0] == 3 && *(_DWORD *)MEMORY[0x14] == 2 )
    {
      v20 = MEMORY[0x14];
      v21 = -1LL;
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)(MEMORY[0x14] + 2 * v22 + 0x14) );
      v23 = (unsigned int)(2 * v22);
      do
        ++v21;
      while ( *(_WORD *)(2 * v21 + 0x18) );
      v24 = 2 * v21 + 2;
      Pool2 = (char *)ExAllocatePool2(258LL, v24 + (unsigned int)v23, 1262764866LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (const void *)(v20 + 20), v23);
        memmove(&v8[v23], (const void *)0x18, v24);
        a4 = v29;
        a3 = v28;
        v6 = v27;
        goto LABEL_6;
      }
      v14 = -1073741801;
    }
    else
    {
      v14 = -1073741811;
    }
  }
LABEL_16:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  return (unsigned int)v14;
}
