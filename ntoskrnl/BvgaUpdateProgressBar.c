/*
 * XREFs of BvgaUpdateProgressBar @ 0x14054D230
 * Callers:
 *     BvgaIndicateProgress @ 0x140B906E0 (BvgaIndicateProgress.c)
 * Callees:
 *     BvgaAcquireLock @ 0x14054CD30 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14054D030 (BvgaReleaseLock.c)
 */

char __fastcall BvgaUpdateProgressBar(int a1)
{
  int v1; // ebx
  int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // rdi

  v1 = 0;
  if ( ShowProgressBar )
  {
    if ( BvgaBootDriverInstalled )
    {
      if ( !BvgaDisplayState )
      {
        v2 = 18 * (BvgaProgressState + dword_140C5ECF8 * a1);
        v3 = (unsigned int)((unsigned __int64)(1759218605LL * v2) >> 32) >> 31;
        if ( v2 / 10000 > 0 )
        {
          v4 = (unsigned int)(v2 / 10000);
          do
          {
            BvgaAcquireLock();
            VidSolidColorFill(
              (unsigned int)(v1 + ProgressBarLeft),
              (unsigned int)ProgressBarTop,
              (unsigned int)(v1 + ProgressBarLeft + 7),
              (unsigned int)(ProgressBarTop + 7),
              11);
            LOBYTE(v3) = BvgaReleaseLock();
            v1 += 9;
            --v4;
          }
          while ( v4 );
        }
      }
    }
  }
  return v3;
}
