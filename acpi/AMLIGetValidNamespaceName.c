__int64 __fastcall AMLIGetValidNamespaceName(__int64 a1, int *a2)
{
  int *v2; // r10
  unsigned int v3; // r8d
  __int64 v4; // rbx
  unsigned int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // rdi
  int v9; // [rsp+18h] [rbp+18h] BYREF

  v2 = &v9;
  v3 = 0;
  v9 = 1600085855;
  v4 = a1;
  v5 = 0;
  v6 = a1 - (_QWORD)&v9;
  do
  {
    LOBYTE(a1) = *((_BYTE *)v2 + v6);
    if ( !(_BYTE)a1 )
      break;
    if ( (unsigned __int8)(a1 - 48) > 0x2Fu || (v7 = 0x87FFFFFE03FFLL, !_bittest64(&v7, (unsigned int)(a1 - 48))) )
    {
      if ( (unsigned __int8)(a1 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    *(_BYTE *)v2 = a1;
    ++v5;
    v2 = (int *)((char *)v2 + 1);
  }
  while ( v5 < 4 );
  if ( *(_BYTE *)(v5 + v4) )
    return (unsigned int)-1073741811;
  if ( a2 )
    *a2 = v9;
  return v3;
}
