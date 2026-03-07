__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbp
  void *v5; // r14
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // r15
  void *Pool2; // rdi
  int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // esi
  unsigned int v13; // r10d
  __int64 v14; // rdi
  __int64 v15; // r11
  int v16; // r8d
  unsigned int v17; // edx
  _QWORD *v18; // r9
  __int64 v19; // rax
  unsigned int i; // r9d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+60h] [rbp-78h]
  ULONGLONG v26; // [rsp+68h] [rbp-70h] BYREF
  __int64 v27; // [rsp+70h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-60h]
  void *v29; // [rsp+80h] [rbp-58h]
  int v30; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+10h]
  int v32; // [rsp+F0h] [rbp+18h]
  unsigned int v33; // [rsp+F8h] [rbp+20h]

  v32 = a3;
  v31 = a2;
  v4 = 0LL;
  v28 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = 1;
  v7 = *(unsigned int *)(v28 + 40);
  v8 = *(unsigned int *)(v28 + 44);
  v27 = *(_QWORD *)(a1 + 16);
  Pool2 = (void *)ExAllocatePool2(256LL, 4096LL, 1986350405LL);
  v29 = Pool2;
  v10 = 0;
  v26 = (ULONGLONG)Pool2;
  if ( Pool2 )
    v10 = 4096;
  v25 = v10;
  v30 = v10;
  if ( !(_DWORD)v7 && !(_DWORD)v8 )
  {
    v11 = 0;
    v33 = 1;
    v13 = 0;
    v12 = 0;
    goto LABEL_9;
  }
  v11 = v8 + v7;
  v33 = *(_DWORD *)(a1 + 24) / (unsigned int)(v8 + v7);
  if ( (_DWORD)v7 )
  {
    v4 = (_QWORD *)EmpAllocatePool(8 * v7, (__int64 *)&v26, &v30);
    if ( !v4 )
      goto LABEL_22;
  }
  if ( !(_DWORD)v8 || (v5 = (void *)EmpAllocatePool(4 * v8, (__int64 *)&v26, &v30)) != 0LL )
  {
    v12 = 0;
    v13 = v8 + v7;
    if ( !v33 )
    {
LABEL_18:
      v23 = v25;
      if ( v5 )
        EmpFreePool(v5, (unsigned __int64)Pool2, v25);
      goto LABEL_20;
    }
LABEL_9:
    v14 = v28;
    do
    {
      v15 = v27;
      v16 = v12 * v11;
      v17 = 0;
      if ( (_DWORD)v7 )
      {
        v18 = v4;
        do
        {
          v19 = v16 + v17++;
          *v18++ = *((_QWORD *)EmpStringTable + *(unsigned int *)(v15 + 4 * v19));
        }
        while ( v17 < (unsigned int)v7 );
      }
      for ( i = v7; i < v13; *((_DWORD *)v5 + v22) = v21 )
      {
        v21 = *(_DWORD *)(v15 + 4LL * (v16 + i));
        v22 = i - (unsigned int)v7;
        ++i;
      }
      v6 = EmpEvaluateNodeLink(*(_QWORD *)(v14 + 96), (__int64)v4, v7, (__int64)v5, v8, v31, v32, 0LL, 0, v26, v30);
      if ( v6 - 1 <= 1 )
        break;
      ++v12;
      v13 = v11;
    }
    while ( v12 < v33 );
    Pool2 = v29;
    goto LABEL_18;
  }
  v23 = v25;
LABEL_20:
  if ( v4 )
    EmpFreePool(v4, (unsigned __int64)Pool2, v23);
LABEL_22:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x76654D45u);
  return v6;
}
