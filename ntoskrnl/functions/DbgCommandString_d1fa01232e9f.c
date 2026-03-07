__int64 __fastcall DbgCommandString(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  do
    ++v2;
  while ( *(_BYTE *)(a2 + v2) );
  return DebugService2();
}
