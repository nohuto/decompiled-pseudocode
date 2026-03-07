__int64 __fastcall VIDMM_LINEAR_POOL::MarkMemoryBlocks(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  union _LARGE_INTEGER v9; // rdx
  int v10; // eax
  unsigned int v11; // r14d
  _BYTE *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // r8
  __int64 v21; // rcx
  void *v22; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v22 = 0LL;
    v9 = *(union _LARGE_INTEGER *)(a4 + 16LL * v4);
    if ( v9.QuadPart < *((_QWORD *)a1 + 1) )
      break;
LABEL_15:
    if ( ++v4 >= a3 )
      return 0LL;
  }
  v10 = VIDMM_LINEAR_POOL::AllocateAt(a1, v9, *(_QWORD *)(a4 + 16LL * v4 + 8), 0LL, &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = v22;
    if ( (_DWORD)v5 == 6 )
    {
      v13 = (char *)v22 + 24;
      v17 = *((_QWORD *)v22 + 3);
      if ( *(void **)(v17 + 8) != (char *)v22 + 24 || (v18 = (_QWORD *)*((_QWORD *)v22 + 4), (_QWORD *)*v18 != v13) )
LABEL_17:
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v16 = (_QWORD *)((char *)a1 + 120);
    }
    else
    {
      if ( (_DWORD)v5 != 7 )
      {
LABEL_14:
        v12[56] = v5;
        goto LABEL_15;
      }
      v13 = (char *)v22 + 24;
      v14 = *((_QWORD *)v22 + 3);
      if ( *(void **)(v14 + 8) != (char *)v22 + 24 )
        goto LABEL_17;
      v15 = (_QWORD *)*((_QWORD *)v22 + 4);
      if ( (_QWORD *)*v15 != v13 )
        goto LABEL_17;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = (_QWORD *)((char *)a1 + 136);
    }
    v19 = (_QWORD *)v16[1];
    if ( (_QWORD *)*v19 != v16 )
      goto LABEL_17;
    *v13 = v16;
    v13[1] = v19;
    *v19 = v13;
    v16[1] = v13;
    goto LABEL_14;
  }
  WdLogSingleEntry4(1LL, v5, *(_QWORD *)(a4 + 16LL * v4), *(_QWORD *)(a4 + 16LL * v4 + 8), v10);
  DxgkLogInternalTriageEvent(v21, 0x40000LL);
  return v11;
}
