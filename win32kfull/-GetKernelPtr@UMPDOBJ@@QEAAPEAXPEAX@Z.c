char *__fastcall UMPDOBJ::GetKernelPtr(char **this, char *a2)
{
  int v4; // eax
  __int64 v5; // r8
  char *result; // rax

  v4 = UMPDOBJ::bSandboxedClient((UMPDOBJ *)this);
  v5 = 0LL;
  if ( !v4 )
    return a2;
  result = this[49];
  if ( result )
  {
    if ( a2 )
      return &a2[*((_QWORD *)result + 5)];
    return (char *)v5;
  }
  return result;
}
