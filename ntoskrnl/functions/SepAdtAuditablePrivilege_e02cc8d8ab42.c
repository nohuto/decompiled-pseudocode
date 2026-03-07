char __fastcall SepAdtAuditablePrivilege(_DWORD *a1, unsigned int a2)
{
  char v2; // r8
  unsigned int v4; // r9d
  LUID **v5; // rdx
  unsigned int i; // r10d

  v2 = 0;
  v4 = 0;
  if ( a2 )
  {
    while ( 2 )
    {
      v5 = off_14000ACA0;
      for ( i = 0; i < 0xE; ++i )
      {
        if ( *a1 == (*v5)->LowPart && a1[1] == (*v5)->HighPart )
          return 1;
        ++v5;
      }
      ++v4;
      a1 += 3;
      if ( v4 < a2 )
        continue;
      break;
    }
  }
  return v2;
}
