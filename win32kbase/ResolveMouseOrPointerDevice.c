__int64 __fastcall ResolveMouseOrPointerDevice(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax

  v3 = 0;
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a1 != -1 )
  {
    v7 = HMValidateHandleNoSecure(a1, 19);
    if ( !v7 )
      return v3;
    if ( *(_BYTE *)(v7 + 48) )
    {
      if ( (*(_DWORD *)(v7 + 200) & 0x80u) == 0 )
        return v3;
      *a2 = *(_QWORD *)(v7 + 472);
    }
    else
    {
      if ( !a3 )
        return v3;
      *a3 = 1;
    }
    return 1;
  }
  if ( a3 )
  {
    *a3 = 1;
    return 1;
  }
  return v3;
}
