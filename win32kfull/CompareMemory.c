__int64 __fastcall CompareMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char v4; // r10
  char v5; // r9

  v3 = a1 - (_QWORD)a2;
  while ( 1 )
  {
    v4 = a2[v3];
    --a3;
    v5 = *a2++;
    if ( v4 != v5 )
      break;
    if ( !a3 )
      return 1LL;
  }
  return 0LL;
}
