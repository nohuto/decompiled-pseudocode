__int64 __fastcall HsaSlGetPermissions(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *a1;
  v2 = v1 & 0x4000000000000000LL;
  v3 = (v1 >> 61) & 1;
  result = (unsigned int)v3 | 2;
  if ( !v2 )
    return (unsigned int)v3;
  return result;
}
