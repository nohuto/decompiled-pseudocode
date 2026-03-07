__int64 __fastcall HvlpPhase0Enlightenments(__int64 a1)
{
  void *v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = 0LL;
  v5 = 0LL;
  if ( (HvlEnlightenments & 0x100) == 0 )
    return 0LL;
  HvlpGetRegister64(589847LL, &v6);
  v3 = v6 | 1;
  if ( (HvlpFlags & 2) != 0 )
  {
    v5 = v6 & 0xFFFFFFFFFFFFF000uLL;
    v1 = (void *)((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_140C01B30)(
                   v6 & 0xFFFFFFFFFFFFF000uLL,
                   1LL,
                   4LL);
    if ( v1 )
    {
LABEL_5:
      HvlpSetRegister64(589847LL, v3);
      if ( v1 )
        HvlpReferenceTscPage = v1;
      return 0LL;
    }
  }
  else
  {
    if ( !a1 )
    {
      v3 = v3 & 0xFFF | MmGetPhysicalAddress(HvlpReferenceTscPage).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_5;
    }
    v1 = (void *)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))qword_140C01B28)(a1, 1LL, &v5);
    if ( v1 )
    {
      v3 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)v3) & 0xFFF;
      goto LABEL_5;
    }
  }
  return 3221225626LL;
}
