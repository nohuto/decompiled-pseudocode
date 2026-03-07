__int64 __fastcall MiReleasePageFileSpace(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (a2 & 0x400) != 0 )
    return 0LL;
  if ( (a2 & 4) != 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
    if ( !a3 )
      v5 &= ~2uLL;
  }
  else
  {
    if ( !a3 || (a2 & 2) == 0 )
      return 0LL;
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7);
  }
  if ( !v5 )
    return 0LL;
  MiReleasePageFileInfo(a1, v5, 0);
  return 1LL;
}
