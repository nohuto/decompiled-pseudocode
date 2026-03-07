int __cdecl tolower(int C)
{
  int v1; // ebx
  __int64 v2; // rax
  int v3; // edx

  v1 = C;
  v2 = _pctype_func(C);
  v3 = (unsigned __int8)v1;
  if ( v1 == -1 )
    v3 = -1;
  if ( (*(_BYTE *)(v2 + 2LL * v3) & 1) != 0 )
    v1 += 32;
  return v1;
}
