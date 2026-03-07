__int64 __fastcall GetCloakFlags(const struct WINDOWCOMPOSITIONINFO *a1)
{
  int v1; // edx
  unsigned int v2; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)a1;
  v2 = 0;
  if ( (*(_DWORD *)a1 & 0x400) != 0 || (v1 & 0x2000) != 0 )
    v2 = 1;
  result = v2 | 2;
  if ( (v1 & 0x800) == 0 )
    return v2;
  return result;
}
