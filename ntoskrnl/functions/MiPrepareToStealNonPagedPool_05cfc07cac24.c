unsigned __int64 __fastcall MiPrepareToStealNonPagedPool(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v3 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
  {
    ++dword_140C1354C;
    return 0LL;
  }
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v4 & 0x220) != 0x20 )
  {
    ++dword_140C13550;
    return 0LL;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5, v4) )
  {
    ++dword_140C13554;
    return 0LL;
  }
  KeFlushSingleTb(v3, 0, 2u);
  return v5;
}
