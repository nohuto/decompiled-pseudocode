__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v7; // rdi
  void *v8; // rcx
  unsigned __int64 v9; // r8
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v7 = a3;
  if ( a3 <= 4 )
  {
    v8 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    if ( a3 )
      memset(v8, 0, 8LL * a3);
    goto LABEL_4;
  }
  v9 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v7 >= 8 )
  {
    *(_QWORD *)a1 = ExAllocatePool2(256LL, 8 * v7, 1265072196LL);
LABEL_4:
    *(_DWORD *)(a1 + 40) = v7;
    v9 = v7;
  }
  v10 = *(void **)a1;
  *(_WORD *)(a1 + 48) = 1;
  if ( v10 )
  {
    memmove(v10, a2, 8 * v9);
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    v11 = 1LL;
    v12 = *(unsigned int *)(a1 + 40);
    while ( v11 < v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) == *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 - 8) )
        return a1;
      ++v11;
    }
    if ( a5 )
    {
      v13 = 0LL;
      if ( (_DWORD)v12 )
      {
        do
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v13++) + 448LL));
        while ( v13 < *(unsigned int *)(a1 + 40) );
      }
      *(_BYTE *)(a1 + 49) = 1;
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
