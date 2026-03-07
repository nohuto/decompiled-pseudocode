__int64 __fastcall UMPDOBJ::ThunkDDIOBJ(
        UMPDOBJ *this,
        struct _DDIOBJMAP *a2,
        const void **a3,
        unsigned int a4,
        void *Src)
{
  size_t v5; // rbx
  const void *v9; // r14
  __int64 result; // rax
  void *v11; // rsi
  const void *v12; // rdi
  char *KernelPtr; // rax

  v5 = a4;
  v9 = *a3;
  if ( !*a3 )
    return 1LL;
  result = (__int64)UMPDOBJ::_AllocUserMem(this, a4, 0);
  v11 = (void *)result;
  if ( result )
  {
    v12 = v9;
    if ( Src )
      v12 = Src;
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, (char *)result);
    memmove(KernelPtr, v12, v5);
    *(_QWORD *)a2 = v9;
    *((_QWORD *)a2 + 1) = v11;
    *a3 = v11;
    return 1LL;
  }
  return result;
}
