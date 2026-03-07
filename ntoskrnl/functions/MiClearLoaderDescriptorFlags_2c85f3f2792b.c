unsigned __int64 __fastcall MiClearLoaderDescriptorFlags(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rdx

  v1 = a1 + 352;
  result = *(_QWORD *)(v1 + 8);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v3 = result ^ (v1 | 1);
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 8);
  }
  while ( v3 )
  {
    *(_DWORD *)(v3 + 24) &= 0x1FFFFFFFu;
    v5 = v3;
    result = *(_QWORD *)(v3 + 8);
    if ( result )
    {
      v4 = *(unsigned __int64 **)result;
      v3 = *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)result )
      {
        do
        {
          result = *v4;
          v3 = (unsigned __int64)v4;
          v4 = (unsigned __int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v3 || *(_QWORD *)v3 == v5 )
          break;
        v5 = v3;
      }
    }
  }
  return result;
}
