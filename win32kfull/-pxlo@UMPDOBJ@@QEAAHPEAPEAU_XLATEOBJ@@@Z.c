__int64 __fastcall UMPDOBJ::pxlo(UMPDOBJ *this, struct _XLATEOBJ **a2)
{
  _DWORD *v2; // rbx
  int v5; // edx
  char *v6; // rax
  char *v7; // rsi
  const void *v8; // rbp
  size_t v9; // rbx
  char *KernelPtr; // rax

  v2 = *a2;
  if ( *a2 )
  {
    v5 = v2[3];
    if ( v5 )
    {
      v6 = UMPDOBJ::_AllocUserMem(this, 4 * v5, 0);
      v7 = v6;
      if ( !v6 )
        return 0LL;
      v8 = (const void *)*((_QWORD *)v2 + 2);
      if ( !v8 )
        return 0LL;
      v9 = 4LL * (unsigned int)v2[3];
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v6);
      memmove(KernelPtr, v8, v9);
    }
    else
    {
      v7 = 0LL;
    }
    if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 208), (const void **)a2, 0x18u, 0LL) )
      return 0LL;
    *((_QWORD *)UMPDOBJ::GetKernelPtr((char **)this, (char *)*a2) + 2) = v7;
  }
  return 1LL;
}
