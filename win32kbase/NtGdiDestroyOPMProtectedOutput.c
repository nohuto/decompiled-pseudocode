__int64 __fastcall NtGdiDestroyOPMProtectedOutput(void *a1)
{
  int v1; // ecx
  __int64 result; // rax

  v1 = OPMDestroyProtectedOutput(a1);
  result = 0LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return result;
}
