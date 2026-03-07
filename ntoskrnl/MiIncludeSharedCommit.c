__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  int v3; // edx
  _QWORD *i; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
    return 1LL;
  if ( (v1 & 0x400) == 0 && a1 != qword_140C654A0 && !*(_QWORD *)(a1 + 64) )
  {
    v3 = 0;
    for ( i = &unk_140C65438; a1 != *i; i += 8 )
    {
      if ( ++v3 )
        return 1LL;
    }
  }
  return 0LL;
}
