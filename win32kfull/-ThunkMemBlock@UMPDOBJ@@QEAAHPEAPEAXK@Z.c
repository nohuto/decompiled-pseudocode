__int64 __fastcall UMPDOBJ::ThunkMemBlock(UMPDOBJ *this, const void **a2, unsigned int a3)
{
  size_t v3; // rbx
  const void *v6; // r14
  __int64 result; // rax
  void *v8; // rdi
  char *KernelPtr; // rax

  v3 = a3;
  v6 = *a2;
  if ( *a2 && a3 )
  {
    result = (__int64)UMPDOBJ::_AllocUserMem(this, a3, 0);
    v8 = (void *)result;
    if ( !result )
      return result;
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, (char *)result);
    memmove(KernelPtr, v6, v3);
    *a2 = v8;
  }
  return 1LL;
}
