void __fastcall NP_CONTEXT::NpCleanup(struct NP_CONTEXT *a1, int a2)
{
  char *v2; // rbx
  char *v3; // rcx
  char *v4; // r8

  if ( !a2 )
  {
    v2 = (char *)a1 + 64;
    while ( 1 )
    {
      v3 = (char *)*((_QWORD *)v2 + 1);
      if ( v3 == v2 )
        break;
      v4 = *(char **)v2;
      *(_QWORD *)v2 = **(_QWORD **)v2;
      if ( v4 == v3 )
      {
        *(_QWORD *)v2 = 0LL;
        *((_QWORD *)v2 + 1) = v2;
      }
      else
      {
        --*(_QWORD *)v3;
      }
      if ( !v4 )
        break;
      ExFreePoolWithTag(v4, 0);
    }
  }
}
