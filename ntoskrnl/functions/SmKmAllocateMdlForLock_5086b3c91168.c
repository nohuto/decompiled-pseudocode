__int64 __fastcall SmKmAllocateMdlForLock(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  __int64 Pool2; // rax

  v2 = 0LL;
  if ( (unsigned int)SmAcquireReleaseCharges(a1, a2, 3, 0) )
  {
    v5 = (a2 + 4095) >> 12;
    Pool2 = ExAllocatePool2(64LL, 8 * v5 + 48, 1280339315LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_WORD *)(Pool2 + 10) = 0;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      v2 = Pool2;
      *(_WORD *)(Pool2 + 8) = 8 * (v5 + 6);
      *(_DWORD *)(Pool2 + 40) = a2;
    }
    else
    {
      SmAcquireReleaseCharges(a1, a2, 3, 1);
    }
  }
  return v2;
}
