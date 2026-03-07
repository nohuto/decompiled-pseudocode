__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  __int64 v9; // rsi

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 >= v5 + 64
      && (v7 = *(unsigned __int16 *)(v5 + v4 + 38), v6 >= v7 + 1)
      && (v8 = (unsigned __int8 *)(v4 + v7 + v5), *v8)
      && (v9 = *v8, v6 >= v9 + (int)v5 + (int)v7 + 1LL) )
    {
      memmove(a1, v8 + 1, *v8);
      a1[v9] = 0;
    }
    else
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
