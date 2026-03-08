/*
 * XREFs of PopSetHiberFileMcb @ 0x1407FC4A4
 * Callers:
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140985EE0 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, unsigned int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_140C3CA80) = a2;
    Pool2 = (void *)ExAllocatePool2(64LL, a2, 1919052136LL);
    qword_140C3CA78 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140C3CA80);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
