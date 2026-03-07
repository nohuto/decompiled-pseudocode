unsigned __int64 __fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  *a2 = 0LL;
  v3 = (void *)a1;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    result = PsGetCurrentProcessWin32Process(v4);
  }
  else
  {
    if ( PsLookupProcessByProcessId(v3, a2) < 0 )
      return 0LL;
    result = PsGetProcessWin32Process(*a2);
  }
  if ( result )
    result &= -(__int64)(*(_QWORD *)result != 0LL);
  return result;
}
