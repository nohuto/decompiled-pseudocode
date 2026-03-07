char __fastcall PopWakeSourceIsParent(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  char v3; // bl
  unsigned __int16 *v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rax

  v2 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v3 = 0;
  if ( v2 )
  {
    do
    {
      v6 = v2;
      v2 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
    }
    while ( v2 );
    while ( v6[20] != *(_WORD *)a2
         || wcsncmp(*((const wchar_t **)v6 + 6), *(const wchar_t **)(a2 + 8), (unsigned __int64)v6[20] >> 1) )
    {
      v7 = *(unsigned __int16 **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v6 = v7;
          v7 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
        }
        while ( v7 );
      }
      else
      {
        v8 = (unsigned __int16 *)*((_QWORD *)v6 + 2);
        v6 = 0LL;
        if ( v8 != IopRootDeviceNode )
          v6 = v8;
        if ( v6 == a1 )
          return v3;
      }
      if ( !v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
