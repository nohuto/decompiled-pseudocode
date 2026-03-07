__int64 __fastcall MiIsPdeOrAboveAccessible(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  result = 1LL;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      if ( ((v1 >> 5) & 0x1F) == 0x18 )
        return 0LL;
    }
    else
    {
      v3 = MiSwizzleInvalidPte(512LL);
      LOBYTE(v5) = v4 != v3;
      return v5;
    }
  }
  return result;
}
