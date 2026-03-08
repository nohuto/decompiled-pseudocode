/*
 * XREFs of MiScrubActiveLargePage @ 0x140A43704
 * Callers:
 *     MiScrubLargePageRegions @ 0x140A437AC (MiScrubLargePageRegions.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiScrubInterrupted @ 0x14065BE30 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePage @ 0x140A43D34 (MiScrubProcessLargePage.c)
 */

void __fastcall MiScrubActiveLargePage(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  _KPROCESS *v8; // r9
  $115DCDF994C6370D29323EAB0E0C9502 v9; // [rsp+20h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = 0LL;
  memset(&v9, 0, sizeof(v9));
  if ( *(_QWORD *)(v3 + 64) )
  {
    do
    {
      if ( MiScrubInterrupted((__int64)a1) )
        break;
      KiStackAttachProcess(v8, 0, (__int64)&v9);
      MiScrubProcessLargePage(a1, a2, a3);
      KiUnstackDetachProcess(&v9);
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v3 + 64) );
  }
}
