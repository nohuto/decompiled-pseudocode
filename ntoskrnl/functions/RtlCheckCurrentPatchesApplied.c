__int64 __fastcall RtlCheckCurrentPatchesApplied(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int *v6; // r11
  __int64 v9; // rax
  int v10; // eax

  v5 = 0;
  v6 = a4;
  if ( !a5 )
    return 1LL;
  while ( 1 )
  {
    v9 = *v6;
    if ( (_DWORD)v9 )
    {
      v10 = RtlpCheckFunctionPatchApplied(a1 + v9, a2, a3, a3);
      if ( v10 != v5 )
        break;
    }
    ++v5;
    v6 = (unsigned int *)((char *)v6 + 6);
    if ( v5 >= a5 )
      return 1LL;
  }
  return 0LL;
}
