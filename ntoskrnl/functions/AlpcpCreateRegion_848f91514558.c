__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  _DWORD *Blob; // rax
  _DWORD *v22; // rsi
  _QWORD *v23; // rax

  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) != CurrentThread->ApcState.Process )
    return 3221225506LL;
  v9 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
  v10 = (unsigned int)(AlpcpRegionGranularity - 1);
  v11 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
  v12 = v11 & (v10 + a3);
  if ( v9 >= a3 && v12 >= a3 )
  {
    v13 = (_QWORD *)(BugCheckParameter2 + 56);
    if ( a2 )
    {
      a2 = v11 & (v10 + a2);
    }
    else
    {
      v14 = (_QWORD *)*v13;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      if ( (_QWORD *)*v13 == v13 )
      {
LABEL_17:
        if ( *(_QWORD *)(BugCheckParameter2 + 8) - a2 < v12 )
          return 3221225626LL;
      }
      else
      {
        do
        {
          v18 = v14[3];
          v19 = v18 - a2;
          if ( v18 - a2 == v12 )
          {
            v13 = v14;
            goto LABEL_18;
          }
          if ( v19 > v12 && (!v15 || v16 > v19) )
          {
            v15 = v14;
            v17 = a2;
            v16 = v14[3] - a2;
          }
          v20 = v14[4];
          v14 = (_QWORD *)*v14;
          a2 = v18 + v20;
        }
        while ( v14 != v13 );
        if ( !v15 )
          goto LABEL_17;
        v13 = v15;
        a2 = v17;
      }
    }
LABEL_18:
    Blob = (_DWORD *)AlpcpAllocateBlob(AlpcRegionType, 88LL);
    v22 = Blob;
    if ( Blob )
    {
      memset(Blob, 0, 0x58uLL);
      v22[12] &= ~1u;
      *((_QWORD *)v22 + 8) = v22 + 14;
      *((_QWORD *)v22 + 7) = v22 + 14;
      *((_QWORD *)v22 + 3) = a2;
      *((_QWORD *)v22 + 4) = v12;
      *((_QWORD *)v22 + 5) = v9;
      AlpcpReferenceBlob(BugCheckParameter2);
      *((_QWORD *)v22 + 2) = BugCheckParameter2;
      *((_QWORD *)v22 + 1) = v13[1];
      *(_QWORD *)v22 = v13;
      v23 = (_QWORD *)v13[1];
      *a4 = v22;
      *v23 = v22;
      v13[1] = v22;
      ++*(_DWORD *)(BugCheckParameter2 + 52);
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225485LL;
}
