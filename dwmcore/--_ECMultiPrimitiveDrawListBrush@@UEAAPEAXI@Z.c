CMultiPrimitiveDrawListBrush *__fastcall CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        CMultiPrimitiveDrawListBrush *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int Current; // eax
  struct CThreadContext *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x60uLL);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v9);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v6 = v9;
      if ( *((_DWORD *)v9 + 93) >= *((_DWORD *)v9 + 92) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v9 + 47);
        ++*((_DWORD *)v6 + 93);
        *((_QWORD *)v6 + 47) = this;
      }
    }
  }
  return this;
}
