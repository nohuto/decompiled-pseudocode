/*
 * XREFs of MiInitializePageFaultPacket @ 0x1402A346C
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiFlushWaitForReadInProgress @ 0x140633B18 (MiFlushWaitForReadInProgress.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiInitializePageFaultPacket(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  int v6; // r14d
  _DWORD *v9; // r10
  int v10; // eax
  __int64 result; // rax

  v6 = a3;
  memset(a5 + 3, 0, 0x70uLL);
  MiFillPteHierarchy(a2, a5 + 3);
  v9 = a5 + 10;
  if ( (a1 & 0x40) != 0 )
  {
    *v9 |= 0x10u;
    a1 &= ~2uLL;
  }
  a5[1] = a1;
  v10 = *v9 ^ (32 * v6);
  *a5 = a2;
  result = v10 & 0x20;
  *v9 ^= result;
  a5[2] = a4;
  return result;
}
