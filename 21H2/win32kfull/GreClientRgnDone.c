/*
 * XREFs of GreClientRgnDone @ 0x1C0287854
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02852FC (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void GreClientRgnDone()
{
  TRACKOBJ *i; // rbx
  int v1; // eax
  struct EWNDOBJ *j; // rdi
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    v1 = *((_DWORD *)i + 12);
    if ( (v1 & 0x4000000) != 0 )
    {
      *((_DWORD *)i + 12) = v1 & 0xFBFFFFFF;
      (*((void (__fastcall **)(_QWORD, __int64))i + 5))(0LL, 64LL);
    }
    for ( j = (struct EWNDOBJ *)*((_QWORD *)i + 3); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
      vSpWndobjChange(*(HDEV *)(*((_QWORD *)i + 4) + 48LL), j);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
