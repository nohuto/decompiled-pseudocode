void __fastcall CChannelContext::SetOwnerProcessName(CChannelContext *this, const char *a2, int a3)
{
  void **v4; // rdi
  size_t v5; // rbx
  __int64 v6; // rax
  void *lpMem; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void **)((char *)this + 24);
  v5 = (unsigned int)(a3 + 1);
  v6 = std::make_unique<char [0],0>(&lpMem, v5);
  std::unique_ptr<char [0]>::operator=<std::default_delete<char [0]>,0>(v4, v6);
  if ( lpMem )
    operator delete(lpMem);
  memcpy_0(*v4, a2, v5);
}
