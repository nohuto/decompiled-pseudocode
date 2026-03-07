__int64 __fastcall KiAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  unsigned __int8 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  result = a1 ^ ((unsigned __int8)a1 ^ (unsigned __int8)a2) & 1;
  *a3 = result;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v5 = *(unsigned __int8 **)(a1 + 34904);
    v4 = (__int64 *)(v5 + 8);
    result = *v5;
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    v4 = &v8;
    result = 1LL;
  }
  v6 = (unsigned int)result;
  do
  {
    v7 = *v4;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v9);
        result = *(_QWORD *)(v7 + 48);
      }
      while ( result );
    }
    ++v4;
    --v6;
  }
  while ( v6 );
  return result;
}
