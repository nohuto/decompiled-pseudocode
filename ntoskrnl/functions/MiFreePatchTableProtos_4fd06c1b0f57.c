void __fastcall MiFreePatchTableProtos(PVOID P)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi

  v1 = 0LL;
  v3 = 8LL * (((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0));
  if ( v3 )
  {
    do
    {
      MiUnlockPagedAddress((unsigned __int64)P + v1);
      v1 += 4096LL;
    }
    while ( v1 < v3 );
  }
  ExFreePoolWithTag(P, 0);
}
