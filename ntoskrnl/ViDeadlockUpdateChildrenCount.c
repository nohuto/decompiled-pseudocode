PVOID __fastcall ViDeadlockUpdateChildrenCount(__int64 **a1, int a2)
{
  __int64 *i; // r8
  PVOID result; // rax
  int v4; // edx

  *((_DWORD *)a1 + 19) += a2;
  for ( i = *a1; i; i = (__int64 *)*i )
  {
    *((_DWORD *)i + 19) += a2;
    a1 = (__int64 **)i;
  }
  result = ViDeadlockGlobals;
  v4 = *((_DWORD *)a1 + 19);
  if ( v4 > *((_DWORD *)ViDeadlockGlobals + 8282) )
    *((_DWORD *)ViDeadlockGlobals + 8282) = v4;
  return result;
}
