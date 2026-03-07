void *__fastcall AUTOEXPANDALLOCATION::GetBuffer(const void **this, unsigned int a2, int a3)
{
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  void *v6; // rax
  void *v7; // rdi
  void *result; // rax
  int v9; // ecx
  void *v10; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 3) < a2 )
  {
    if ( a3 )
    {
      v10 = (void *)operator new[](a2, 0x674D444Fu, 256LL);
      v7 = v10;
      if ( v10 )
      {
        memmove(v10, *this, *((unsigned int *)this + 2));
        operator delete((void *)*this);
        goto LABEL_7;
      }
      operator delete((void *)*this);
    }
    else
    {
      v5 = (void *)*this;
      if ( v5 )
        operator delete(v5);
      v6 = (void *)operator new[](v4, 0x674D444Fu, 256LL);
      v7 = v6;
      if ( v6 )
      {
        memset(v6, 0, v4);
LABEL_7:
        *this = v7;
        result = v7;
        v9 = v7 != 0LL ? v4 : 0;
        *((_DWORD *)this + 2) = v9;
        *((_DWORD *)this + 3) = v9;
        return result;
      }
    }
    v7 = 0LL;
    goto LABEL_7;
  }
  result = (void *)*this;
  *((_DWORD *)this + 2) = a2;
  return result;
}
