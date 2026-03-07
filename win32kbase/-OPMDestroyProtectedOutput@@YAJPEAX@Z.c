__int64 __fastcall OPMDestroyProtectedOutput(void *a1)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ecx

  v2 = SGDGetSessionState(a1);
  v3 = COPM::DestroyProtectedOutput(*(void ***)(*(_QWORD *)(v2 + 24) + 3824LL), a1);
  v4 = 0;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v4;
}
