DwmDbg::DbgString *DwmDbg::DbgString::DbgString(char **this, const char *a2, ...)
{
  SIZE_T v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rcx
  char v9; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  *this = 0LL;
  v3 = vscprintf(a2, va) + 1;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v5, 0, v3);
  if ( this == (char **)&v9 )
  {
    v7 = v6;
  }
  else
  {
    v7 = *this;
    *this = v6;
    if ( !v7 )
      goto LABEL_4;
  }
  operator delete(v7);
LABEL_4:
  if ( *this )
  {
    vsprintf_s(*this, v3, a2, va);
    puts(*this);
  }
  return (DwmDbg::DbgString *)this;
}
