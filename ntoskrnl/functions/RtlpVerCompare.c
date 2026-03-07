bool __fastcall RtlpVerCompare(int a1, int a2, int a3, bool *a4, char a5)
{
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  char *v12; // rax
  signed __int64 v13; // r8
  char v14; // cl
  int v15; // ebx
  char v16[24]; // [rsp+20h] [rbp-58h] BYREF
  char pszDest[24]; // [rsp+38h] [rbp-40h] BYREF

  if ( (a5 & 1) != 0 )
  {
    RtlStringCbPrintfA(pszDest, 0x14uLL, "%d", a2);
    RtlStringCbPrintfA(v16, 0x14uLL, "%d", a3);
    a2 = 0;
    v12 = v16;
    v13 = pszDest - v16;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 != v12[v13] )
        break;
      ++v12;
      if ( !v14 )
      {
        a3 = 0;
        goto LABEL_2;
      }
    }
    a3 = (unsigned __int8)*v12 < (unsigned __int8)v12[v13] ? -1 : 1;
  }
LABEL_2:
  *a4 = a2 == a3;
  v8 = a1 - 1;
  if ( !v8 )
    return a3 == a2;
  v9 = v8 - 1;
  if ( !v9 )
    return a3 > a2;
  v10 = v9 - 1;
  if ( !v10 )
    return a3 >= a2;
  v15 = v10 - 1;
  if ( !v15 )
    return a3 < a2;
  if ( v15 == 1 )
    return a3 <= a2;
  return 0;
}
