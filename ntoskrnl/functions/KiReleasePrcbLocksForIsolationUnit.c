__int64 __fastcall KiReleasePrcbLocksForIsolationUnit(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // r8
  int v5; // eax
  __int64 result; // rax
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = v3;
  if ( (v1 & 1) != 0 )
  {
    v7 = *(unsigned __int8 **)(v3 + 34904);
    v4 = (unsigned __int64 *)(v7 + 8);
    v5 = *v7;
    if ( !v5 )
    {
      result = 0LL;
      *a1 = 0LL;
      return result;
    }
  }
  else
  {
    v4 = &v8;
    v5 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v4[--v5] + 48), 0LL);
  while ( v5 );
  result = 0LL;
  *a1 = 0LL;
  return result;
}
