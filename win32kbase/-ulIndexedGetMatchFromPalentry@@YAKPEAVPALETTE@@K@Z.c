__int64 __fastcall ulIndexedGetMatchFromPalentry(struct PALETTE *a1, int a2)
{
  _DWORD *v2; // r9
  __int64 v3; // rax
  int v4; // edx
  _DWORD *v5; // rcx
  _DWORD *v6; // r8
  __int64 result; // rax
  unsigned int v8; // ecx

  if ( HIBYTE(a2) == 2 )
  {
    v8 = *((_DWORD *)a1 + 7);
    result = (unsigned __int8)a2;
    if ( (unsigned __int8)a2 >= v8 )
      return (unsigned __int8)a2 % v8;
  }
  else
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 14);
    v3 = *((unsigned int *)a1 + 7);
    v4 = a2 & 0xFFFFFF;
    v5 = v2;
    v6 = &v2[v3];
    if ( v2 == v6 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      while ( (*v5 & 0xFFFFFF) != v4 )
      {
        if ( ++v5 == v6 )
          return 0xFFFFFFFFLL;
      }
      return (unsigned int)(v5 - v2);
    }
  }
  return result;
}
