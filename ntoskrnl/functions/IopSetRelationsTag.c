__int64 __fastcall IopSetRelationsTag(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rcx
  unsigned int v4; // r11d
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  if ( PipIsDeviceInDeviceObjectList(v3, a2, (__int64)&v7) )
  {
    v5 = v7;
    if ( (*(_DWORD *)(v7 + 16) & 1) != 0 )
      --(*a1)[2];
    *(_DWORD *)(v5 + 16) |= 1u;
    ++(*a1)[2];
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
