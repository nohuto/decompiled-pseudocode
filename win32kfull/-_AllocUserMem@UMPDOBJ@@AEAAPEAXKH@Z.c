char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  unsigned int v4; // edi
  char v6; // al
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  size_t v11; // r14
  __int64 ThreadWin32Thread; // rbx
  __int64 v13; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v15; // rdx
  UMPDOBJ *v16; // rcx
  __int64 v17; // rcx
  char *KernelPtr; // rax

  v4 = a2;
  if ( a2 + 7 < a2 )
  {
    v6 = 0;
  }
  else
  {
    v4 = (a2 + 7) & 0xFFFFFFF8;
    v6 = 1;
  }
  if ( !v6 )
    return 0LL;
  v7 = 0LL;
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    v8 = *((_QWORD *)this + 49);
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 + 48);
      v10 = v9 + v4;
      if ( (unsigned int)v9 + v4 >= (unsigned int)v9 && (unsigned __int64)v10 <= *(_QWORD *)(v8 + 24) )
      {
        v7 = (char *)(v9 + *(_QWORD *)(v8 + 16) - *(_QWORD *)(v8 + 40));
        *(_DWORD *)(v8 + 48) = v10;
      }
    }
    v11 = v4;
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 106) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 24) = 0;
      *((_QWORD *)this + 7) = v13;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v15 = *((_QWORD *)this + 7);
  if ( !v15 )
    return 0LL;
  if ( !*(_QWORD *)v15 )
    return 0LL;
  v11 = v4;
  v16 = (UMPDOBJ *)(*(_QWORD *)(v15 + 16) - *(unsigned int *)(v15 + 24));
  if ( v4 > (unsigned __int64)v16 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v16, (struct _UMPDHEAP *)v15, v4) )
    return 0LL;
  v17 = *((_QWORD *)this + 7);
  v7 = (char *)(*(_QWORD *)v17 + *(unsigned int *)(v17 + 24));
  *(_DWORD *)(v17 + 24) += v4;
LABEL_21:
  if ( v7 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v7);
      memset_0(KernelPtr, 0, v11);
    }
  }
  return v7;
}
