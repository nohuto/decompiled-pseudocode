__int64 __fastcall HsaConfigureSettings(_DWORD *a1, _DWORD *a2)
{
  int v3; // ecx
  int v4; // r8d
  __int64 result; // rax
  int v6; // ecx

  v3 = a2[3];
  if ( v3 )
  {
    v4 = a2[4];
    if ( !v4 || ((v4 - 1) & v4) != 0 )
      return 3221225485LL;
  }
  a1[44] = v3;
  v6 = 512;
  a1[43] = a2[2];
  if ( a2[4] < 0x200u )
    v6 = a2[4];
  result = 0LL;
  a1[45] = v6;
  return result;
}
