__int64 __fastcall Edgy::_FindListener(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  if ( !*(_DWORD *)a1 )
    return 0LL;
  while ( 1 )
  {
    result = *(_QWORD *)(a1 + 8) + 32LL * v3;
    if ( *(_QWORD *)result == a2 && *(_DWORD *)(result + 16) == a3 )
      break;
    if ( ++v3 >= *(_DWORD *)a1 )
      return 0LL;
  }
  return result;
}
