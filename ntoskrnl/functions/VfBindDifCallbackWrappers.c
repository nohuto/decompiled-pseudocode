char __fastcall VfBindDifCallbackWrappers(int a1, __int64 a2, __int64 a3)
{
  char **v3; // rax
  char *v4; // r9
  char v5; // cl

  v3 = &VfDifIoCallbackThunks;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 + 7) == a1 )
    {
      v4 = v3[2];
      if ( v4 )
        break;
    }
    v3 += 4;
    if ( !*v3 )
      return 0;
  }
  *(_QWORD *)v4 = a2;
  v5 = 1;
  *((_DWORD *)v3 + 2) |= 1u;
  *(_DWORD *)(a3 + 12) |= *((_DWORD *)v3 + 2);
  return v5;
}
