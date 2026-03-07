__int64 __fastcall NtImpersonateClientOfPort(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = NtAlpcImpersonateClientOfPort(a1, a2, 0LL);
  if ( (_DWORD)result == -1073740030 )
    return 3221226015LL;
  return result;
}
