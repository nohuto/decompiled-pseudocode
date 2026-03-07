__int64 __fastcall bIsSourceBGRA(struct SURFACE *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  int v3; // ecx
  _DWORD *v5; // rcx

  v1 = 0;
  if ( *((_DWORD *)a1 + 24) == 6 )
  {
    v2 = *((_QWORD *)a1 + 16);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 24);
      if ( (v3 & 8) != 0 )
        return 1;
      if ( (v3 & 2) != 0 )
      {
        v5 = *(_DWORD **)(v2 + 112);
        if ( *v5 == 16711680 && v5[1] == 65280 && v5[2] == 255 )
          return 1;
      }
    }
  }
  return v1;
}
