void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*a1 & 3) == 1 )
    {
      v3 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
      *(_QWORD *)(v3 - 16) += a2;
      return;
    }
    if ( (*a1 & 3) != 2 )
    {
      if ( (*a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *(_QWORD *)a1 = 2LL;
    }
  }
}
