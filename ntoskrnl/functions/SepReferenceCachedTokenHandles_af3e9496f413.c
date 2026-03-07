__int64 __fastcall SepReferenceCachedTokenHandles(unsigned int a1, HANDLE *a2, __int64 a3)
{
  NTSTATUS v3; // ebp
  __int64 v4; // rbx
  HANDLE *v8; // rdi

  v3 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      v8 = (HANDLE *)(a3 + 8 * v4);
      v3 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *a2, (HANDLE)0xFFFFFFFFFFFFFFFFLL, v8, 0, 0x200u, 2u);
      if ( v3 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      ++a2;
      if ( (unsigned int)v4 >= a1 )
        return (unsigned int)v3;
    }
    for ( ; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      ZwClose(*v8--);
  }
  return (unsigned int)v3;
}
