__int64 __fastcall IsGenuineMouseInput(_DWORD *a1)
{
  unsigned int v1; // ecx
  int v3; // eax

  if ( (unsigned __int64)a1 <= 0x79 )
    return 0LL;
  if ( *a1 != 2 )
  {
    if ( ((*a1 - 18) & 0xFFFFFFEF) != 0 )
      return 0;
LABEL_9:
    v3 = a1[1];
    v1 = 1;
    if ( (unsigned int)(v3 - 1) <= 1 )
      return v1;
    return 0;
  }
  if ( a1[1] != 4 )
    goto LABEL_9;
  return 1LL;
}
