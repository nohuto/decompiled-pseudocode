unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::first(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1 )
      return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_DWORD *)a1 & 3) == 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  return (unsigned __int64)a1;
}
